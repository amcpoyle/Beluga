"""Time-domain MPC: Radau direct collocation over a fixed horizon, solved by IPOPT or FATROP.

The MPC optimizes over the simplified prediction model passed in as `model` (the 12-state
predictor: the thesis bicycle plus the four wheel speeds, predictor/bicycle.py), not the
full double-wishbone plant. The plant runs separately (plant/) and is only simulated forward with the planned inputs.

Each solve starts from the measured plant state, projected onto the predictor's states, and plans
the steering and pedal rates over the horizon. The decision variables are the states at the N + 1 interval nodes, the states at the d
collocation points of each interval, and one constant rate input per interval, all scaled by the
model's nominal values.

Cost: the thesis's tracking cost (Eq. 7.4). Settings.lap_weight = Q_L > 0 also rewards progress over
the horizon (thesis Eqs. 7.5-7.6); Q_L = 0 is plain path following.

Constraints:
    initial state   the first node equals the measured state
    dynamics        collocation equations in each interval, continuity between intervals
    track tube      the lateral offset stays inside the track corridor (track width minus car half-width
                    and the plant's margin); hard, or an exact L1 penalty with Settings.tube_penalty
    Frenet          1 - kappa*n >= 0.05, so the path coordinates stay valid
    slip            hard: rho^2 = ((kappa/kappa_peak)^2 + (tan(alpha)/tan_alpha_peak)^2) / (1+kappa)^2
                    (brush |sigma|^2 / sigma_max^2, laptime_core/vehicle.py) <= slip_limit^2 per wheel at every collocation point (Limits; None = off), from the
                    predictor's slip; Settings.slip_recovery relaxes it while a wheel is already over;
                    Settings.slip_penalty makes it soft (an exact L1 penalty), for run_mpc's fallback solve
    bounds          minimum speed, steering angle, pedal and rate limits

There is no terminal constraint (thesis Remark 7.2.7). Each constraint row is labelled with its type,
state and interval for the debugging plots.
"""

from dataclasses import dataclass, field, asdict
import hashlib
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import time

import casadi as ca
import numpy as np

from laptime_core.vehicle import MPC_SIGMA_MAX, SLIP_MODEL, combined_slip_sq

BUILD = Path(__file__).resolve().parent/"build"
GCC = Path(os.environ.get("BELUGA_GCC") or shutil.which("gcc") or "C:/msys64/mingw64/bin/gcc.exe")
COMPILE_FLAGS = tuple(os.environ.get("BELUGA_CFLAGS", "-O2").split())


def compiled_nlpsol(name, plugin, nlp, options, runtime_options=None):
    """nlpsol on gcc-compiled C of the NLP functions (objective, constraints and the derivatives
    the solver uses) instead of CasADi's virtual machine. The DLL is cached in build/ under the
    hash of the generated code and flags, so each predictor and setting compiles once.
    runtime_options (e.g. an iteration_callback) apply only to the solver loaded from the DLL, so
    they do not change the generated code or its cached build."""
    return ca.nlpsol(name, plugin, compiled_library(name, plugin, nlp, options), {**options, **(runtime_options or {})})


def compiled_library(name, plugin, nlp, options):
    """Path of the cached DLL of the NLP functions (compiled_nlpsol), building it if needed. Solver options
    such as the initial barrier parameter are not part of the generated code: one DLL serves any of them."""
    source = ca.nlpsol(name, plugin, nlp, options)
    with tempfile.TemporaryDirectory() as tmp:
        cwd = os.getcwd()
        os.chdir(tmp)
        try:
            source.generate_dependencies(f"{name}.c")
        finally:
            os.chdir(cwd)
        code = Path(tmp, f"{name}.c").read_bytes()
    key = hashlib.sha256(code+repr(COMPILE_FLAGS).encode()).hexdigest()[:16]
    dll = BUILD/f"{name}_{key}.dll"
    if not dll.exists():
        if not GCC.exists():
            raise FileNotFoundError(f"gcc not found ({GCC}): put MinGW-w64 gcc on PATH or set BELUGA_GCC to it, "
                                    "or set compiled=False in MPC_SETTINGS (mpc/workflows/run_mpc.py; slower solves)")
        BUILD.mkdir(exist_ok=True)
        c_file = dll.with_suffix(".c")
        c_file.write_bytes(code)
        partial = dll.with_suffix(f".{os.getpid()}.tmp")
        env = {**os.environ, "PATH": str(GCC.parent)+os.pathsep+os.environ.get("PATH", "")}
        subprocess.run([str(GCC), *COMPILE_FLAGS, "-shared", "-static-libgcc", str(c_file), "-o", str(partial)],
                       check=True, env=env)
        os.replace(partial, dll)
    return str(dll)


