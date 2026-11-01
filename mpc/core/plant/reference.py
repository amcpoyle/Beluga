"""Periodic numerical-lap reference and differentiable time-MPC road profiles."""

from pathlib import Path

import casadi as ca
import numpy as np
from scipy.interpolate import CubicSpline, PchipInterpolator

from .projection import project_plant_state


class RoadProfiles:
    """Smooth profiles evaluated at each decision/RK-stage progress, including lap wrap."""

    def __init__(self, track, reference, *, spacing=1.0):
        grid = np.linspace(-track.length, 2 * track.length,
                           int(np.ceil(3 * track.length / spacing)) + 1)
        self.domain = (float(grid[0]), float(grid[-1]))
        self.functions = {}
        vy, r = reference.lateral_velocity_yaw_rate(grid)
        for name, values in dict(kappa=track.kappa(grid), heading=track.theta(grid),
                                 left=track.w_left(grid), right=track.w_right(grid),
                                 speed=reference.speed(grid), offset=reference.offset(grid),
                                 relative_heading=reference.relative_heading(grid),
                                 lateral_velocity=vy, yaw_rate=r).items():
            self.functions[name] = ca.interpolant(f"road_{name}", "bspline", [grid], np.asarray(values).tolist())

    def __getattr__(self, name):
        if name in self.functions:
            return self.functions[name]
        raise AttributeError(name)


class LapReference:
    """Read a full-plant solution by name, retaining the source mesh and lap time.

    Reference position/speed are guidance. Full plant states are used only for
    initialization and diagnostics; they are not optimized inside the MPC.
    """

    def __init__(self, path, plant, track, reference_offset=(0.0, 0.0)):
        self.path, self.plant, self.track = Path(path), plant, track
        self.reference_offset = np.asarray(reference_offset, float)
        with np.load(path, allow_pickle=False) as d:
            names = d["state_names"].tolist()
            self.s, self.t = d["s"].copy(), d["t"].copy()
            self.lap_time = float(d["lap_time"])
            values = d["x"][[names.index(n) for n in plant.names] + [names.index("n")]].copy()
            self.mesh_intervals = len(self.s)
        if not np.all(np.diff(self.s) > 0) or self.s[0] != 0 or self.s[-1] >= track.length:
            raise ValueError("reference must contain increasing interval starts on [0,L)")
        values[plant.i["yaw"]] += track.theta(self.s)
        grid = np.r_[self.s, track.length]
        self._states = CubicSpline(grid, np.c_[values, values[:, 0]], axis=1, bc_type="periodic")
        speed = np.hypot(values[plant.i["VX"]], values[plant.i["VY"]])
        self._speed = PchipInterpolator(grid, np.r_[speed, speed[0]])
        self._offset = PchipInterpolator(grid, np.r_[values[-1], values[-1, 0]])

    def state(self, s):
        values = np.asarray(self._states(np.mod(s, self.track.length))).copy()
        values[self.plant.i["yaw"]] -= self.track.theta(s)
        return values

    def speed(self, s):
        return self._speed(np.mod(s, self.track.length))

    def offset(self, s):
        return self._offset(np.mod(s, self.track.length))

    def relative_heading(self, s):
        """Reference vehicle heading relative to the centerline, left-positive.

        The stored spline uses SAE yaw + centerline heading to make it periodic.
        Tracking a nonconstant lateral offset requires this heading guidance;
        forcing theta=0 would instead favor a centerline-parallel orientation.
        """
        return -self._states(np.mod(s, self.track.length))[self.plant.i["yaw"]]

    def lateral_velocity_yaw_rate(self, s):
        """Reference vy and r in the predictor's frame (left-positive, at the nominal CoG), as project
        maps a plant state."""
        z = self.state(s)
        p = self.plant.i
        yaw = z[p["yaw"]]
        r = -z[p["r"]]
        vy = z[p["VX"]] * np.sin(yaw) - z[p["VY"]] * np.cos(yaw)
        return vy + r * self.reference_offset[0], r

    def time(self, s):
        s = np.asarray(s, float)
        lap = np.floor(s / self.track.length)
        return np.interp(np.mod(s, self.track.length), np.r_[self.s, self.track.length],
                         np.r_[self.t, self.lap_time]) + lap * self.lap_time

    def project(self, state):
        """Plant vector [vehicle states, s, n] -> predictor at nominal assembly CoG."""
        s, n = state[-2:]
        heading = -state[self.plant.i["yaw"]]
        c, sn = np.cos(heading), np.sin(heading)
        xy = self.track.frenet_to_xy(s, n) + np.array([[c, -sn], [sn, c]]) @ self.reference_offset
        sg, ng = self.track.project(*xy, s_guess=s)
        base = np.asarray(state[:-2], float).copy()
        pedals = base[[self.plant.i["drive"], self.plant.i["brake"]]]
        if min(pedals) < -1e-7 or max(pedals) > 1 + 1e-7:
            raise ValueError("plant pedal bounds exceeded during projection")
        base[[self.plant.i["drive"], self.plant.i["brake"]]] = np.clip(pedals, 0, 1)
        return project_plant_state(base, self.plant.names, s=sg, lateral_offset=ng,
                                   path_heading=float(self.track.theta(sg)), reference_offset=self.reference_offset)

    def guess(self, s):
        """Reference-shaped NLP seed; signed pedal here is a guess, not plant initialization."""
        z = self.state(s)
        p = self.plant.i
        yaw = z[p["yaw"]]
        vx = z[p["VX"]] * np.cos(yaw) + z[p["VY"]] * np.sin(yaw)
        vy = z[p["VX"]] * np.sin(yaw) - z[p["VY"]] * np.cos(yaw)
        r = -z[p["r"]]
        return np.array([vx - r * self.reference_offset[1], vy + r * self.reference_offset[0], r,
                         s, z[-1], -yaw - self.track.theta(s), -z[p["delta"]],
                         np.clip(z[p["drive"]] - z[p["brake"]], -1, 1)])
