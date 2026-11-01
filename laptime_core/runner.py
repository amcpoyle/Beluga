"""Minimum-lap-time optimization of the AlyssaVehicle on a TUMFTM track.

This module holds the run logic shared by both vehicle models. It is not run directly; start a run
from one of the entry scripts, which each define their own SETTINGS and build their vehicle:
    python -m fmu_opt.run_min_laptime          FMU model (finite-difference derivatives)
    python -m omc2casadi_opt.run_min_laptime   CasADi model converted from Modelica (exact derivatives, multithreaded)

Settings: DEFAULTS below lists every setting with its documentation. An entry script's SETTINGS
override DEFAULTS, and keyword arguments to main() override both. IPOPT options are in
configs/base/solverConfig.json.

A run:
    1. load the vehicle and the track
    2. build the initial guess: a warm start from a previous solution, or a closed-loop driver
       simulation that follows a scaled quasi-steady-state (QSS) speed profile
    3. build the NLP: Radau collocation in the distance domain on a uniform mesh of interval ds
    4. solve with IPOPT
    5. save results/<track>_ds<ds>.npz and plots
"""
import os
import time
import zlib
from types import SimpleNamespace

import casadi as ca
import numpy as np

from .history import IterationRecorder, loadHistory, saveHistory
from .initial_guess import fill_suspension_states, qss_speed_profile, resample_on_s, simulate_lap
from .ocp import LapTimeOCP
from .solver_config import load_solver_config
from .paths import REPO
from .track import Track
from .vehicle import CONTROLS, DEFAULT_PARAMS, OCP_ALPHA_MAX, OCP_KAPPA_MAX, PEDAL_RATE_PARAM

# ------------------------------------------------------------------------------ default run settings
DEFAULTS = dict(
    # track and mesh
    track="Catalunya",        # track_data/tracks/<track>.csv
    ds=10.0,                  # mesh interval length [m]
    degree=2,                 # Radau collocation degree
    smoothing=50.0,          # centerline smoothing (0 = none)
    # initial guess
    guess_speed=0.85,         # fraction of the QSS speed profile the guess driver tracks
    warm=None,                # warm start using previous solve (npz or pkl file)
    solver_config=None,       # None = configs/base/solverConfig.json
    vehicle=None,             # "fmu" (fmu_opt) or "casadi" (omc2casadi_opt)
    fmu=None,                 # FMU to load (its _info.json next to it for vehicle="casadi"); None = fmu/AlyssaVehicle.fmu.
                              # fmu/_previous_build/AlyssaVehicle.fmu is the rigid-corner model of the 2026-10 runs
    threads=1,                # threads for the per-point dynamics and derivatives; only the converted model
                              # (omc2casadi_opt) uses them, the FMU always runs serially

    # pedal positions = FMU states, optimizer controls = pedal rates
    pedal_rate=10.0,        # max drive/brake pedal rate [1/s] (FMU parameter maxPedalRate)
    change_of_variables=False,  # False: optimize the FMU states directly (VX, VY, wXX); True: the yaw-frame
                                # velocity u, v and wheel speed relative to rolling dwXX (see ocp.py)
    margin=0.3,               # [m] the line stays this far inside the track, on top of the car's half-width 1.0 m. The MPC
                              # plant stops at 0.2 m (mpc/config/plant.json), so the plant has 0.1 m of room to miss the line
    kappa_max=OCP_KAPPA_MAX,  # max slip ratio [-] with no slip angle (laptime_core/vehicle.py)
    alpha_max=OCP_ALPHA_MAX,  # max slip angle [rad] with no slip ratio
    slip_limit=1.0,           # max combined normalized slip (kappa/kappa_max)^2 + (tanA/tan alpha_max)^2 <= slip_limit^2;
    slip_soft=False,          # True: enforce slip_limit with the smooth penalty
    w_slip=10.0,              # soft-limit weight [s]: a hard-limit multiplier of 1e-2 s balances at
    fmu_params={},            # FMU parameter overrides on top of laptime_core.vehicle.DEFAULT_PARAMS,
                              # e.g. {"rigController.driveBrakeTorque.tEps": 1.0}

    # objective regularization (each biases the lap time by at most its own value; see ocp.py)
    w_du=1e-2,                # squared interval-to-interval change of every rate control (~40 ms on Catalunya)
    w_overlap=0.1,            # sum of drive * brake at the mesh points (~10 ms)
    w_straight=10.0,          # line curvature n'' on straights [s m] (~0.5 ms; 0 = off)
    w_pedal_rate=0.0,         # integral (drive_rate^2 + brake_rate^2) ds [s/m] (5e-5 costs ~1 ms each)
    w_steer_rate=0.0,         # integral steer_rate^2 ds [s/m] (5e-4 costs ~1 ms)

    # output
    name=None,                # post/<name>.pkl for the iteration history; None = <track>_N<N>_<timestamp>
    out=os.path.join(REPO, "results"),  # npz, plots and the cached initial-guess simulation
    stride=1,                 # record every k-th IPOPT iteration
    autosave_every=25,        # rewrite post/<name>.pkl every k iterations during the solve (0 = off), so a
                              # killed process still leaves the run; Ctrl+C stops cleanly and saves anyway
    no_history=False,         # True = do not record iterations / write the pkl
)
# -------------------------------------------------------------------------------------------------


