"""Twelve-state predictor: the thesis bicycle body plus the plant's four wheel-spin states.

Our addition (thesis Ch. 2 predictor extended). States

    x = [vx, vy, r, s, n, theta, delta, tr, vwFL, vwFR, vwRL, vwRR]

with the first eight as in the thesis bicycle and vw = omega*rEff the rim speed of
each wheel (m/s, scaled like vx). Body x forward, y left; FL at (+lf, +tf/2).
Every force law is transcribed from AlyssaModel.mo with its compiled constants:

    wheel spin   J d(omega)/dt = tau - Fx*rEff - crr*Fz*rEff*sgn(omega) - dSpin*omega      (Rim)
    torques      DriveBrakeTorque: brake bias, equal per side, rear drive min(T_max, P/omega_rear)
    slip         SlipDynamics at steady state (relaxation lengths 0.3/0.5 m are ~5 ms at speed):
                 kappa = (vw - vx_w)/|vx_w|, tan(alpha) = -vy_w/|vx_w|   (vMin = 1 m/s floor)
    tire         MFForces: kN = kappa/kappaMax(Fz), aN = alpha/alphaMax(Fz), rho = |(kN, aN)|,
                 Fx = muX(Fz) Fz sin(qx atan(sx rho)) kN/rho, Fy likewise with aN
    aero         VehicleAero drag 0.5 rho A Cd vx^2; downforce enters the loads
    loads        quasi-static per wheel (axle_loads) with the plant aero geometry and fitted
                 lateral transfer (left = axle/2 - k m ay), two passes: torque-based ax and
                 ay = vx*r, then ax, ay from the first-pass tire forces

Both front wheels steer by delta (no Ackermann); the rears carry the plant's static
toe-in (0.15 deg, suspension hardpoints). Body motion: thesis Eq. 2.3 with
per-wheel forces, including the yaw moment of left/right force differences.
Suspension and slip relaxation are quasi-static; the wheel speeds carry lock and spin.
"""

import json
from pathlib import Path
from types import SimpleNamespace

import casadi as ca
import numpy as np

# The thesis bicycle's eight states, then the four rim speeds.
BODY_STATES = ("vx", "vy", "r", "s", "n", "theta", "delta", "tr")
STATES = BODY_STATES+("vwFL", "vwFR", "vwRL", "vwRR")
CONTROLS = ("delta_rate", "tr_rate")
BODY_NOMINAL = np.array([50., 3., 1., 100., 3., .1, .1, 1.])  # scaling of the decision variables
NOMINAL = np.r_[BODY_NOMINAL, [50., 50., 50., 50.]]
WHEELS = ("FL", "FR", "RL", "RR")

VEHICLE_KEYS = ("mass", "yaw_inertia", "lf", "lr", "gravity")
ACTUATOR_KEYS = ("brake_torque", "brake_bias", "drive_torque", "engine_power")
CONSTANT_KEYS = ("rho", "A", "Cl_f", "Cl_r", "Cd", "cgHeight", "tf", "tr", "xCoPF", "xCoPR", "aero_height",
                 "lateral_transfer_f", "lateral_transfer_r")
WHEEL_KEYS = ("J", "rEff", "dSpin", "crr", "wEps", "vMin", "rear_toe")
# Optional numerical choices (same physics):
#   drive_smoothing  width [N m] of the smooth min(torque limit, power limit); the plant uses
#                    1 N m (tEps), which is practically a kink at the crossover speed
#   slip_states      states 8..11 are slip speeds dv = vw - vx [m/s] (scaled by slip_nominal)
#                    instead of rim speeds vw (scaled like vx, 50 m/s). Slip changes that
#                    double a tire force are ~0.01 in vw/50, which scales the wheel rows badly.
OPTIONAL = dict(drive_smoothing=1., slip_states=False, slip_nominal=1.)


def load_predictor(path):
    """The WheelBicycle of a predictor file (mpc/config/wheel_predictor.json)."""
    config = json.loads(Path(path).read_text(encoding="utf-8"))
    actuator = config["actuator_map"]
    model = WheelBicycle(config["vehicle"], actuator["actuator"], actuator["traction"]["constants"],
                         config["plant_tire"]["tire"], config["wheel_dynamics"], smoothing=actuator.get("smoothing", .02))
    model.reference_offset = np.asarray(config["reference_offset"], float)
    if model.reference_offset.shape != (2,) or not np.all(np.isfinite(model.reference_offset)):
        raise ValueError(f"{path}: reference_offset must be a finite (forward, left) pair")
    return model


