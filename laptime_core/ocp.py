"""Minimum lap time OCP with the AlyssaVehicle FMU as the dynamics.

Independent variable is arc length s along the track centerline (distance domain):

    dx/ds = f_fmu(x, u) / sdot,      lap time T = integral ds / sdot

with Frenet coupling computed from the FMU's world-frame velocity (SAE -> ENU: V = (VX, -VY)):

    sdot = (V . t(s)) / (1 - n kappa(s)),     ndot = V . n_left(s)

FMU yaw angle closes the loop with the track heading through the periodicity condition: 
    yaw(L) = yaw(0) - total_turn (SAE yaw = -ENU heading).

Discretization: Radau IIA direct collocation
- piecewise-constant controls per interval
- periodic boundary conditions
- uniform mesh: N intervals of length ds = L / N, each with `degree` collocation points
The per-point dynamics (and their derivatives) are independent across collocation points, so with the
converted CasADi vehicle (omc2casadi_opt.vehicle_casadi) they are evaluated on `threads` threads; the FMU has no
thread-safe runtime, so FMU calls are always serial.

Collocation points are numbered interval by interval: column c of Xc is point col_j[c] (0-based) of
interval col_interval[c]; interval k owns columns col0[k] .. col0[k+1]-1 (col0[k] = k * degree).
"""
import os
import signal
import time

import casadi as ca
import numpy as np

from .vehicle import CONTROLS, OCP_SIGMA_MAX, SLIP_MODEL, WHEELS, combined_slip_sq


# scale factors for change of variables (COV)
COV_NOMINALS = {"z": 0.005, "vz": 0.2, "u": 2.0, "v": 1.0, "pitch": 0.004, "q": 0.35, "roll": 0.01, "p": 0.7,
                "yaw": 0.25, "r": 0.75, "delta": 0.05, "drive": 1.0, "brake": 1.0,
                "dwFL": 15.0, "dwFR": 15.0, "dwRL": 20.0, "dwRR": 20.0,
                "kappaFL": 0.08, "kappaFR": 0.08, "kappaRL": 0.12, "kappaRR": 0.12,
                "tanAlphaFL": 0.12, "tanAlphaFR": 0.12, "tanAlphaRL": 0.065, "tanAlphaRR": 0.065, "n": 3.0}
N_NOMINAL = 0.55  # Frenet offset n [m], balanced with the FMU states


def point_dynamics(veh, nom, off, z2x=None, zdot=None):
    """
    Distance-domain dynamics at one point, in scaled optimizer variables
    dz/ds = z_dot / s_dot
    Every collocation point calls this
    """
    nx = veh.nx + 1
    i = veh.i
    zs, u = ca.MX.sym("zs", nx), ca.MX.sym("u", veh.nu)
    th, kap = ca.MX.sym("theta"), ca.MX.sym("kappa")
    z = zs * nom + off
    x = z2x(z) if z2x is not None else z  # FMU reduced state + n
    vx_e, vy_e = x[i["VX"]], -x[i["VY"]]
    n = x[veh.nx]
    sdot = (vx_e * ca.cos(th) + vy_e * ca.sin(th)) / (1 - n * kap)
    ndot = -vx_e * ca.sin(th) + vy_e * ca.cos(th)
    # sdot kept FMU-free so the objective gradient never differentiates through the FMU
    sdot_point = ca.Function("sdot_point", [zs, th, kap], [sdot])
    xd, y = veh.ode(x[:veh.nx], u)  # FMU inputs: drive rate, brake rate, steer rate
    zd = zdot(z, xd) if zdot is not None else xd
    dzds = ca.vertcat(zd, ndot) / sdot / nom
    f_point = ca.Function("f_point", [zs, u, th, kap], [dzds, 1 / sdot, sdot, y])
    if getattr(veh, "symbolic", False) and getattr(veh, "expandable", True):
        f_point = f_point.expand()  # VehicleCasadi without numeric solves: one SX graph
    return sdot_point, f_point


