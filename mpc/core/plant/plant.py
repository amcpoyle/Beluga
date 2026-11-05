"""Independent time integration of the unchanged double-wishbone plant."""

import casadi as ca
import numpy as np

from laptime_core.vehicle import MPC_SIGMA_MAX, combined_slip_sq

from .actuation import RateActuator


class TimePlant:
    """State = [all reduced FMU states, source-path s, source-path n].

    Steering and independent pedal positions remain actual FMU states. The
    actuator interface chooses rates and event times; integration never assigns
    predictor states to the plant. Constraint checks are sampled diagnostics.
    """

    def __init__(self, vehicle, track, profiles, *, actuator=None, max_step=0.001,
                 car_half_width=1.0, track_margin=0.2, slip_tolerance=1e-3, slip_stop=True):
        if not np.isfinite(max_step) or max_step <= 0:
            raise ValueError("plant step must be finite and positive")
        self.vehicle, self.track = vehicle, track
        self.actuator = RateActuator() if actuator is None else actuator
        self.max_step = max_step
        self.car_half_width, self.track_margin, self.slip_tolerance = car_half_width, track_margin, slip_tolerance
        # slip_stop=False treats combined slip as a recorded performance measure
        # (thesis Sec. 7.3.1) instead of a run-ending limit; other checks still stop.
        self.slip_stop = slip_stop
        self.slip_peak = (MPC_SIGMA_MAX, MPC_SIGMA_MAX)   # brush |sigma| of rho = 1 (laptime_core/vehicle.py)
        self.nx = vehicle.nx + 2
        self.names = vehicle.names + ["s", "n"]
        x, u, dt = ca.MX.sym("plant_x", self.nx), ca.MX.sym("plant_u", 3), ca.MX.sym("dt")
        s, n, i = x[-2], x[-1], vehicle.i
        heading, kappa = profiles.heading(s), profiles.kappa(s)
        tangent = x[i["VX"]] * ca.cos(heading) - x[i["VY"]] * ca.sin(heading)
        lateral = -x[i["VX"]] * ca.sin(heading) - x[i["VY"]] * ca.cos(heading)
        ode = vehicle.ode(x[:vehicle.nx], u)[0]
        derivative = ca.vertcat(ode, tangent / (1 - kappa * n), lateral)
        self.rhs = ca.Function("plant_time_rhs", [x, u], [derivative])
        k1 = self.rhs(x, u)
        k2 = self.rhs(x + 0.5 * dt * k1, u)
        k3 = self.rhs(x + 0.5 * dt * k2, u)
        k4 = self.rhs(x + dt * k3, u)
        self.step = ca.Function("plant_time_rk4", [x, u, dt], [x + dt / 6 * (k1 + 2 * k2 + 2 * k3 + k4)])

    def metrics(self, x):
        i, s, n = self.vehicle.i, x[-2], x[-1]
        rho = np.array([np.sqrt(combined_slip_sq(x[i[f"kappa{w}"]], x[i[f"tanAlpha{w}"]], self.slip_peak))
                        for w in ("FL", "FR", "RL", "RR")])
        drive, brake = x[i["drive"]], x[i["brake"]]
        return dict(rho=rho, track_violation=max(0.0, n - float(self.track.w_left(s)) + self.car_half_width + self.track_margin,
                                                  -n - float(self.track.w_right(s)) + self.car_half_width + self.track_margin),
                    pedal_overlap=max(0.0, drive) * max(0.0, brake),
                    pedal_violation=max(0.0, -drive, -brake, drive - 1, brake - 1),
                    steer_violation=max(0.0, abs(x[i["delta"]]) - self.actuator.limits.steer_angle))

    def violation(self, x):
        if not np.all(np.isfinite(x)):
            return "nonfinite plant state"
        m = self.metrics(x)
        for name, bad in [("track margin", m["track_violation"] > 1e-3),
                          ("combined slip", self.slip_stop and max(m["rho"]) > 1 + self.slip_tolerance),
                          ("pedal overlap", m["pedal_overlap"] > self.actuator.overlap_tolerance + 1e-6),
                          ("pedal bounds", m["pedal_violation"] > 1e-7),
                          ("steer bounds", m["steer_violation"] > 1e-7)]:
            if bad:
                return f"sampled plant {name} limit exceeded"
        return None

    def advance(self, initial, requested_rate, duration, *, stop_s=np.inf):
        if not np.isfinite(duration) or duration <= 0:
            raise ValueError("positive finite integration duration required")
        x = np.asarray(initial, float).copy()
        if x.shape != (self.nx,):
            raise ValueError("plant state dimensions do not match")
        times, states, commands = [0.0], [x.copy()], []
        elapsed, reason = 0.0, self.violation(x)
        while elapsed < duration - 1e-12 and x[-2] < stop_s - 1e-8 and reason is None:
            i = self.vehicle.i
            try:
                h, command = self.actuator.command(x[i["delta"]], x[i["drive"]], x[i["brake"]],
                                                    requested_rate, min(self.max_step, duration - elapsed))
                candidate = np.asarray(self.step(x, command, h)).ravel()
                if candidate[-2] > stop_s:
                    lo, hi = 0.0, h
                    for _ in range(25):
                        middle = (lo + hi) / 2
                        trial = np.asarray(self.step(x, command, middle)).ravel()
                        if trial[-2] < stop_s:
                            lo = middle
                        else:
                            hi = middle
                    h = (lo + hi) / 2
                    candidate = np.asarray(self.step(x, command, h)).ravel()
                if not np.all(np.isfinite(candidate)):
                    reason = "nonfinite plant integration step"
                    break
                if candidate[-2] <= x[-2]:
                    reason = "plant lost forward progress"
                    break
            except (ValueError, RuntimeError) as exc:
                reason = f"plant integration failed: {exc}"
                break
            elapsed += h
            x = candidate
            times.append(elapsed)
            states.append(x.copy())
            commands.append(command.copy())
            reason = self.violation(x)
        return np.array(times), np.array(states).T, np.array(commands).reshape(-1, 3).T, reason