class WheelBicycle:
    def __init__(self, vehicle, actuator, constants, tire, wheel, smoothing=.02):
        """vehicle: mass, yaw_inertia, lf, lr, gravity; actuator: plant brake/drive torques, brake bias
        and engine power; constants: plant aero and geometry plus the fitted lateral load transfer;
        tire: plant MFForces constants; wheel: plant Rim/SlipDynamics constants (and OPTIONAL);
        smoothing: width of the smooth drive/brake split at the pedal sign change."""
        self.vehicle = v = SimpleNamespace(**{k: float(vehicle[k]) for k in VEHICLE_KEYS})
        self.actuator = a = {k: float(actuator[k]) for k in ACTUATOR_KEYS}
        self.constants = c = {k: float(constants[k]) for k in CONSTANT_KEYS}
        self.tire, self.wheel = t, w = dict(tire), {k: float(wheel[k]) for k in WHEEL_KEYS}
        self.options = {k: type(val)(wheel.get(k, val)) for k, val in OPTIONAL.items()}
        self.smoothing = float(smoothing)
        self.slip_states = self.options["slip_states"]
        self.nx, self.nu = 12, 2
        if self.slip_states:
            self.state_names = BODY_STATES+("dvFL", "dvFR", "dvRL", "dvRR")
            self.nominal = np.r_[BODY_NOMINAL, np.full(4, self.options["slip_nominal"])]
        else:
            self.state_names, self.nominal = STATES, NOMINAL
        x, u, kappa_road = ca.SX.sym("x", 12), ca.SX.sym("u", 2), ca.SX.sym("kappa")
        vx, vy, r, s, n, theta, delta, tr = ca.vertsplit(x[:8])
        vw = x[0]+x[8:12] if self.slip_states else x[8:12]
        m, iz, lf, lr, R = v.mass, v.yaw_inertia, v.lf, v.lr, w["rEff"]
        half = (c["tf"]/2, c["tf"]/2, c["tr"]/2, c["tr"]/2)
        position = [(lf, half[0]), (lf, -half[1]), (-lr, half[2]), (-lr, -half[3])]
        toe = w["rear_toe"]                     # static toe-in (rad): RL points right, RR left
        steer = [delta, delta, -toe, toe]
        sx, sy = np.tan(np.pi/(2*t["qx"])), np.tan(np.pi/(2*t["qy"]))

        def interp(name, fz):
            return t[name+"1"]+(t[name+"2"]-t[name+"1"])*(fz-t["fzRef1"])/(t["fzRef2"]-t["fzRef1"])

        def smooth_sign(value, eps):
            return value/ca.sqrt(value**2+eps**2)

        # Contact-patch velocities and steady-state slip (wheel frame).
        slips, tan_alphas = [], []
        for (px, py), d, vr in zip(position, steer, ca.vertsplit(vw)):
            bx, by = vx-r*py, vy+r*px
            wx, wy = ca.cos(d)*bx+ca.sin(d)*by, -ca.sin(d)*bx+ca.cos(d)*by
            speed = ca.sqrt(wx**2+w["vMin"]**2)
            slips.append(((vr-wx)/speed, ca.atan(-wy/speed)))
            tan_alphas.append(-wy/speed)

        def tire_forces(loads):
            out = []
            for (kappa, alpha), fz in zip(slips, loads):
                kn, an = kappa/interp("kappaMax", fz), alpha/interp("alphaMax", fz)
                rho = ca.sqrt(kn**2+an**2+1e-8)
                fx = interp("muXMax", fz)*fz*ca.sin(t["qx"]*ca.atan(sx*rho))*kn/rho
                fy = interp("muYMax", fz)*fz*ca.sin(t["qy"]*ca.atan(sy*rho))*an/rho
                out.append((fx, fy, rho))
            return out

        def body(forces):
            fx_b, fy_b, mz = 0, 0, 0
            for (fx, fy, _), d, (px, py) in zip(forces, steer, position):
                bx, by = ca.cos(d)*fx-ca.sin(d)*fy, ca.sin(d)*fx+ca.cos(d)*fy
                fx_b, fy_b, mz = fx_b+bx, fy_b+by, mz+px*by-py*bx
            return fx_b, fy_b, mz

        def wheel_loads(fx_front, fx_rear, ay):
            front, rear, transfer_f, transfer_r = self.axle_loads(x, fx_front, fx_rear, ay)
            loads = [front/2-transfer_f, front/2+transfer_f, rear/2-transfer_r, rear/2+transfer_r]
            return [(fz+100.+ca.sqrt((fz-100.)**2+50.**2))/2 for fz in loads]    # smooth floor 100 N

        # Torques (DriveBrakeTorque), omega = vw/R.
        e = self.smoothing
        drive, brake = (tr+ca.sqrt(tr**2+e**2))/2, (-tr+ca.sqrt(tr**2+e**2))/2
        omega = vw/R
        w_drive = ca.sqrt(((omega[2]+omega[3])/2)**2+w["wEps"]**2)
        power_torque = a["engine_power"]/w_drive
        width = self.options["drive_smoothing"]
        drive_torque = (a["drive_torque"]+power_torque-ca.sqrt((a["drive_torque"]-power_torque)**2+width**2))/2
        brake_axle = (a["brake_bias"], a["brake_bias"], 1-a["brake_bias"], 1-a["brake_bias"])
        torque = [(drive*drive_torque*.5 if j >= 2 else 0)-brake*a["brake_torque"]*brake_axle[j]*.5*smooth_sign(omega[j], w["wEps"])
                  for j in range(4)]

        drag = .5*c["rho"]*c["A"]*c["Cd"]*vx**2
        # Pass 1: torque-based longitudinal force estimate, ay = vx*r.
        loads = wheel_loads(sum(torque[:2])/R, sum(torque[2:])/R, vx*r)
        forces = tire_forces(loads)
        fx_b, fy_b, _ = body(forces)
        # Pass 2: loads from the first-pass forces.
        loads = wheel_loads(forces[0][0]+forces[1][0], forces[2][0]+forces[3][0], fy_b/m)
        forces = tire_forces(loads)
        fx_b, fy_b, mz = body(forces)

        vx_dot = (fx_b-drag)/m+r*vy
        vy_dot = fy_b/m-r*vx
        r_dot = mz/iz
        s_dot = (vx*ca.cos(theta)-vy*ca.sin(theta))/(1-kappa_road*n)
        n_dot = vx*ca.sin(theta)+vy*ca.cos(theta)
        theta_dot = r-kappa_road*s_dot
        vw_dot = [R/w["J"]*(tq-fx*R-w["crr"]*fz*R*smooth_sign(om, w["wEps"])-w["dSpin"]*om)
                  for tq, (fx, _, _), fz, om in zip(torque, forces, loads, ca.vertsplit(omega))]
        if self.slip_states:
            vw_dot = [d-vx_dot for d in vw_dot]
        xdot = ca.vertcat(vx_dot, vy_dot, r_dot, s_dot, n_dot, theta_dot, u[0], u[1], *vw_dot)
        names = ["x", "u", "kappa"]
        self.rhs = ca.Function("wheel_bicycle_rhs", [x, u, kappa_road], [xdot], names, ["xdot"])
        self.wheel_slip = ca.Function("wheel_bicycle_slip", [x, u, kappa_road],
                                      [ca.vertcat(*[rho**2 for _, _, rho in forces])], names, ["rho2"])
        self.wheel_forces = ca.Function("wheel_bicycle_forces", [x, u, kappa_road],
                                        [ca.vertcat(*[f for fx, fy, _ in forces for f in (fx, fy)], *loads,
                                                    *[k for k, _ in slips], *[al for _, al in slips])],
                                        names, ["fx_fy_fz_kappa_alpha"])
        # slip ratio and tan(slip angle) per wheel (FL, FR, RL, RR): the quantities the lap-time OCP
        # limits (laptime_core/ocp.py, combined slip from the plant's kappa and tanAlpha states)
        self.slip_kappa_tan_alpha = ca.Function("wheel_bicycle_slip_kappa_tan_alpha", [x, u, kappa_road],
                                                [ca.vertcat(*[k for k, _ in slips], *tan_alphas)],
                                                names, ["kappa_tan_alpha"])

    def axle_loads(self, x, fx_f, fx_r, ay):
        """Quasi-static axle loads and per-side lateral transfer.

        Downforce acts at the centres of pressure (xCoPF, xCoPR) and drag at aero_height above the CG,
        so about the rear contact point front*L = W*lr + Df*(lr+xCoPF) + Dr*(lr+xCoPR) - Fx_tires*h
        - D*aero_height. The per-side transfer is k*m*ay with k = lateral_transfer_f/r, fitted to plant
        wheel loads (it absorbs the roll-stiffness distribution and roll centres).
        """
        v, c = self.vehicle, self.constants
        L, h, delta = v.lf+v.lr, c["cgHeight"], x[6]
        q = .5*c["rho"]*c["A"]*x[0]**2
        fx_tires = fx_f*ca.cos(delta)+fx_r
        df, dr, drag = q*c["Cl_f"], q*c["Cl_r"], q*c["Cd"]
        front = (v.mass*v.gravity*v.lr+df*(v.lr+c["xCoPF"])+dr*(v.lr+c["xCoPR"])
                 - fx_tires*h-drag*c["aero_height"])/L
        rear = v.mass*v.gravity+df+dr-front
        return front, rear, c["lateral_transfer_f"]*v.mass*ay, c["lateral_transfer_r"]*v.mass*ay

    def extend(self, body_states):
        """Free-rolling rim speeds (kappa = 0) for 8-state body guesses: vw = wheel-frame contact vx."""
        body_states = np.atleast_2d(body_states)
        v, c = self.vehicle, self.constants
        vx, r, delta = body_states[:, 0], body_states[:, 2], body_states[:, 6]
        vy = body_states[:, 1]
        cols = []
        for px, py, steered in ((v.lf, c["tf"]/2, True), (v.lf, -c["tf"]/2, True),
                                (-v.lr, c["tr"]/2, False), (-v.lr, -c["tr"]/2, False)):
            bx, by = vx-r*py, vy+r*px
            cols.append(np.cos(delta)*bx+np.sin(delta)*by if steered else bx)
        cols = np.array(cols).T
        return np.c_[body_states, cols-vx[:, None] if self.slip_states else cols]

    def from_plant(self, projected, plant_state, plant_names):
        """Measured 12-state vector: projected eight body states plus the plant's rim speeds."""
        omega = [plant_state[list(plant_names).index("w"+name)] for name in WHEELS]
        rim = np.asarray(omega)*self.wheel["rEff"]
        return np.r_[projected, rim-projected[0] if self.slip_states else rim]