def load_track(args):
    return Track(os.path.join(REPO, "track_data", "tracks", f"{args.track}.csv"), smoothing=args.smoothing or None)


def resolve_settings(settings, **overrides):
    """DEFAULTS, then a path's SETTINGS, then single overrides (keys of either)."""
    merged = dict(DEFAULTS, **settings)
    unknown = set(overrides) - set(merged)
    if unknown:
        raise ValueError(f"unknown settings {sorted(unknown)}")
    merged.update(overrides)
    if merged["vehicle"] not in ("fmu", "casadi"):
        raise ValueError(f"vehicle must be 'fmu' or 'casadi', not {merged['vehicle']!r}")
    return merged


def fmu_params(args):
    """FMU parameter overrides of the settings: DEFAULT_PARAMS, the pedal rate, fmu_params."""
    return dict(DEFAULT_PARAMS, **{PEDAL_RATE_PARAM: args.pedal_rate}, **args.fmu_params)


def build_ocp(args, veh, track, threads=None, segment=None):
    """LapTimeOCP with the settings' formulation on the uniform ds mesh; segment: an open segment
    (OCModelica: ThesisMPC/docs/archive/code/laptime/schwarz.py) instead of the closed lap. threads: None = args.threads."""
    return LapTimeOCP(veh, track, ds=args.ds, degree=args.degree, margin=args.margin, pedal_rate_max=args.pedal_rate,
                      slip_peak=(args.kappa_max, np.tan(args.alpha_max), args.slip_limit),
                      w_straight=args.w_straight, w_overlap=args.w_overlap, w_du=(args.w_du,) * 3,
                      w_rate=(args.w_pedal_rate, args.w_pedal_rate, args.w_steer_rate),
                      change_of_variables=args.change_of_variables, slip_soft=args.slip_soft, w_slip=args.w_slip,
                      threads=args.threads if threads is None else threads, segment=segment)