@dataclass(frozen=True)
class Weights:
    """Eq. 7.4 with the thesis Ch. 3 example values (printed 94 / PDF 134).

    Q = diag(3.1, 10, 10, 0, 5.2, 48, 0.9, 1.5) on [vx, vy, r, s, w, theta, delta, tr],
    R = diag(1, 1) on the rates. vx is tracked to the reference speed; w and theta
    to the reference line's offset and heading.
    """
    speed: float = 3.1
    lateral_velocity: float = 10.
    yaw_rate: float = 10.
    offset: float = 5.2
    heading: float = 48.
    steer: float = .9
    pedal: float = 1.5
    steer_rate: float = 1.
    pedal_rate: float = 1.


@dataclass(frozen=True)
class Limits:
    steer_angle: float = .35
    steer_rate: float = 5.
    pedal_rate: float = 10.
    vx_min: float = 5.
    car_half_width: float = 1.
    margin: float = .2
    tube_buffer: float = 0.  # MPC corridor only, inside the plant's checked corridor (half-width + margin)
    corridor_window: float = 0.  # archived corridor envelope (OCModelica: ThesisMPC/docs/archive/code/ThesisMPC/simple/road.py); must stay 0
    # combined-slip limit, same as the lap-time OCP's (laptime_core/vehicle.py MPC_SIGMA_MAX); kappa_peak and
    # tan_alpha_peak are both the brush |sigma| scale. slip_limit None = no slip rows
    slip_limit: float | None = 1.
    kappa_peak: float = MPC_SIGMA_MAX
    tan_alpha_peak: float = MPC_SIGMA_MAX
    slip_model: str = SLIP_MODEL  # recorded so plots use the right formula; runs without it are MF


@dataclass(frozen=True)
class Settings:
    horizon: float = 3.
    intervals: int = 60
    degree: int = 3
    speed_scale: float = 1.
    # True: vy and r tracked to the lap-time OCP's values (road.lateral_velocity, road.yaw_rate);
    # False: to 0 (thesis Eq. 7.4), which penalises the sideslip and yaw rate the OCP corners with
    track_lateral_reference: bool = False
    max_iter: int = 200
    tol: float = 1e-6
    # None: hard tube. rho: exact L1 penalty per point [cost/m]; same solution as the hard tube when that
    # is feasible, but a measured state past the edge no longer makes the NLP infeasible (thesis: hard)
    tube_penalty: float | None = None
    expand: bool = False  # expand the MX NLP to SX: same solution, ~25% less time per IPOPT iteration
    # >0: recovery time T [s] for the slip rows: a wheel already over the limit at the measured state may
    # stay over it by its measured excess, shrinking to 0 at t = T (else the hard rows are infeasible)
    slip_recovery: float = 0.
    # None: hard slip rows. rho: soft slip rows, rho * (excess of rho^2 over slip_limit^2) per wheel and
    # collocation point in the cost: the hard rows' plan whenever one exists (for rho large enough), else the
    # plan with the least excess. run_mpc solves it only as a fallback when the hard NLP has no solution.
    slip_penalty: float | None = None
    tube_extra: bool = False  # also enforce the tube midway between collocation points (polynomial state)
    solver: str = "ipopt"  # or "fatrop" (structure-exploiting interior point; same NLP, stage-wise layout)
    lap_weight: float = 0.  # thesis Q_L [cost/m of progress over the horizon]; 0: path following
    compiled: bool = False  # NLP functions as gcc-compiled C (compiled_nlpsol) instead of expanded SX; overrides expand
    fatrop_mu_init: float = 1e-6
    # FATROP initial barrier parameter for cold starts (the reference-shaped guess); None = fatrop_mu_init. A
    # cold guess is far from the solution, and FATROP's barrier is monotone (no adaptive update): from 1e-6 it
    # never decreases and the solve stalls (IPOPT with the same monotone barrier fails too); the FATROP paper
    # uses 1e2 (2026-10-30: failed updates 52-54 and 520 solve cold in ~1.2 s from 1 to 1e2, soft slip rows).
    fatrop_mu_init_cold: float | None = None
    weights: Weights = field(default_factory=Weights)
    limits: Limits = field(default_factory=Limits)


