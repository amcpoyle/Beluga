"""TUMFTM racetrack-database track: centerline spline, curvature, widths, Frenet frame.

Conventions (ENU, as in the CSV): x east, y north, heading theta measured CCW from +x,
curvature kappa > 0 for left turns, Frenet offset n > 0 to the LEFT of the centerline.
"""
import numpy as np
from scipy.interpolate import CubicSpline, make_smoothing_spline


class Track:
    def __init__(self, csv_path, smoothing=None, n_fine=20000):
        data = np.loadtxt(csv_path, delimiter=",", comments="#")
        x, y, w_right, w_left = data.T
        self.name = str(csv_path).replace("\\", "/").split("/")[-1].removesuffix(".csv")

        # periodic spline parametrized by chord length, then re-parametrized by true arc length
        xy = np.column_stack([x, y])
        xy_closed = np.vstack([xy, xy[:1]])
        chord = np.r_[0.0, np.cumsum(np.linalg.norm(np.diff(xy_closed, axis=0), axis=1))]
        spl = CubicSpline(chord, xy_closed, bc_type="periodic")
        t_fine = np.linspace(0.0, chord[-1], n_fine + 1)
        d = spl(t_fine, 1)
        speed = np.linalg.norm(d, axis=1)
        arc = np.r_[0.0, np.cumsum(0.5 * (speed[1:] + speed[:-1]) * np.diff(t_fine))]
        s_pts = np.interp(chord, t_fine, arc)
        self.length = float(arc[-1])

        if smoothing:
            # optional extra smoothing of the centerline (lam = smoothing), keeps closure
            pad = 50
            s_ext = np.r_[s_pts[-pad - 1:-1] - self.length, s_pts, s_pts[1:pad + 1] + self.length]
            xy_ext = np.vstack([xy_closed[-pad - 1:-1], xy_closed, xy_closed[1:pad + 1]])
            sx = make_smoothing_spline(s_ext, xy_ext[:, 0], lam=smoothing)
            sy = make_smoothing_spline(s_ext, xy_ext[:, 1], lam=smoothing)
            xy_closed = np.column_stack([sx(s_pts), sy(s_pts)])
            xy_closed[-1] = xy_closed[0]

        self._xy = CubicSpline(s_pts, xy_closed, bc_type="periodic")
        if smoothing:
            # the smoothed points are no longer spaced by arc length (|dxy/ds| was 0.95-1.02 on
            # Catalunya, so kappa disagreed with dtheta/ds): re-parametrize by the smoothed curve's
            # own arc length, twice to remove the second-order remainder
            for _ in range(2):
                t_fine = np.linspace(0.0, s_pts[-1], n_fine + 1)
                speed = np.linalg.norm(self._xy(t_fine, 1), axis=1)
                arc = np.r_[0.0, np.cumsum(0.5 * (speed[1:] + speed[:-1]) * np.diff(t_fine))]
                s_pts = np.interp(s_pts, t_fine, arc)
                self.length = float(arc[-1])
                self._xy = CubicSpline(s_pts, xy_closed, bc_type="periodic")
        self._s_pts = s_pts
        self._w_left = np.r_[w_left, w_left[0]]
        self._w_right = np.r_[w_right, w_right[0]]

        # unwrapped heading on a fine grid; total turning is +-2*pi for a closed lap
        self._s_fine = np.linspace(0.0, self.length, n_fine + 1)
        d1 = self._xy(self._s_fine, 1)
        self._theta_fine = np.unwrap(np.arctan2(d1[:, 1], d1[:, 0]))
        self.total_turn = self._theta_fine[-1] - self._theta_fine[0]  # 2*pi (CCW) or -2*pi (CW)

    def _wrap(self, s):
        return np.mod(s, self.length)

    def xy(self, s):
        return self._xy(self._wrap(s))

    def theta(self, s):
        """Unwrapped heading; continuous in s, increases by total_turn per lap."""
        s = np.asarray(s, float)
        laps = np.floor(s / self.length)
        return np.interp(s - laps * self.length, self._s_fine, self._theta_fine) + laps * self.total_turn

    def kappa(self, s):
        sw = self._wrap(s)
        d1, d2 = self._xy(sw, 1), self._xy(sw, 2)
        return (d1[..., 0] * d2[..., 1] - d1[..., 1] * d2[..., 0]) / np.linalg.norm(d1, axis=-1) ** 3

    def w_left(self, s):
        return np.interp(self._wrap(s), self._s_pts, self._w_left)

    def w_right(self, s):
        return np.interp(self._wrap(s), self._s_pts, self._w_right)

    def normal(self, s):
        """Unit left normal."""
        th = self.theta(s)
        return np.stack([-np.sin(th), np.cos(th)], axis=-1)

    def frenet_to_xy(self, s, n):
        return self.xy(s) + np.asarray(n)[..., None] * self.normal(s)

    def borders(self, s):
        return self.frenet_to_xy(s, self.w_left(s)), self.frenet_to_xy(s, -self.w_right(s))

    def project(self, x, y, s_guess, window=30.0):
        """Closest centerline point to (x, y) near s_guess -> (s, n). s is not wrapped."""
        cand = s_guess + np.linspace(-window, window, 61)
        p = self.xy(cand)
        s = cand[np.argmin((p[:, 0] - x) ** 2 + (p[:, 1] - y) ** 2)]
        for _ in range(3):  # Newton refinement on (p(s) - q) . t(s) = 0
            sw = self._wrap(s)
            p, d1, d2 = self._xy(sw), self._xy(sw, 1), self._xy(sw, 2)
            r = p - np.array([x, y])
            s -= (r @ d1) / (d1 @ d1 + r @ d2)
        p = self.xy(s)
        n = (np.array([x, y]) - p) @ self.normal(s)
        return float(s), float(n)