def initial_guess(args, veh, track, params):
    """x_of_s(s) -> (veh.nx + 1, M) states incl. n, u_of_s(s) -> (3, M) controls: from args.warm (a
    previous solution, missing double wishbone states filled quasi-statically) or from the closed-loop
    driver simulation along the scaled QSS speed profile (cached in args.out)."""
    if args.warm:
        # FMU states + n (x) and FMU inputs = pedal/steer rates (u). Only runs with the pedal positions
        # as FMU states (state "drive"); older layouts had different FMU inputs.
        def to_fmu_states(X, names):
            if "u" in names:  # saved with the change of variables: u, v, dwXX -> VX, VY, wXX
                X = X.copy()
                yaw, u_, v_ = X[names.index("yaw")], X[names.index("u")], X[names.index("v")]
                X[names.index("u")] = u_ * np.cos(yaw) - v_ * np.sin(yaw)
                X[names.index("v")] = u_ * np.sin(yaw) + v_ * np.cos(yaw)
                for w in ("FL", "FR", "RL", "RR"):
                    X[names.index("dw" + w)] += u_ / veh.r_eff
            return X

        if args.warm.endswith(".pkl"):
            run = loadHistory(args.warm)
            names = run["meta"]["stateNames"]
            if "drive" not in names:
                raise ValueError(f"{args.warm}: saved before the pedal positions became FMU states; cannot warm start")
            X = to_fmu_states(run["final"]["X"].T, names)
            names = ["VX" if nm == "u" else "VY" if nm == "v" else nm[1:] if nm.startswith("dw") else nm
                     for nm in names]
            prev = {"s": run["s"], "x": X, "u": run["final"]["U"].T, "lap_time": run["meta"]["lapTime"]}
        else:
            npz = np.load(args.warm)
            names = list(npz["state_names"])
            prev = {"s": npz["s"], "x": npz["x"], "u": npz["u"], "lap_time": npz["lap_time"]}
        if names != veh.names + ["n"]:  # e.g. a rigid-corner solution for the double wishbone model
            prev["x"] = fill_suspension_states(veh, track, names, prev["x"], prev["u"], prev["s"],
                                               threads=args.threads)
            print(f"warm start: filled {sorted(set(veh.names) - set(names))} quasi-statically")
        s_prev = np.r_[prev["s"], track.length]
        x_prev = np.c_[prev["x"], prev["x"][:, :1]]
        x_prev[veh.i["yaw"], -1] -= track.total_turn
        u_prev = np.c_[prev["u"], prev["u"][:, :1]]
        x_of_s = lambda s: np.array([np.interp(s, s_prev, row) for row in x_prev])
        u_of_s = lambda s: np.array([np.interp(s, s_prev, row) for row in u_prev])
        print(f"warm start from {args.warm} (lap time {float(prev['lap_time']):.3f} s)")
    else:
        s_grid = np.linspace(0, track.length, 2000, endpoint=False)
        v_qss = qss_speed_profile(track, s_grid)
        print(f"QSS point-mass lap time: {np.sum(track.length / len(s_grid) / v_qss):.2f} s")
        v_ref = lambda s: args.guess_speed * np.interp(np.mod(s, track.length), s_grid, v_qss, period=track.length)
        # the cached simulation depends on the FMU and its parameters (e.g. the pedal map)
        sig = zlib.crc32(repr((sorted(params.items()), os.path.getmtime(veh.fmu_path), round(track.length, 3))).encode())
        sim_file = os.path.join(args.out, f"{track.name}_guess_sim{args.guess_speed:g}_{sig:08x}.npz")
        if os.path.exists(sim_file):
            sim = dict(np.load(sim_file))
            print(f"loaded initial-guess simulation {sim_file}")
        else:
            print("simulating closed-loop driver lap for the initial guess ...")
            sim = simulate_lap(veh, track, v_ref, laps=1.02, pedal_rate_max=args.pedal_rate)
            if sim["s"][-1] < track.length:  # never cache a failed guess lap
                raise RuntimeError("initial-guess simulation did not complete a lap; lower guess_speed in SETTINGS")
            np.savez(sim_file, **sim)

        def x_of_s(s):
            xq, _, nq, _ = resample_on_s(sim, s, 0.0)
            return np.vstack([xq, nq])

        u_of_s = lambda s: resample_on_s(sim, s, 0.0)[1]
        print(f"initial guess lap time (simulation): {np.interp(track.length, sim['s'], sim['t']):.2f} s")

    return x_of_s, u_of_s