class LapTimeOCP:
    def __init__(self, veh, track, ds=5.0, degree=2, car_half_width=1.0, margin=0.2, pedal_rate_max=10.0,
                 delta_max=0.35, w_rate=(0.0, 0.0, 0.0), w_du=(1e-2, 1e-2, 1e-2), w_overlap=0.1,
                 w_straight=10.0, straight_kappa=2e-3, straight_window=50.0,
                 slip_peak=(OCP_SIGMA_MAX, OCP_SIGMA_MAX, 1.0), change_of_variables=False,
                 slip_soft=False, w_slip=10.0, threads=1, segment=None):

        """
        __init__ builds the NLP
        """
        self.veh, self.track = veh, track
        self.threads = int(threads) if getattr(veh, "symbolic", False) else 1

        # uniform mesh: N_lap intervals of length ds per lap; an open segment takes lap intervals k0 .. k1-1
        self.N_lap = max(1, int(round(track.length / ds)))
        self.ds = h = track.length / self.N_lap
        if segment is None:
            k0, k1 = 0, self.N_lap
            self.segment = None
        else:
            k0, k1 = int(round(segment["start"] / h)), int(round(segment["end"] / h))
            if not 0 < k1 - k0 <= self.N_lap:
                raise ValueError("segment must span at least one interval and at most one lap")
            self.segment = {"start": k0 * h, "end": k1 * h}
        self.s_mesh = h * np.arange(k0, k1)


        self.N = N = k1 - k0
        self.d = d = int(degree)
        if d < 2:
            raise ValueError("the straight-line penalty needs collocation degree >= 2")
        nx = veh.nx + 1  # all vehicle states come from the FMU; + the Frenet offset n (track-relative)
        self.nx, self.nu = nx, veh.nu  # controls = the FMU inputs: drive rate, brake rate, steer rate
        self.i_n = veh.nx

        # Drive and brake pedal positions are FMU states (PedalSmoothing, 0 .. 1), driven by the rate
        # inputs like the steer angle; wheel torque is linear in each; w_overlap penalizes pressing both.
        self.i_drv, self.i_brk = veh.i["drive"], veh.i["brake"]
        self.pedal_rate_max = pedal_rate_max
        self.change_of_variables = change_of_variables

        # Radau points tau (d,), derivative matrix C ((d+1) x d over [0, tau]), quadrature weights B (d,)
        tau = np.array(ca.collocation_points(d, "radau"))
        C, _, B = (np.array(m) for m in ca.collocation_coeff(tau.tolist()))
        self.tau, self.C, self.B = tau, C, B.ravel()

        self.Ncol = Ncol = N * d
        self.col0 = d * np.arange(N + 1)
        self.col_interval = np.repeat(np.arange(N), d)
        self.col_j = np.tile(np.arange(d), N)
        self.B_col = np.tile(self.B, N)
        self.s_col = self.s_mesh[self.col_interval] + h * tau[self.col_j]

        # decision vector index arrays: stage k = [Xs_k, Xc_k1..Xc_kd, U_k], contiguous
        self.stage_sizes = np.full(N, nx * (1 + d) + veh.nu)
        self.stage_start = np.r_[0, np.cumsum(self.stage_sizes)[:-1]]
        self.nw = int(self.stage_sizes.sum())
        st = self.stage_start
        self.xs_idx = st[None, :] + np.arange(nx)[:, None]                                    # (nx, N)
        self.xc_idx = (st[self.col_interval] + nx * (1 + self.col_j))[None, :] + np.arange(nx)[:, None]  # (nx, Ncol)
        self.u_idx = (st + nx * (1 + d))[None, :] + np.arange(veh.nu)[:, None]             # (nu, N)

        i = veh.i
        self._build_change_of_variables()

        # per-point dynamics in scaled optimizer variables z (see _build_change_of_variables)
        self.sdot_point, self.f_point = point_dynamics(veh, self.nom, self.off, self.z2x, self.zdot)

        # decision variables (scaled)
        # Stage-major layout: w = [stage 0 | stage 1 | ...], each stage k = [Xs_k, Xc_k1..Xc_kd, U_k].
        # Every mesh interval's variables are contiguous, as the optipySolverFast structured linear
        # solver requires (it assigns variables to stages from Xidx[k, 0]).
        wsym = ca.MX.sym("w", self.nw)
        take = lambda idx: ca.reshape(wsym[idx.ravel(order="F").tolist()], idx.shape[0], idx.shape[1])
        Xs, Xc, U = take(self.xs_idx), take(self.xc_idx), take(self.u_idx)
        self.Xs, self.Xc, self.U = Xs, Xc, U

        # open segment: NLP parameters p = [state at the section end (scaled), control of the interval
        # before the section, control of the interval after it]; set_boundary fills them
        if self.segment is not None:
            self.p = ca.MX.sym("p", nx + 2 * veh.nu)
            p_xend, p_uprev, p_unext = self.p[:nx], self.p[nx:nx + veh.nu], self.p[nx + veh.nu:]
            self.p_val = None
        else:
            self.p = None

        theta_c = track.theta(self.s_col)
        kappa_c = track.kappa(self.s_col)
        U_c = U[:, self.col_interval.tolist()]  # control of each point's interval
        dX = self._map(Ncol)(Xc, U_c, theta_c[None, :], kappa_c[None, :])[0]
        sdot_c = self.sdot_point.map(Ncol)(Xc, theta_c[None, :], kappa_c[None, :])
        inv_sdot = 1 / sdot_c

        g, lbg, ubg = [], [], []
        # collocation equations, one nx block per collocation point (interval by interval): R[j] holds
        # point j of every interval, so vec(vertcat(R)) runs interval by interval
        # interval k runs from s_k to s_k + h, and inside this interval the state is polynomial degree d
        dXh = dX * h
        c0 = self.col0[:-1]
        R = []
        for j in range(d):
            r = float(C[0, j]) * Xs
            for m in range(d):
                r = r + float(C[m + 1, j]) * Xc[:, (c0 + m).tolist()]
            R.append(r - dXh[:, (c0 + j).tolist()])
        g.append(ca.vec(ca.vertcat(*R)))
        # continuity, with periodic wrap: yaw advances by -total_turn per lap
        X_end = Xc[:, (self.col0[1:] - 1).tolist()]
        if self.segment is not None:  # open segment: the last interval ends at the fixed end state
            X_next = ca.horzcat(Xs[:, 1:], p_xend)
        else:
            wrap = np.zeros(nx)
            wrap[i["yaw"]] = -track.total_turn / self.nom[i["yaw"]]
            X_next = ca.horzcat(Xs[:, 1:], Xs[:, 0] + wrap)
        g.append(ca.vec(X_end - X_next))
        n_eq = sum(gi.numel() for gi in g)
        lbg += [0.0] * n_eq
        ubg += [0.0] * n_eq
        # forward progress
        g.append(ca.vec(sdot_c))
        lbg += [1.0] * Ncol
        ubg += [np.inf] * Ncol
        # combined slip rho^2 = ((kappa / slip_peak[0])^2 + (tan alpha / slip_peak[1])^2) / (1 + kappa)^2 at or below
        # slip_peak[2]^2: brush theoretical slip |sigma| over its limit (laptime_core/vehicle.py combined_slip_sq).
        # Past saturation the brush force is flat, so extra slip buys no grip.
        #   hard: constraint rho^2 <= limit^2 (weakly active at the peak, with tiny multipliers,
        #         which keeps IPOPT's dual infeasibility high)
        #   soft: smooth penalty on the excess instead (no multipliers)
        Xc_phys = Xc * self.nom + self.off
        hard = slip_peak[2] is not None and not slip_soft
        slip_pen = 0
        for w in ("FL", "FR", "RL", "RR"):
            rho2 = combined_slip_sq(Xc_phys[i[f"kappa{w}"], :], Xc_phys[i[f"tanAlpha{w}"], :], slip_peak)
            g.append(ca.vec(rho2))
            lbg += [0.0] * Ncol
            ubg += [slip_peak[2] ** 2 if hard else np.inf] * Ncol
            if slip_soft and slip_peak[2] is not None:
                slip_pen = slip_pen + ca.sum2(ca.fmax(0, rho2 - slip_peak[2] ** 2) ** 3)
        slip_pen = w_slip * slip_pen if slip_soft else ca.MX(0)

        # objective: lap time + regularization.
        lap_time = ca.mtimes(inv_sdot, ca.DM(h * self.B_col))
        rate_pen = sum(w_rate[j] * h * ca.sum2(U[j, :] ** 2) for j in range(self.nu))
        if self.segment is not None:
            # pairs (prev, U_0), (U_0, U_1), ..., (U_N-1, next) with the neighbours' fixed controls
            dU = ca.horzcat(U[:, 0] - p_uprev, ca.horzcat(U[:, 1:], p_unext) - U)
        else:
            dU = ca.horzcat(U[:, 1:], U[:, 0]) - U
        du_pen = sum(w_du[j] * ca.sum2(dU[j, :] ** 2) for j in range(self.nu))
        Xs_phys = Xs * self.nom + self.off
        overlap_pen = w_overlap * ca.sum2(Xs_phys[self.i_drv, :] * Xs_phys[self.i_brk, :])
        J = lap_time + rate_pen + du_pen + overlap_pen + slip_pen
        # Straight-line regularization.
        # On a straight, lap time barely depends on where the car sits, so not a lot of curvature
        # Penalize the line's curvature n'' only where the track is straight
        kmax = np.array([np.abs(track.kappa(np.linspace(sk - straight_window, sk + straight_window, 41))).max()
                         for sk in self.s_mesh])
        self.straight_mask = np.exp(-(kmax / straight_kappa) ** 2)
        # n'' by a 3-point difference inside each interval (its start and first two collocation points),
        # so the Hessian stays within one stage. Using mesh points k-1, k, k+1 instead would couple
        # non-neighbouring stages, which the structured linear solver cannot handle efficiently.
        Xc_phys_n = Xc[self.i_n, :] * self.nom[self.i_n] + self.off[self.i_n]
        n0 = Xs_phys[self.i_n, :]
        n1, n2 = Xc_phys_n[:, c0.tolist()], Xc_phys_n[:, (c0 + 1).tolist()]
        d1, d2 = h * tau[0], h * (tau[1] - tau[0])
        d2n = 2 * ((n2 - n1) / d2 - (n1 - n0) / d1) / (d1 + d2)
        straight_pen = h * ca.sum2(ca.DM(self.straight_mask).T * d2n ** 2)
        J = J + w_straight * straight_pen
        self.penalty_names = ("rate", "du", "overlap", "straight", "slip")
        # (open segment: penalty_fn(w, p), since du depends on the neighbours' controls)
        self.penalty_fn = ca.Function("penalties", [wsym] + ([self.p] if self.p is not None else []),
                                      [rate_pen, du_pen, overlap_pen, w_straight * straight_pen, slip_pen])

        self.w = wsym
        self.lap_time_fn = ca.Function("T", [wsym], [lap_time])
        self.g = ca.vertcat(*g)
        self.lbg, self.ubg = np.array(lbg), np.array(ubg)
        self.J = J

        # bounds (physical, then scaled)
        def state_bounds(s):
            lb = np.full((nx, len(s)), -np.inf)
            ub = np.full((nx, len(s)), np.inf)
            lb[self.i_n] = -track.w_right(s) + car_half_width + margin
            ub[self.i_n] = track.w_left(s) - car_half_width - margin
            lb[i["delta"]], ub[i["delta"]] = -delta_max, delta_max
            lb[self.i_drv], ub[self.i_drv] = 0.0, 1.0
            lb[self.i_brk], ub[self.i_brk] = 0.0, 1.0
            for w in ("FL", "FR", "RL", "RR"):
                lb[i[f"kappa{w}"]], ub[i[f"kappa{w}"]] = -0.8, 0.8
                lb[i[f"tanAlpha{w}"]], ub[i[f"tanAlpha{w}"]] = -0.8, 0.8
            sc = lambda b: (b - self.off[:, None]) / self.nom[:, None]
            return sc(lb), sc(ub)

        lbs, ubs = state_bounds(self.s_mesh)
        lbc, ubc = state_bounds(self.s_col)
        self.lbw = self._stage_major(lbs, lbc, -np.ones((self.nu, N)))
        self.ubw = self._stage_major(ubs, ubc, np.ones((self.nu, N)))

        # ---- layout bookkeeping for laptime_core/history.py (same schema as optipySolverFast)
        self.control_names = ["drive_rate", "brake_rate", "steer"]  # = the FMU inputs, in CONTROLS order
        # decision vector, in optimizer variables z (state_names): z = w * scaleVec + offsetVec
        self.scaleVec = self._stage_major(np.tile(self.nom[:, None], N), np.tile(self.nom[:, None], Ncol),
                                          np.ones((self.nu, N)))
        self.offsetVec = self._stage_major(np.tile(self.off[:, None], N), np.tile(self.off[:, None], Ncol),
                                           np.zeros((self.nu, N)))
        # Xidx[k] = first NLP index of interval k's start state, then of each collocation state
        self.Xidx = np.c_[self.stage_start, self.xc_idx[0].reshape(N, d)]
        self.Uidx = self.u_idx[0]
        # constraint row -> state index; -1 = progress (sdot), -2 = combined slip limit
        self.gStateIdx = np.r_[np.tile(np.arange(nx), Ncol + N), -np.ones(Ncol, int), -2 * np.ones(4 * Ncol, int)]
        # collocation/continuity rows are in scaled state units; real = g * rowScale
        self.rowScale = np.where(self.gStateIdx >= 0, self.nom[np.maximum(self.gStateIdx, 0)], 1.0)
        # constraint row -> mesh interval, for violation-vs-s plots
        self.gInterval = np.r_[np.repeat(self.col_interval, nx), np.repeat(np.arange(N), nx), self.col_interval,
                               np.tile(self.col_interval, 4)]
        n_coll = nx * Ncol
        # continuity across the lap seam (none in an open segment: its last row is to the fixed end state)
        self.periodicRows = (n_coll + (N - 1) * nx + np.arange(nx) if self.segment is None
                             else np.zeros(0, int))
        # physical bounds per state (None where unbounded or varying along the track, e.g. n)
        lb_phys, ub_phys = (b * self.nom[:, None] + self.off[:, None] for b in (lbs, ubs))
        const = lambda b: (float(b[0]) if np.all(b == b[0]) and np.isfinite(b[0]) else None)
        self.config = {
            "states": {nm: {"min": const(lb_phys[k]), "max": const(ub_phys[k])}
                       for k, nm in enumerate(self.state_names)},
            "controls": {nm: {"min": -1.0, "max": 1.0} for nm in self.control_names},
            "mesh": {"ds": self.ds, "N": N, "degree": d, "scheme": "radau", "segment": self.segment},
            "constraints": {"car_half_width": car_half_width, "margin": margin, "delta_max": delta_max,
                            "pedal_rate_max": pedal_rate_max, "change_of_variables": change_of_variables,
                            "slip_peak": list(slip_peak), "slip_model": SLIP_MODEL, "slip_soft": slip_soft, "sdot_min": 1.0},
            "objective": {"w_rate": list(w_rate), "w_du": list(w_du), "w_overlap": w_overlap, "w_straight": w_straight, "w_slip": w_slip,
                          "straight_kappa": straight_kappa, "straight_window": straight_window},
            "nominals": {nm: float(v) for nm, v in zip(self.state_names, self.nom)},
        }
        self.nMin, self.nMax = lb_phys[self.i_n], ub_phys[self.i_n]

    def _build_change_of_variables(self):
        """Build the maps between optimizer variables z and FMU states x (z2x, x2z, zdot), plus
        their nominals. Both have the same layout, with n last.

        change_of_variables=False: z = x (identity maps).
        change_of_variables=True: two groups of states are replaced, the rest are unchanged:

            VX, VY -> u, v    velocity in the car frame (SAE: u forward, v right)
                              VX = u cos(yaw) - v sin(yaw),  VY = u sin(yaw) + v cos(yaw)
            wXX    -> dwXX    wheel speed minus free-rolling speed,  dw = w - u / r_eff

        Why: the tires respond to body-frame velocity and slip, so in FMU states yaw, VX, VY and the
        wheel speeds are tightly coupled (at 80 m/s, 0.01 rad of yaw is 0.8 m/s of sideslip), which
        hurts conditioning. The map is exact and invertible; the FMU, guesses and post-processing
        all stay in FMU states.
        """
        veh, i, nxv = self.veh, self.veh.i, self.veh.nx
        iu, iv, iy = i["VX"], i["VY"], i["yaw"]
        iw = [i[f"w{w}"] for w in WHEELS]
        r = veh.r_eff
        self.nom = np.r_[veh.nominal, N_NOMINAL]  # + n
        self.off = np.r_[veh.offset, 0.0]
        if not self.change_of_variables:
            self.state_names = list(veh.names) + ["n"]
            z, xd = ca.SX.sym("z", self.nx), ca.SX.sym("xd", nxv)
            self.z2x = ca.Function("z2x", [z], [z])
            self.x2z = ca.Function("x2z", [z], [z])
            self.zdot = ca.Function("zdot", [z, xd], [xd])
            return
        names = list(veh.names) + ["n"]
        names[iu], names[iv] = "u", "v"
        for k, w in zip(iw, WHEELS):
            names[k] = f"dw{w}"
        self.state_names = names

        z = ca.SX.sym("z", self.nx)
        c, s = ca.cos(z[iy]), ca.sin(z[iy])
        x = [z[k] for k in range(self.nx)]
        x[iu] = z[iu] * c - z[iv] * s
        x[iv] = z[iu] * s + z[iv] * c
        for k in iw:
            x[k] = z[k] + z[iu] / r
        self.z2x = ca.Function("z2x", [z], [ca.vertcat(*x)])

        xx = ca.SX.sym("x", self.nx)
        c, s = ca.cos(xx[iy]), ca.sin(xx[iy])
        zz = [xx[k] for k in range(self.nx)]
        zz[iu] = xx[iu] * c + xx[iv] * s
        zz[iv] = -xx[iu] * s + xx[iv] * c
        for k in iw:
            zz[k] = xx[k] - zz[iu] / r
        self.x2z = ca.Function("x2z", [xx], [ca.vertcat(*zz)])

        # time derivative of z (FMU part only) from z and the FMU's xdot
        xd = ca.SX.sym("xd", nxv)
        c, s = ca.cos(z[iy]), ca.sin(z[iy])
        yaw_rate = xd[iy]
        zd = [xd[k] for k in range(nxv)]
        zd[iu] = c * xd[iu] + s * xd[iv] + yaw_rate * z[iv]
        zd[iv] = -s * xd[iu] + c * xd[iv] - yaw_rate * z[iu]
        for k in iw:
            zd[k] = xd[k] - zd[iu] / r
        self.zdot = ca.Function("zdot", [z, xd], [ca.vertcat(*zd)])

        self.nom = np.array([COV_NOMINALS[nm] for nm in names])

    def set_boundary(self, zs_start, zs_end, u_prev, u_next):
        """Open segment: fix the start state (bounds of Xs_0) and the end state (parameter), both scaled
        optimizer variables (nx,), and the neighbours' controls u_prev, u_next (nu,)."""
        if self.segment is None:
            raise ValueError("set_boundary is for an open segment (segment=...)")
        zs_start = np.asarray(zs_start, float).ravel()
        self.lbw[self.xs_idx[:, 0]] = zs_start
        self.ubw[self.xs_idx[:, 0]] = zs_start
        self.p_val = np.r_[np.ravel(zs_end), np.ravel(u_prev), np.ravel(u_next)].astype(float)

    def x_to_z(self, X):
        """FMU states (nx, M) -> optimizer variables (nx, M), physical units."""
        return np.array(self.x2z.map(X.shape[1])(X))

    def z_to_x(self, Z):
        return np.array(self.z2x.map(Z.shape[1])(Z))

    def violationReal(self, g):
        """Constraint violation per row, in physical units (state units for dynamics rows)."""
        g = np.asarray(g).ravel()
        return np.maximum(np.maximum(self.lbg - g, g - self.ubg), 0.0) * self.rowScale

    # ------------------------------------------------------------------ guesses / unpacking
    def _stage_major(self, Xs, Xc, U):
        """(nx, N), (nx, Ncol), (nu, N) arrays -> one vector in the stage-major layout of w."""
        v = np.empty(self.nw)
        v[self.xs_idx], v[self.xc_idx], v[self.u_idx] = Xs, Xc, U
        return v

    def pack(self, Xs, Xc, U):
        """FMU-state arrays (physical units, incl. n) -> scaled decision vector."""
        sc = lambda X: (self.x_to_z(X) - self.off[:, None]) / self.nom[:, None]
        return self._stage_major(sc(Xs), sc(Xc), np.asarray(U))

    def unpack_z(self, w):
        """Scaled decision vector -> optimizer variables z (physical units): Zs, Zc, U."""
        w = np.asarray(w).ravel()
        un = lambda Z: Z * self.nom[:, None] + self.off[:, None]
        return un(w[self.xs_idx]), un(w[self.xc_idx]), w[self.u_idx]

    def unpack(self, w):
        """Scaled decision vector -> FMU states (physical units, incl. n): Xs, Xc, U."""
        Zs, Zc, U = self.unpack_z(w)
        return self.z_to_x(Zs), self.z_to_x(Zc), U

    def guess_from_function(self, x_of_s, u_of_s):
        """x_of_s(s) -> (veh.nx + 1, M) FMU states (incl. the drive/brake pedal positions) + n;
        u_of_s(s) -> (3, M) FMU inputs (drive rate, brake rate, steer rate). The pedal rate controls
        are the finite-difference slopes of the pedal states between mesh points, converted to time
        (via speed) and normalised by the rate limit, so the guess is consistent on the mesh."""
        def x_full(sq):
            X = np.array(x_of_s(sq), float)
            X[[self.i_drv, self.i_brk]] = np.clip(X[[self.i_drv, self.i_brk]], 0, 1)
            return X
        Xs, Xc = x_full(self.s_mesh), x_full(self.s_col)
        p0, p1 = Xs[[self.i_drv, self.i_brk]], x_full(self.s_mesh + self.ds)[[self.i_drv, self.i_brk]]
        speed = np.hypot(Xs[self.veh.i["VX"]], Xs[self.veh.i["VY"]])
        rate = np.clip((p1 - p0) / self.ds * speed / self.pedal_rate_max, -1, 1)
        U = np.vstack([rate, u_of_s(self.s_mesh + 0.5 * self.ds)[2]])
        return self.pack(Xs, Xc, U)

    # ------------------------------------------------------------------ solve
    def solve(self, w0, solver_config=None, checkpoint=None, recorder=None, warm=None):
        """IPOPT with the settings of solver_config (laptime_core.solver_config.load_solver_config();
        default: configs/base/solverConfig.json):
        (1) L-BFGS phase ("lbfgs" section; skipped if its max_iter is 0) from w0.
        (2) Optional exact-Hessian phase ("newton" section) warm started from (1)
        The "ipopt" section applies to both phases.
        You can also warm start exact-Hessian phase only if you skip LBFGS phase.
        """
        if solver_config is None:
            from .solver_config import load_solver_config
            solver_config = load_solver_config()
        self.solver_config = solver_config
        ip = lambda d: {"ipopt." + k: v for k, v in d.items()}
        base = dict(ip(solver_config["ipopt"]), print_time=True)
        lbfgs_opts, newton_opts = ip(solver_config["lbfgs"]), ip(solver_config["newton"])
        lbfgs_iter = int(lbfgs_opts.get("ipopt.max_iter", 0))
        newton_iter = int(newton_opts.get("ipopt.max_iter", 0))
        if solver_config["linearSolver"] == "structured":
            # the stage-structured KKT solver (Beluga/linsolver), loaded by IPOPT through the MA27 entry
            # points of linsolver/cpp/stagesolver.dll (built on first use); the layout (stages, periodicity
            # rows) is written to the file LINSOLVER_SETUP points at. Threads: LINSOLVER_THREADS (default 4).
            from linsolver import hsl
            base.update({"ipopt." + k: v for k, v in hsl.useStructured(self).items()})
            print(f"  linear solver  structured ({base['ipopt.hsllib']}, layout {os.environ['LINSOLVER_SETUP']})")
        nlp = {"x": self.w, "f": self.J, "g": self.g}
        bounds = dict(lbx=self.lbw, ubx=self.ubw, lbg=self.lbg, ubg=self.ubg)
        if self.p is not None:
            if self.p_val is None:
                raise ValueError("open segment: call set_boundary before solve")
            nlp["p"] = self.p
            bounds["p"] = self.p_val
        t0 = time.time()
        self.stats = {}
        self.interrupted = False
        self.lamG = self.lamX = None
        self.recorder = recorder  # keep alive for the whole solve (GC mid-solve kills the process)
        sol = {"x": w0}
        # Ctrl+C during a run will still save the result
        old_sigint = None
        if recorder is not None:
            def on_sigint(signum, frame):
                if not recorder.stopRequested:
                    print("\n*** Ctrl+C: stopping after the current IPOPT iteration (the run will be saved) ***",
                          flush=True)
                recorder.stopRequested = True
            old_sigint = signal.signal(signal.SIGINT, on_sigint)
        try:
            sol = self._solve_phases(nlp, bounds, base, lbfgs_opts, newton_opts, lbfgs_iter, newton_iter,
                                     w0, sol, checkpoint, recorder, warm)
        finally:
            if old_sigint is not None:
                signal.signal(signal.SIGINT, old_sigint)
        self.wall_time = time.time() - t0
        self.wOpt = np.array(sol["x"]).ravel()
        return self.wOpt

    def _solve_phases(self, nlp, bounds, base, lbfgs_opts, newton_opts, lbfgs_iter, newton_iter,
                      w0, sol, checkpoint, recorder, warm_start=None):
        if lbfgs_iter > 0:
            opts = dict(base, **lbfgs_opts)
            if recorder is not None:
                opts["iteration_callback"] = recorder
                opts["iteration_callback_step"] = 1
            solver = ca.nlpsol("laptime_lbfgs", "ipopt", nlp, opts)
            if recorder is not None:
                recorder.markStart()
            try:
                sol = solver(x0=w0, **bounds)
                self.stats = dict(solver.stats())
                self.lamG = np.array(sol["lam_g"]).ravel()
                self.lamX = np.array(sol["lam_x"]).ravel()
                if recorder is not None and recorder.stopRequested:
                    # clean stop requested by our Ctrl+C handler: x and multipliers are IPOPT's current iterate
                    self.interrupted = True
                    self.stats["return_status"] = "Interrupted_By_User"
                elif (self.stats.get("return_status") in ("NonIpopt_Exception_Thrown", "User_Requested_Stop")
                        and recorder is not None and recorder.lastW is not None):
                    # Ctrl+C inside IPOPT's own code does not raise: the solve "returns" with one of
                    # these statuses and an x/multipliers that cannot be trusted. Keep the last
                    # iterate the recorder saw instead.
                    self.interrupted = True
                    sol = {"x": recorder.lastW}
                    self.lamG = self.lamX = None
                    self.stats["return_status"] = "Interrupted_By_User"
                    self.stats["iter_count"] = recorder._count - 1
            except (KeyboardInterrupt, RuntimeError) as err:
                # keep the last recorded iterate so an interrupted solve is still saved and plottable
                if recorder is None or recorder.lastW is None:
                    raise
                self.interrupted = True
                sol = {"x": recorder.lastW}
                try:
                    self.stats = dict(solver.stats())
                except Exception:
                    self.stats = {}
                self.stats["return_status"] = ("Interrupted_By_User" if isinstance(err, KeyboardInterrupt)
                                               else f"Solver_Error: {type(err).__name__}")
                self.stats.setdefault("iter_count", recorder._count)
            print(f"phase 1 (L-BFGS): {self.stats['return_status']}, {self.stats['iter_count']} iterations")
            if checkpoint:
                np.save(checkpoint, np.array(sol["x"]).ravel())
        if newton_iter > 0 and not self.interrupted:
            opts = dict(base, **newton_opts)
            if recorder is not None:
                opts["iteration_callback"] = recorder
                opts["iteration_callback_step"] = 1
            warm = {}
            if lbfgs_iter > 0 and self.lamG is not None:
                warm = dict(lam_x0=self.lamX, lam_g0=self.lamG)
                # "lbfgs_mu" in the newton section = the barrier parameter phase 1 ended at, so the
                # warm start continues the same barrier problem (a smaller mu_init with tiny pushes
                # pins the small multipliers of weakly active constraints against zero: jamming)
                mu_hist = ((self.stats or {}).get("iterations") or {}).get("mu") or []
                mu_last = float(mu_hist[-1]) if len(mu_hist) else None
                for k, v in list(opts.items()):
                    if v == "lbfgs_mu":
                        if mu_last is None:
                            raise ValueError(f"{k} = 'lbfgs_mu' but phase 1 recorded no mu")
                        opts[k] = mu_last
                if mu_last is not None:
                    print(f"phase 2 warm start: phase 1 ended at mu = {mu_last:.2e}")
            elif lbfgs_iter == 0 and warm_start is not None:  # multipliers from outside (schwarz.py)
                warm = dict(lam_x0=warm_start[0], lam_g0=warm_start[1])
                opts = {k: (float(warm_start[2]) if v == "lbfgs_mu" else v) for k, v in opts.items()}
                print(f"phase 2 warm start from given multipliers, mu = {float(warm_start[2]):.2e}")
            else:  # nothing to warm start from (a numeric mu_init stays)
                opts = {k: v for k, v in opts.items()
                        if not (k.startswith("ipopt.warm_start") or (k == "ipopt.mu_init" and v == "lbfgs_mu"))}
            opts = {k: v for k, v in opts.items() if v != "lbfgs_mu"}
            solver = ca.nlpsol("laptime_newton", "ipopt", nlp, opts)
            stats1 = self.stats
            x_start = sol["x"]
            try:
                sol = solver(x0=x_start, **warm, **bounds)
                stats2 = dict(solver.stats())
                self.lamG = np.array(sol["lam_g"]).ravel()
                self.lamX = np.array(sol["lam_x"]).ravel()
            except (KeyboardInterrupt, RuntimeError) as err:
                self.interrupted = True
                sol = {"x": recorder.lastW if recorder is not None and recorder.lastW is not None else x_start}
                self.lamG = self.lamX = None
                try:
                    stats2 = dict(solver.stats())
                except Exception:
                    stats2 = {}
                stats2["return_status"] = ("Interrupted_By_User" if isinstance(err, KeyboardInterrupt)
                                           else f"Solver_Error: {type(err).__name__}")
            if recorder is not None and recorder.stopRequested:
                self.interrupted = True
                stats2["return_status"] = "Interrupted_By_User"
            print(f"phase 2 (exact Hessian): {stats2.get('return_status')}, {stats2.get('iter_count')} iterations")
            self.stats = self._merge_phase_stats(stats1, stats2)
        return sol

    @staticmethod
    def _merge_phase_stats(s1, s2):
        """One stats dict for an L-BFGS + exact-Hessian solve: phase 2's status, iteration counts and
        timings summed, IPOPT's per-iteration arrays concatenated (phase 2's iteration 0 is the restart
        point), and both phases kept under 'phases'."""
        if not s1:
            return dict(s2, phases=[s2])
        out = dict(s2)
        out["iter_count"] = int(s1.get("iter_count", 0)) + int(s2.get("iter_count", 0))
        for k, v in s1.items():
            if k.startswith(("t_proc_", "t_wall_", "n_call_")) and isinstance(v, (int, float)):
                out[k] = v + s2.get(k, 0)
        it1, it2 = s1.get("iterations") or {}, s2.get("iterations") or {}
        out["iterations"] = {k: list(it1[k]) + list(it2.get(k, [])) for k in it1}
        out["phase2_start"] = len(next(iter(it1.values()), []))  # index of phase 2's first iteration
        out["phases"] = [{k: v for k, v in s.items() if k != "iterations"} for s in (s1, s2)]
        return out

    # ------------------------------------------------------------------ post-processing
    def _map(self, n):
        """f_point over n points, on self.threads threads when the vehicle allows it."""
        return self.f_point.map(n, "thread", self.threads) if self.threads > 1 else self.f_point.map(n)

    def evaluate(self, w):
        """Telemetry at the mesh points (physical units)."""
        Xs, Xc, U = self.unpack(w)  # FMU states, for telemetry
        Zs, Zc, _ = self.unpack_z(w)
        sc = lambda Z: (Z - self.off[:, None]) / self.nom[:, None]
        th, kap = self.track.theta(self.s_mesh), self.track.kappa(self.s_mesh)
        F = self._map(self.N)
        _, inv_sdot_m, sdot_m, Y = (np.array(v) for v in F(sc(Zs), U, th[None, :], kap[None, :]))
        lap_time = float(self.lap_time_fn(w))
        # time at mesh points from the collocation quadrature
        _, inv_sdot_c, _, _ = (np.array(v) for v in self._map(self.Ncol)(
            sc(Zc),
            U[:, self.col_interval], self.track.theta(self.s_col)[None, :],
            self.track.kappa(self.s_col)[None, :]))
        dt = (self.ds * self.B_col * inv_sdot_c.ravel()).reshape(self.N, self.d).sum(axis=1)
        t = np.r_[0.0, np.cumsum(dt)[:-1]]
        n = Xs[self.i_n]
        xy = self.track.frenet_to_xy(self.s_mesh, n)
        # u: the FMU inputs (= the optimizer controls); pedals: drive/brake positions (FMU states)
        return dict(s=self.s_mesh, t=t, lap_time=lap_time, x=Xs, u=U, u_ocp=U, n=n, sdot=sdot_m.ravel(),
                    pedals=Xs[[self.i_drv, self.i_brk]],
                    y=Y, x_enu=xy[:, 0], y_enu=xy[:, 1])

    def verify_defects(self, w, step=0.2):
        """Independent accuracy check: integrate every interval from its mesh state with the optimal
        (piecewise constant) control using fine RK4 in s (step [m]), and compare with the next mesh
        state. Stores the per-interval defects in self.defects (nx, N); returns the per-state max defect
        in physical units and the lap time from integration."""
        Xs, _, U = self.unpack_z(w)  # optimizer variables: the defects are in those units
        N = self.N
        m = int(np.ceil(self.ds / step))
        hs = self.ds / m  # per interval: m RK4 steps each
        F = self._map(N)
        z = (Xs - self.off[:, None]) / self.nom[:, None]  # scaled
        t = np.zeros(N)

        def f(zz, s):
            r = F(zz, U, self.track.theta(s)[None, :], self.track.kappa(s)[None, :])
            return np.array(r[0]), np.array(r[1]).ravel()

        for k in range(m):
            s = self.s_mesh + k * hs
            k1, q1 = f(z, s)
            k2, q2 = f(z + 0.5 * hs * k1, s + 0.5 * hs)
            k3, q3 = f(z + 0.5 * hs * k2, s + 0.5 * hs)
            k4, q4 = f(z + hs * k3, s + hs)
            z = z + hs / 6 * (k1 + 2 * k2 + 2 * k3 + k4)
            t += hs / 6 * (q1 + 2 * q2 + 2 * q3 + q4)
        X_end = z * self.nom[:, None] + self.off[:, None]
        if self.segment is not None:  # the fixed end state
            X_next = np.c_[Xs[:, 1:], self.p_val[:self.nx] * self.nom + self.off]
        else:
            X_next = np.c_[Xs[:, 1:], Xs[:, :1]]
            X_next[self.veh.i["yaw"], -1] -= self.track.total_turn
        self.defects = np.abs(X_end - X_next)  # (nx, N), physical units
        return dict(zip(self.state_names, self.defects.max(axis=1))), float(t.sum())