class MPC:
    def __init__(self, model, road, settings=Settings(), *, ipopt_print_level=0, ipopt_log=None):
        self.model, self.road, self.settings = model, road, settings
        if settings.limits.corridor_window:
            raise ValueError("corridor_window > 0 needs the archived corridor envelope (simple/road.py); "
                             "use tube_extra instead")
        S, lim, W = settings, settings.limits, settings.weights
        self.nx = nx = model.nx
        self.nominal = np.asarray(model.nominal, float)
        self.state_names = tuple(model.state_names)
        N, d, nu = S.intervals, S.degree, 2
        self.N, self.d, self.h = N, d, S.horizon/N
        h = self.h
        tau = np.array(ca.collocation_points(d, "radau"))
        C, D, B = (np.array(m) for m in ca.collocation_coeff(tau.tolist()))
        self.tau = tau
        self.t_nodes = np.arange(N+1)*h
        self.t_colloc = (np.arange(N)[:, None]*h+tau[None, :]*h).ravel()
        nom = ca.DM(self.nominal)

        x0 = ca.MX.sym("x0", nx)
        soft = S.tube_penalty is not None
        if soft and (not np.isfinite(S.tube_penalty) or S.tube_penalty <= 0):
            raise ValueError("tube_penalty must be positive and finite")
        # Points between the collocation points, from the interval's collocation polynomial
        # (Lagrange basis on [0, tau_1..tau_d]): midway in each gap. A narrowing of the track
        # can otherwise fall between two points (it did: the 0.8 m notch at 4185 m).
        nodes = np.r_[0., tau]
        self.tau_extra = (nodes[:-1]+nodes[1:])/2 if S.tube_extra else np.zeros(0)
        self.extra_basis = np.array([[np.prod([(te-nodes[q])/(nodes[r]-nodes[q]) for q in range(d+1) if q != r])
                                      for r in range(d+1)] for te in self.tau_extra])
        self.n_tube = N*d+1+N*len(self.tau_extra)
        slip = lim.slip_limit is not None
        if slip and (not np.isfinite(lim.slip_limit) or lim.slip_limit <= 0):
            raise ValueError("slip_limit must be positive and finite, or None")
        self.n_slip_rows = 4 if slip else 0  # one per wheel at every collocation point
        # Stage-wise decision variables (FATROP's layout; IPOPT solves the same NLP): stage k holds
        # the node state X_k and, for k < N, its "controls" U_k, collocation states Xc_k and the
        # tube slacks of interval k (stage 0 also the node-0 tube slack). The matrices below are
        # assembled from them, so the build is layout-independent.
        ne = len(self.tau_extra)
        Xs = [ca.MX.sym(f"X_{k}", nx) for k in range(N+1)]
        Us = [ca.MX.sym(f"U_{k}", nu) for k in range(N)]
        Xcs = [ca.MX.sym(f"Xc_{k}", nx, d) for k in range(N)]
        Sigs = [ca.MX.sym(f"tube_slack_{k}", 2, d+ne+(k == 0)) for k in range(N)] if soft else None
        Z, Zc, U = ca.horzcat(*Xs), ca.horzcat(*Xcs), ca.horzcat(*Us)
        Sig = ca.horzcat(*[Sigs[k][:, :d+ne] for k in range(N)], Sigs[0][:, d+ne]) if soft else None
        recovery = slip and S.slip_recovery > 0
        soft_slip = slip and S.slip_penalty is not None
        if soft_slip and (not np.isfinite(S.slip_penalty) or S.slip_penalty <= 0):
            raise ValueError("slip_penalty must be positive and finite, or None")
        Nss = [ca.MX.sym(f"slip_slack_{k}", 4, d) for k in range(N)] if soft_slip else None

        def combined_slip(x, u):
            """rho^2 per wheel as the lap-time OCP defines it, from the predictor's kappa and tan(alpha)."""
            kt = model.slip_kappa_tan_alpha(x, u, road.kappa(x[3]))
            return combined_slip_sq(kt[:4], kt[4:], (lim.kappa_peak, lim.tan_alpha_peak))

        def add(rows, expr, lo, hi, label, idx):
            expr = ca.vec(expr)
            n = expr.numel()
            rows.append((expr, np.broadcast_to(lo, (n,)).tolist(), np.broadcast_to(hi, (n,)).tolist(),
                         [label]*n, list(idx) if np.ndim(idx) else [idx]*n))

        def tube(rows, x, slack):
            s, n = x[3], x[4]
            allowance = lim.car_half_width+lim.margin+lim.tube_buffer
            left, right = (slack[0], slack[1]) if soft else (0, 0)
            add(rows, n-(road.left(s)-allowance)-left, -np.inf, 0, "tube_left", 4)
            add(rows, -(road.right(s)-allowance)-n-right, -np.inf, 0, "tube_right", 4)
            add(rows, 1-road.kappa(s)*n, .05, np.inf, "frenet", -1)

        def stage(x, u):
            s = x[3]
            vref = S.speed_scale*road.speed(s)
            vy_ref, r_ref = (road.lateral_velocity(s), road.yaw_rate(s)) if S.track_lateral_reference else (0, 0)
            return (W.speed*(x[0]-vref)**2+W.lateral_velocity*(x[1]-vy_ref)**2+W.yaw_rate*(x[2]-r_ref)**2
                    + W.offset*(x[4]-road.offset(s))**2+W.heading*(x[5]-road.relative_heading(s))**2
                    + W.steer*x[6]**2+W.pedal*x[7]**2+W.steer_rate*u[0]**2+W.pedal_rate*u[1]**2)

        # One interval as one SX function of its own variables: continuity rows, path rows
        # (collocation, tube, frenet, slip at each collocation point, then the extra tube points)
        # and its cost. The NLP maps it over the N intervals, so a compiled NLP holds one copy of
        # the model and its derivatives instead of N*d (Settings.compiled). taper is the
        # slip-recovery factor max(0, 1 - t/T) at the interval's collocation times, excess the
        # measured state's max(0, rho0^2 - slip_limit^2) per wheel.
        xk, xk1, uk = ca.SX.sym("X", nx), ca.SX.sym("X_next", nx), ca.SX.sym("U", nu)
        xck = ca.SX.sym("Xc", nx, d)
        sigk = ca.SX.sym("tube_slack", 2, d+ne if soft else 0)
        nsk = ca.SX.sym("slip_slack", 4, d) if soft_slip else None
        taper, excess = ca.SX.sym("taper", d), ca.SX.sym("excess", 4)
        path, continuity, interval_cost = [], [], 0
        Zfull = [xk*nom]+[xck[:, j]*nom for j in range(d)]
        for j in range(d):
            xc = Zfull[j+1]
            slope = sum(Zfull[r]*C[r, j] for r in range(d+1))
            f = model.rhs(xc, uk, road.kappa(xc[3]))
            add(path, (h*f-slope)/nom, 0, 0, "collocation", range(nx))
            tube(path, xc, sigk[:, j] if soft else None)
            if slip:
                rho2 = combined_slip(xc, uk)
                if recovery:
                    rho2 = rho2-taper[j]*excess
                for a, wheel in enumerate(("FL", "FR", "RL", "RR")):
                    add(path, rho2[a]-nsk[a, j] if soft_slip else rho2[a], -np.inf, lim.slip_limit**2,
                        f"slip_{wheel}", 7)
            interval_cost += B[j]*h*stage(xc, uk)
        for e, basis in enumerate(self.extra_basis):
            tube(path, sum(Zfull[r]*basis[r] for r in range(d+1)), sigk[:, d+e] if soft else None)
        end = sum(Zfull[r]*D[r] for r in range(d+1))
        # Gap-closing form x_{k+1} - F(x_k, u_k), as FATROP requires (sign irrelevant for IPOPT).
        add(continuity, (xk1*nom-end)/nom, 0, 0, "continuity", range(nx))
        if soft:
            interval_cost += S.tube_penalty*ca.sum1(ca.vec(sigk))
        if soft_slip:
            interval_cost += S.slip_penalty*ca.sum1(ca.vec(nsk))
        # (the slip slack input exists only for soft slip rows, so the hard NLP's code stays unchanged)
        self.interval_function = ca.Function(
            "interval", [xk, uk, ca.vec(xck), ca.vec(sigk)]+([ca.vec(nsk)] if soft_slip else [])+[xk1, taper, excess],
            [ca.vertcat(*[c[0] for c in continuity]), ca.vertcat(*[c[0] for c in path]), interval_cost],
            ["X", "U", "Xc", "tube_slack"]+(["slip_slack"] if soft_slip else [])+["X_next", "taper", "excess"],
            ["continuity", "path", "cost"])

        # Stage 0's extra rows, on the MX variables: the initial condition, and the node-0 tube for a
        # soft tube (node 0 is the measured state: a hard row there could only make the NLP infeasible).
        initial, node0 = [], []
        add(initial, (Z[:, 0]*nom-x0)/nom, 0, 0, "initial", range(nx))
        if soft:
            tube(node0, Z[:, 0]*nom, Sigs[0][:, d+ne])
        tapers = np.zeros((d, N))
        excess0 = ca.DM.zeros(4)
        if recovery:
            tapers = np.maximum(0., 1-self.t_colloc.reshape(N, d).T/S.slip_recovery)
            excess0 = ca.fmax(combined_slip(x0, ca.DM.zeros(2))-lim.slip_limit**2, 0)
        dyn, rows, costs = self.interval_function.map(N)(
            Z[:, :N], U, ca.horzcat(*[ca.vec(Xcs[k]) for k in range(N)]),
            ca.horzcat(*[ca.vec(Sigs[k][:, :d+ne]) for k in range(N)]) if soft else ca.MX(0, N),
            *([ca.horzcat(*[ca.vec(Nss[k]) for k in range(N)])] if soft_slip else []), Z[:, 1:], tapers,
            ca.repmat(excess0, 1, N))
        cost = ca.sum2(costs)
        if soft:
            cost += S.tube_penalty*ca.sum1(Sigs[0][:, d+ne])
        lap_weight = ca.MX.sym("lap_weight")
        cost -= lap_weight*(Z[3, N]*nom[3]-x0[3])

        # Stage-wise order: w = [X_0, U_0, Xc_0, slacks_0, X_1, ...,  X_N]; g = per stage k: its
        # continuity rows (FATROP's gap-closing constraints, which must come first), then its path
        # rows (initial condition, collocation, tube, frenet, slip, node-0 tube at stage 0).
        stage_vars = []
        for k in range(N):
            stage_vars.append([Xs[k], Us[k], ca.vec(Xcs[k])]+([ca.vec(Sigs[k])] if soft else [])
                              + ([ca.vec(Nss[k])] if soft_slip else []))
        stage_vars.append([Xs[N]])
        self.w = ca.vertcat(*[v for sv in stage_vars for v in sv])
        self.stage_nx = [nx]*(N+1)
        self.stage_nu = [sum(v.numel() for v in sv[1:]) for sv in stage_vars[:-1]]+[0]
        g, meta, self.stage_ng = [], [], []
        for k in range(N):
            first, last = (initial, node0) if k == 0 else ([], [])
            g += [dyn[:, k]]+[c[0] for c in first]+[rows[:, k]]+[c[0] for c in last]
            meta += [c[1:]+([k]*len(c[1]),) for c in continuity+first+path+last]
            self.stage_ng.append(sum(len(c[1]) for c in first+path+last))
        self.stage_ng.append(0)
        self.g = ca.vertcat(*g)
        lbg, ubg, family, state, interval = ([x for c in meta for x in c[i]] for i in range(5))
        # Block layout [X nodes, Xc, U, tube slacks, slip slacks] -> stage layout: block[i] = w[perm[i]].
        # pack/unpack, history files and diagnostics keep using the block layout through it.
        block = ca.vertcat(ca.vec(Z), ca.vec(Zc), ca.vec(U), *([ca.vec(Sig)] if soft else []),
                           *([ca.vec(ca.horzcat(*Nss))] if soft_slip else []))
        index = ca.Function("layout", [self.w], [block])
        self.perm = np.rint(np.asarray(index(np.arange(self.w.numel(), dtype=float))).ravel()).astype(int)
        self.n_tube_slack = 2*self.n_tube if soft else 0
        self.n_slip_slack = 4*N*d if soft_slip else 0
        self.n_slack = self.n_tube_slack+self.n_slip_slack
        self.f = cost
        self.p = ca.vertcat(x0, lap_weight)
        self.lbg, self.ubg = np.array(lbg), np.array(ubg)
        self.family, self.state_index, self.interval = np.array(family), np.array(state), np.array(interval)
        lo_x = np.r_[lim.vx_min, -np.inf, -np.inf, -np.inf, -np.inf, -np.inf, -lim.steer_angle, -1., np.full(nx-8, -np.inf)]
        hi_x = np.r_[np.inf, np.inf, np.inf, np.inf, np.inf, np.inf, lim.steer_angle, 1., np.full(nx-8, np.inf)]
        self.lbw = np.r_[np.tile(lo_x/self.nominal, N+1), np.tile(lo_x/self.nominal, N*d),
                         np.tile([-lim.steer_rate, -lim.pedal_rate], N)]
        self.ubw = np.r_[np.tile(hi_x/self.nominal, N+1), np.tile(hi_x/self.nominal, N*d),
                         np.tile([lim.steer_rate, lim.pedal_rate], N)]
        self.lbw = self.to_stage(np.r_[self.lbw, np.zeros(self.n_slack)])
        self.ubw = self.to_stage(np.r_[self.ubw, np.full(self.n_slack, np.inf)])
        self.scale_vec = self.to_stage(np.r_[np.tile(self.nominal, N+1+N*d), np.ones(2*N+self.n_slack)])
        self.node_index = self.perm[nx*np.arange(N+1)]
        self.nlp = dict(x=self.w, p=self.p, f=self.f, g=self.g)
        self.options = {"print_time": False, "ipopt.print_level": int(ipopt_print_level), "ipopt.sb": "yes",
                        "ipopt.max_iter": S.max_iter, "ipopt.tol": S.tol, "ipopt.mu_strategy": "adaptive",
                        "expand": bool(S.expand)}
        self.ipopt_log = None if ipopt_log is None else Path(ipopt_log)
        if self.ipopt_log is not None:
            # IPOPT appends every solve to this file and flushes at the end of each one,
            # so byte offsets taken around a solve delimit exactly that solve's log.
            self.ipopt_log.parent.mkdir(parents=True, exist_ok=True)
            self.options.update({"ipopt.output_file": str(self.ipopt_log), "ipopt.file_print_level": 5})
        # IPOPT options whichever solver runs: the iteration recorder (helpers/history.py) re-solves with IPOPT
        self.ipopt_options = dict(self.options)
        if S.solver == "fatrop":
            self.options = {"print_time": False, "expand": True, "structure_detection": "manual",
                            "N": N, "nx": self.stage_nx, "nu": self.stage_nu, "ng": self.stage_ng,
                            "equality": (self.lbg == self.ubg).tolist(),
                            "fatrop.print_level": int(ipopt_print_level), "fatrop.max_iter": S.max_iter,
                            "fatrop.tol": S.tol,
                            # Small initial barrier parameter keeps the warm start (default 1e-2 discards
                            # it): 45 hard braking-zone updates, median 16 / max 49 iterations vs 23 / 37
                            # with the default and 45 / 289 with IPOPT (2026-10-21).
                            "fatrop.mu_init": S.fatrop_mu_init}
        elif S.solver != "ipopt":
            raise ValueError(f"unknown solver {S.solver!r}")
        cold_options = None
        if S.solver == "fatrop" and S.fatrop_mu_init_cold is not None and S.fatrop_mu_init_cold != S.fatrop_mu_init:
            cold_options = {**self.options, "fatrop.mu_init": S.fatrop_mu_init_cold}
        if S.compiled:
            # The NLP is built from the interval function mapped over the intervals, so the C
            # holds one copy of the model and its derivatives (23.8 MB).
            self.options = {k: v for k, v in self.options.items() if k != "expand"}
            self.library = library = compiled_library("simple_mpc", S.solver, self.nlp, self.options)
            self.solver = ca.nlpsol("simple_mpc", S.solver, library, self.options)
            if cold_options is not None:
                cold_options.pop("expand", None)
                self.cold_solver = ca.nlpsol("simple_mpc_cold", S.solver, library, cold_options)
        else:
            self.solver = ca.nlpsol("simple_mpc", S.solver, self.nlp, self.options)
            if cold_options is not None:
                self.cold_solver = ca.nlpsol("simple_mpc_cold", S.solver, self.nlp, cold_options)
        if cold_options is None:
            self.cold_solver = self.solver   # the solver for cold starts (guess_from_reference)
        self.sizes = dict(nodes=(nx, N+1), colloc=(nx, N*d), controls=(nu, N))

    # ---------------------------------------------------------------- layout --
    def to_stage(self, v_block):
        """Vector in the block layout [X nodes, Xc, U, tube slacks] -> w order."""
        w = np.empty(len(v_block))
        w[self.perm] = v_block
        return w

    def to_stage_labels(self, labels_block):
        """Any per-variable array in the block layout (e.g. labels) -> w order."""
        out = np.empty_like(np.asarray(labels_block))
        out[self.perm] = labels_block
        return out

    def to_block(self, w):
        return np.asarray(w, float).ravel()[self.perm]

    def pack(self, X, Xc, U):
        return self.to_stage(np.r_[(X/self.nominal).ravel(), (Xc/self.nominal).ravel(), U.ravel(),
                                   np.zeros(self.n_slack)])

    def unpack(self, w):
        w = self.to_block(w)
        nx = self.nx
        n0, n1 = nx*(self.N+1), nx*self.N*self.d
        X = w[:n0].reshape(self.N+1, nx)*self.nominal
        Xc = w[n0:n0+n1].reshape(self.N*self.d, nx)*self.nominal
        U = w[n0+n1:n0+n1+2*self.N].reshape(self.N, 2)
        return X, Xc, U

    def slack(self, w):
        """Tube slacks (2, points) in metres; zeros for a hard tube."""
        if not self.n_tube_slack:
            return np.zeros((2, self.n_tube))
        start = self.nx*(self.N+1)+self.nx*self.N*self.d+2*self.N
        return self.to_block(w)[start:start+self.n_tube_slack].reshape(self.n_tube, 2).T

    def slip_slack(self, w):
        """Slip slacks (wheels, collocation points): the planned excess of rho^2 over slip_limit^2; zeros
        for hard slip rows."""
        if not self.n_slip_slack:
            return np.zeros((4, self.N*self.d))
        start = self.nx*(self.N+1)+self.nx*self.N*self.d+2*self.N+self.n_tube_slack
        return self.to_block(w)[start:start+self.n_slip_slack].reshape(self.N*self.d, 4).T

    # ---------------------------------------------------------------- guesses --
    def guess_from_reference(self, x0, reference):
        """States along the reference line, progress advanced at the reference speed."""
        S = self.settings
        times = np.r_[self.t_nodes, self.t_colloc]
        grid = np.linspace(0, S.horizon, 301)
        s = [x0[3]]
        for dt in np.diff(grid):
            s.append(s[-1]+max(S.speed_scale*float(self.road.speed(s[-1])), 5.)*dt)
        s_at = np.interp(times, grid, s)
        states = np.array([reference.guess(q) for q in s_at])
        states[:, 0] *= S.speed_scale
        states[:, 6] = np.clip(states[:, 6], -S.limits.steer_angle, S.limits.steer_angle)
        states[:, 7] = np.clip(states[:, 7], -1, 1)
        states = self.model.extend(states)  # the reference guesses the 8 body states; add the rim speeds
        X, Xc = states[:self.N+1], states[self.N+1:]
        X[0] = x0
        return X, Xc, np.zeros((self.N, 2))

    def shift(self, X, Xc, U, x0, steps=1):
        """A previous solution shifted by `steps` intervals (update periods since it was planned), the last
        interval repeated to fill the horizon."""
        j = int(min(max(steps, 1), self.N))
        X = np.r_[X[j:], np.repeat(X[-1:], j, axis=0)]
        Xc = np.r_[Xc[self.d*j:], np.tile(Xc[-self.d:], (j, 1))]
        U = np.r_[U[j:], np.repeat(U[-1:], j, axis=0)]
        X[0] = x0
        return X, Xc, U

    # ------------------------------------------------------------------ solve --
    def log_offset(self):
        return self.ipopt_log.stat().st_size if self.ipopt_log is not None and self.ipopt_log.exists() else 0

    def parameters(self, x0):
        """NLP parameter vector: measured state, then Q_L."""
        return np.r_[np.asarray(x0, float), self.settings.lap_weight]

    def solve(self, x0, guess, solver=None):
        x0 = np.asarray(x0, float)
        w0 = np.clip(self.pack(*guess), self.lbw, self.ubw)
        log_start = self.log_offset()
        start = time.perf_counter()
        result = (solver or self.solver)(x0=w0, p=self.parameters(x0), lbx=self.lbw, ubx=self.ubw, lbg=self.lbg, ubg=self.ubg)
        wall = time.perf_counter()-start
        stats = (solver or self.solver).stats()
        w, g = np.asarray(result["x"]).ravel(), np.asarray(result["g"]).ravel()
        violation = np.maximum(0, np.maximum(self.lbg-g, g-self.ubg))
        families = {f: float(violation[self.family == f].max()) for f in np.unique(self.family)}
        X, Xc, U = self.unpack(w)
        log = None if self.ipopt_log is None else [log_start, self.log_offset()]
        return dict(log=log, tube_slack=float(self.slack(w).max()), slip_slack=float(self.slip_slack(w).max()), success=bool(stats.get("success", False)), status=stats.get("return_status"),
                    iterations=int(stats.get("iter_count", 0)), wall=wall, objective=float(result["f"]),
                    max_violation=float(violation.max()), violation_by_family=families,
                    X=X, Xc=Xc, U=U, w=w, g=g, x0=x0, w0=w0,
                    lam_g=np.asarray(result["lam_g"]).ravel(), lam_x=np.asarray(result["lam_x"]).ravel(),
                    convergence={k: np.asarray(v, float) for k, v in (stats.get("iterations") or {}).items()})

    def settings_dict(self):
        return asdict(self.settings)