def main(settings, build_vehicle, **overrides):
    """Run with a path's SETTINGS (on top of DEFAULTS) and its build_vehicle(args) -> Vehicle; keyword
    arguments override single entries (e.g. main(SETTINGS, build_vehicle, ds=5.0))."""
    args = SimpleNamespace(**resolve_settings(settings, **overrides))

    os.makedirs(args.out, exist_ok=True)
    track = load_track(args)
    veh = build_vehicle(args)
    params = veh.params
    print(f"vehicle: {type(veh).__name__} ({veh.fmu_path}, {veh.nx} states)")
    print("FMU parameter overrides: " + ", ".join(f"{k}={v:g}" for k, v in params.items()))

    ocp = build_ocp(args, veh, track)
    print(f"{track.name}: L = {track.length:.1f} m, N = {ocp.N} intervals, ds = {ocp.ds:.2f} m, "
          f"{ocp.w.numel()} variables, {ocp.g.numel()} constraints")

    x_of_s, u_of_s = initial_guess(args, veh, track, params)
    w0 = ocp.guess_from_function(x_of_s, u_of_s)
    res0 = ocp.evaluate(w0)
    print(f"initial guess lap time (collocation quadrature): {res0['lap_time']:.2f} s")

    tag = f"{track.name}_ds{args.ds:g}" + ("_casadi" if args.vehicle == "casadi" else "")
    solver_config = load_solver_config(args.solver_config)
    print(f"solver settings: {solver_config['path']} (linear solver {solver_config['linearSolver']}, "
          f"L-BFGS max_iter {solver_config['lbfgs'].get('max_iter', 0)}, "
          f"exact-Hessian max_iter {solver_config['newton'].get('max_iter', 0)})")
    # the pkl name is fixed before the solve so the autosaves and the final save write the same file
    name = args.name or f"{track.name}_N{ocp.N}_{time.strftime('%Y%m%d_%H%M%S')}"
    if args.vehicle == "casadi" and "casadi" not in name:  # never overwrite an FMU run's pkl
        name += "_casadi"
    extra = {"vGuess": res0["y"][veh.iy["vxBody"]], "reference": "centreline", "settings": dict(vars(args))}
    recorder = None if args.no_history else IterationRecorder("rec", ocp, stride=args.stride)
    if recorder is not None and args.autosave_every:
        t_solve = time.time()

        def autosave(k):
            # snapshot of the last iterate; no multipliers / IPOPT convergence arrays until the solve returns
            ocp.wOpt, ocp.lamG, ocp.lamX = recorder.lastW, None, None
            ocp.stats = {"return_status": "Running", "iter_count": k}
            saveHistory(ocp, recorder, name=name, wall=time.time() - t_solve, extra=extra)

        recorder.autosave = (int(args.autosave_every), autosave)
    w = ocp.solve(w0, solver_config, checkpoint=os.path.join(args.out, f"{tag}_phase1.npy"), recorder=recorder)
    # Save the history first (Ctrl+C is ignored while saving), so an interrupted run -- during the
    # solve or during the post-processing below -- always leaves a post/<name>.pkl behind.
    pkl = None
    if not args.no_history:
        pkl = saveHistory(ocp, recorder, name=name, wall=ocp.wall_time, extra=extra)
    res = ocp.evaluate(w)
    try:
        defects, t_rk4 = ocp.verify_defects(w)
    except KeyboardInterrupt:
        print("\nRK4 check interrupted; the pkl was already saved without it")
        defects, t_rk4 = None, float("nan")
    if defects is not None and pkl:
        saveHistory(ocp, recorder, name=os.path.splitext(os.path.basename(pkl))[0], wall=ocp.wall_time,
                    extra=dict(extra, lapTimeRK4=t_rk4))  # same file, now with the RK4 defects
    viol = ocp.violationReal(np.array(ca.Function("g", [ocp.w], [ocp.g])(w)).ravel())
    worst = ocp.gStateIdx[np.argmax(viol)]
    n_it = max(ocp.stats.get("iter_count", 0), 1)
    print("\n" + "=" * 64)
    print(f"status            {ocp.stats.get('return_status')}")
    print(f"iterations        {ocp.stats.get('iter_count')}   wall {ocp.wall_time:.1f} s   {ocp.wall_time / n_it:.3f} s/iter")
    print(f"max violation     {viol.max():.2e}  (physical units, worst row: "
          f"{ocp.state_names[worst] if worst >= 0 else {-1: 'sdot', -2: 'slip limit'}[worst]})")
    print(f"periodic residual {viol[ocp.periodicRows].max():.2e}")
    overlap = np.minimum(res["pedals"][0], res["pedals"][1])
    print(f"drive/brake overlap  max {overlap.max():.3f}, at {int(np.sum(overlap > 0.01))} of {ocp.N} mesh points (> 0.01)")
    print(f"LAP TIME          {res['lap_time']:.3f} s   (initial guess {res0['lap_time']:.2f} s)")
    rho = {w: np.hypot(res["x"][veh.i[f"kappa{w}"]] / args.kappa_max, res["x"][veh.i[f"tanAlpha{w}"]] / np.tan(args.alpha_max))
           for w in ("FL", "FR", "RL", "RR")}
    print(f"combined slip / (kappa {args.kappa_max:g}, alpha {args.alpha_max:g} rad), max per wheel: " + ", ".join(f"{w} {r.max():.2f}" for w, r in rho.items())
          + f"  (limit {args.slip_limit}, {'soft' if args.slip_soft else 'hard'})")
    pen = [float(p) * 1e3 for p in ocp.penalty_fn(w)]
    print("penalties [ms]    " + ", ".join(f"{k} {p:.2f}" for k, p in zip(ocp.penalty_names, pen))
          + f"  (total {sum(pen):.2f}; not included in the lap time)")
    if defects is not None:
        print(f"RK4 check         lap time {t_rk4:.3f} s; intervals with scaled defect > 0.1: "
              f"{int(np.sum((ocp.defects / ocp.nom[:, None]).max(axis=0) > 0.1))} of {ocp.N}")
        print("  max defects: " + ", ".join(f"{k} {v:.2g}" for k, v in defects.items()))
    print("=" * 64)
    if pkl:
        print(f"history: {pkl}")

    np.savez(os.path.join(args.out, f"{tag}.npz"), state_names=np.array(veh.names + ["n"]),
             control_names=np.array(CONTROLS), output_names=np.array(veh.y_names),
             status=ocp.stats.get("return_status"), w=w, lap_time_rk4=t_rk4, guess_x=res0["x"], guess_t=res0["t"],
             wall_time=ocp.wall_time, iterations=ocp.stats.get("iter_count", 0), vehicle=args.vehicle, track=track.name, **res)
    from .plots import plot_results
    plot_results(track, veh, res, res0, os.path.join(args.out, tag))
    print(f"saved {os.path.join(args.out, tag)}.npz and plots")
