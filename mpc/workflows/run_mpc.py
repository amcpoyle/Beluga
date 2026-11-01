"""Closed-loop MPC simulation: the MPC (core/ocp.py, 12-state predictor) drives a plant over a stretch of track.

Edit RUN and MPC_SETTINGS below, then run

    python -B -m mpc.workflows.run_mpc

Every update (every 50 ms of simulated time):
    1. measure   the plant state, projected onto the predictor's 12 states
    2. solve     the MPC from it, warm started from the previous plan (a cold retry if that fails); a plan
                 is accepted when the solver succeeds with constraint violation <= 1e-4
    3. apply     the plan's first rate input to the plant for one interval

Plants (RUN["plant"]):
    "double-wishbone"  the full vehicle (core/plant/plant.py: AlyssaModel.mo via omc2casadi, RK4 1 ms).
                       Combined slip is recorded per update, not a stop (thesis Sec. 7.3.1).
    "matched"          the predictor itself (RK4 1 ms), so any failure is the MPC's own, not model mismatch.

Track, corridor and reference come from the lap-time OCP (core/case.py); the plant starts from the OCP's
full state at RUN["start"]. The run stops at RUN["end"], when the plant leaves the corridor or stops, or
at a rejected plan unless continue_on_failure.

Output in mpc/results/runs/: <name>.json (settings, summary, every update) and <name>.npz (states and
predictions), and <name>/reference.npz, a copy of the OCP solution the run tracked (re-solving the OCP overwrites
results/*.npz). A rejected plan is re-solved with an iteration recorder and saved as <name>/window_<k>.pkl
(plotting/PlotHelpers.py schema) for notebooks/RunOverview.ipynb.
"""

from dataclasses import replace
import faulthandler
import json
import os
from pathlib import Path
import shutil
import time

import casadi as ca
import numpy as np

from ..core.case import PREDICTOR, REFERENCE, load_case, ocp_plant_state
from ..core.helpers.history import recording_solver, write_window
from ..core.helpers.paths import ROOT, RUNS, in_repo
from ..core.ocp import MPC, Limits, Settings
from ..core.predictor.bicycle import load_predictor


OUTPUT = RUNS

# ----------------------------------------------------------------------------------- run settings
RUN = dict(
    name=None,                 # mpc/results/runs/<name>.json/.npz; None = <plant>_<start>-<end>_<timestamp>.
                               # A saved run is never overwritten.
    start=650.,                # [m] the plant starts from the lap-time OCP's state here
    end=None,                  # [m]; None = one lap from start
    plant="double-wishbone",   # or "matched" (the predictor as plant)
    predictor=PREDICTOR,       # 12-state predictor file
    reference=REFERENCE,       # lap-time OCP solution the MPC starts from and tracks (run_min_laptime's results/*.npz:
                               # <track>_ds<ds>_casadi.npz from omc2casadi_opt, <track>_ds<ds>.npz from fmu_opt),
                               # absolute or relative to the repository. Catalunya only (core/case.py)
    max_updates=3000,
    continue_on_failure=True,  # keep going after a rejected plan (applying the fallback below)
    # For hard slip rows (MPC_SETTINGS.slip_penalty None) only: when the NLP has no solution (warm and cold
    # attempts rejected), solve it once more with soft slip rows, this penalty and no progress reward, and apply
    # that. None, or if that also fails: the last accepted plan's input. Unused when the slip rows are soft.
    slip_fallback_penalty=None,
    ipopt_print=0,             # print the solver log live at this level (5 = iteration log); 0 = quiet
    ipopt_log=False,           # write every solve's log (level 5) to mpc/results/runs/<name>/ipopt.log
    hang_timeout=60.,          # [s] an update taking longer writes every thread's call stack to
                               # mpc/results/runs/<name>/hang_traceback.txt (again every hang_timeout); None = off
    checkpoint_every=100,      # save the run so far (<name>.json/.npz, status "running") every this many updates
)

MPC_SETTINGS = Settings(
    horizon=3., intervals=60, degree=3,  # 3 s horizon in 60 x 50 ms intervals, Radau degree 3
    speed_scale=1.,                      # reference speed multiplier
    track_lateral_reference=True,        # vy and r tracked to the OCP's values instead of 0 (thesis)
    solver="fatrop",                     # or "ipopt"; same NLP
    expand=True,                         # NLP as SX: same solution, faster iterations
    compiled=True,                       # NLP functions as gcc-compiled C (first build ~3 min, cached in core/build/)
    tube_penalty=1000.,                  # soft tube (exact L1 penalty): the hard tube's plan whenever that is
                                         # feasible, but a measured state past the edge still gets a plan back
    tube_extra=True,                     # also enforce the tube midway between collocation points
    # Physical limits: corridor = track width - car half-width 1.0 - margin 0.2 m,
    # steering 0.35 rad and 5 rad/s, pedals 10 /s, combined slip with
    # rho^2 = (kappa/kappa_max)^2 + (tan(alpha)/tan(alpha_max))^2, wider than the lap-time OCP's limits (the Limits
    # defaults, laptime_core/vehicle.py). The plant's track corridor is checked against these; its slip is only
    # recorded, on this scale. The MPC plans with margins for the plant not following the predictor exactly:
    # 5 cm inside the corridor and rho <= 0.95.
    limits=Limits(tube_buffer=.05, slip_limit=.95),
    # Slip rows as exact L1-penalised soft constraints (penalty per unit of rho^2 excess at each wheel and
    # collocation point): the hard rows' plan whenever one exists (the penalty exceeds the hard rows' multipliers,
    # at most ~1e3 in the failed updates), else the plan with the least excess. FATROP has no adaptive barrier and
    # fails on hard nonconvex inequality rows; its authors use this formulation for those (Vanroye et al. 2023,
    # Sec. V). Hard slip rows (None) made FATROP fail and hang near the slip limit (2026-10-29).
    slip_penalty=1e4,
    slip_recovery=.3,                    # [s] time a wheel already over the slip limit gets to recover
    fatrop_mu_init_cold=1e2,             # FATROP barrier start for cold attempts (warm attempts keep 1e-6); the FATROP
                                         # paper's value. With soft slip rows, the failed updates 52-54 and 520 solve
                                         # cold in ~1.2 s from 1 to 1e2; from 0.1, update 54 took 233 iterations
    lap_weight=6.,                       # thesis Q_L: reward per metre of progress; 0 = path following
)
# -------------------------------------------------------------------------------------------------


def setup(case=None):
    case = load_case() if case is None else case
    return case.track, case.ref, case.profiles, case.ref.project(case.initial)


def plant_step(model, road, dt):
    x, u = ca.MX.sym("x", model.nx), ca.MX.sym("u", 2)

    def f(z):
        return model.rhs(z, u, road.kappa(z[3]))
    k1 = f(x)
    k2 = f(x+dt/2*k1)
    k3 = f(x+dt/2*k2)
    k4 = f(x+dt*k3)
    return ca.Function("plant_rk4", [x, u], [x+dt/6*(k1+2*k2+2*k3+k4)])


def soft_fallback_settings(settings, penalty):
    """The fallback NLP's settings: soft slip rows with this penalty and no progress reward; None without a
    fallback (penalty None, or no slip rows)."""
    if penalty is None or settings.limits.slip_limit is None or settings.slip_penalty is not None:
        return None   # no fallback, no slip rows, or the slip rows are already soft
    return replace(settings, slip_penalty=float(penalty), lap_weight=0.)


def default_name(plant, start, end):
    """<plant>_<start>-<end>_<timestamp>, e.g. dw_650-900_20261029_153012 (end "lap" for one lap)."""
    tag = "dw" if plant == "double-wishbone" else plant
    return f"{tag}_{start:g}-{'lap' if end is None else f'{end:g}'}_{time.strftime('%Y%m%d_%H%M%S')}"


def run(name=None, *, start=650., end=None, settings=MPC_SETTINGS, max_updates=3000, continue_on_failure=False,
        predictor=PREDICTOR, plant_dt=.001, accept=1e-4, ipopt_print=0, ipopt_log=False, plant="double-wishbone",
        hang_timeout=60., checkpoint_every=100, slip_fallback_penalty=1e4, reference=REFERENCE):
    name = default_name(plant, start, end) if name is None else name
    out_json = OUTPUT/(name+".json")
    if out_json.exists():
        raise FileExistsError(f"preserve saved run: {out_json}")
    out_json.parent.mkdir(parents=True, exist_ok=True)
    (OUTPUT/name).mkdir(parents=True, exist_ok=True)
    # one line per update, written as it happens (readable while the run goes, also from a sweep's process)
    progress = open(OUTPUT/name/"progress.log", "a", encoding="utf-8", buffering=1)
    hang_file = open(OUTPUT/name/"hang_traceback.txt", "a", encoding="utf-8") if hang_timeout else None
    if plant not in ("matched", "double-wishbone"):
        raise ValueError(f"unknown plant {plant!r}")
    case = load_case(reference_path=reference)
    track, reference, road = case.track, case.ref, case.profiles
    shutil.copy2(reference.path, OUTPUT/name/"reference.npz")
    full = plant == "double-wishbone"
    initial = ocp_plant_state(reference, case.vehicle, start)
    model = load_predictor(predictor)
    if full:
        dw = case.plant
        dw.slip_stop = False
        dw.slip_peak = (settings.limits.kappa_peak, settings.limits.tan_alpha_peak)   # the recorded rho's scale
        state, plant_states, rho = initial.copy(), [initial.copy()], []
        x = model.from_plant(reference.project(initial), state, dw.names)  # measured rim speeds
    else:
        x = model.extend(reference.project(initial))[0]                  # free-rolling rim speeds
    log_path = OUTPUT/name/"ipopt.log" if ipopt_log else None
    if log_path is not None and log_path.exists():
        raise FileExistsError(f"preserve saved IPOPT log: {log_path}")
    mpc = MPC(model, road, settings, ipopt_print_level=ipopt_print, ipopt_log=log_path)
    fallback = soft_fallback_settings(settings, slip_fallback_penalty)
    mpc_soft = None if fallback is None else MPC(model, road, fallback, ipopt_print_level=ipopt_print)
    end = start+track.length if end is None else end
    lim = settings.limits
    step = plant_step(model, road, plant_dt)
    substeps = int(round(mpc.h/plant_dt))
    allowance = lim.car_half_width+lim.margin                  # plant check: without the MPC tube buffer
    t, states, windows, predictions = 0., [x.copy()], [], []
    reason, last, last_k = None, None, None   # last accepted plan and its update
    run_start = time.perf_counter()
    error = None

    def write_atomic(path, write):
        """write(file) to a temporary file, then rename it into place: a run ended mid-write (e.g. a process
        killed during a hang) never leaves a half-written file."""
        tmp = path.with_name(path.name+".tmp")
        with open(tmp, "wb") as fh:
            write(fh)
        for attempt in range(40):   # Windows refuses the rename while another process (scanner, indexer,
            try:                    # editor preview) has the target open: retry for up to ~2 s
                os.replace(tmp, path)
                return
            except PermissionError:
                if attempt == 39:
                    raise
                time.sleep(.05)

    def save_solve_inputs(k, kind, guess):
        """The inputs of the solve about to start, overwritten every solve: after a hang this file is exactly the
        problem that hung (measured state, initial guess X, Xc, U), to re-evaluate or re-solve on its own.
        Diagnostic only: a failed write is reported and the run continues."""
        X, Xc, U = guess
        try:
            write_atomic(OUTPUT/name/"last_solve.npz",
                         lambda fh: np.savez(fh, update=k, kind=kind, s=float(x[3]), x0=x, X=X, Xc=Xc, U=U,
                                             lap_weight=settings.lap_weight))
        except OSError as e:
            print(f"{name}: update {k}: could not write last_solve.npz ({e}); continuing", flush=True)

    def save(final):
        """The run so far as <name>.json/.npz; final=False is a checkpoint (status "running")."""
        status = ("completed" if x[3] >= end and reason is None else "stopped") if final else "running"
        walls = [w["wall"] for w in windows]
        summary = dict(status=status, reason=reason, start=start, end=end, reached_s=float(x[3]), elapsed=t,
                       updates=len(windows), rejected=sum(not w["accepted"] for w in windows),
                       cold_retries=sum(len(w["attempts"]) > 1 for w in windows),
                       soft_slip_fallbacks=sum(w.get("fallback") == "soft slip limit" for w in windows),
                       # accepted plans that planned over the slip limit (soft slip rows: no plan within it existed)
                       slip_slack_plans=sum(w.get("slip_slack", 0) > 1e-6 for w in windows if w["accepted"]),
                       slip_slack_max=max((w.get("slip_slack", 0) for w in windows), default=0.),
                       old_plan_fallbacks=sum(w.get("fallback", "").startswith(("plan of", "no accepted")) for w in windows),
                       mean_solve=float(np.mean(walls)) if walls else None, max_solve=float(max(walls)) if walls else None,
                       median_iterations=float(np.median([w["iterations"] for w in windows])) if windows else None,
                       reference_time=float(reference.time(x[3])-reference.time(start)),
                       plant=plant,
                       plant_rho_max=float(np.max(rho)) if full and rho else None,
                       plant_rho_over_1=float(np.mean(np.max(rho, axis=1) > 1)) if full and rho else None,
                       rollout_wall=time.perf_counter()-run_start)
        report = dict(name=name, settings=mpc.settings_dict(), slip_fallback_penalty=slip_fallback_penalty,
                      ipopt_log=None if log_path is None else str(log_path.relative_to(ROOT)), predictor=str(Path(predictor).resolve().relative_to(ROOT)),
                      plant=("double-wishbone TimePlant, RK4 %g s, slip recorded as KPI" % dw.max_step) if full
                      else "the predictor itself, RK4 %g s" % plant_dt,
                      reference=str(in_repo(reference.path)), summary=summary, windows=windows)
        X = np.array(states)
        arrays = dict(t=np.arange(len(X))*mpc.h, x=X, predictions=np.array(predictions), t_nodes=mpc.t_nodes,
                      state_names=np.array(mpc.state_names),
                      **(dict(plant_x=np.array(plant_states), plant_rho=np.array(rho),
                              plant_names=np.array(dw.names)) if full else {}))
        write_atomic(OUTPUT/(name+".npz"), lambda fh: np.savez_compressed(fh, **arrays))
        write_atomic(out_json, lambda fh: fh.write((json.dumps(report, indent=2)+"\n").encode("utf-8")))
        return report

    try:
        for k in range(max_updates):
            if x[3] >= end:
                break
            if hang_file is not None:   # armed for this update; cancelled below when it completes
                hang_file.write(f"\n===== update {k} started at s = {x[3]:.1f} m, {time.strftime('%H:%M:%S')} =====\n")
                hang_file.flush()
                faulthandler.dump_traceback_later(hang_timeout, repeat=True, file=hang_file)
            attempts = []
            for cold in ([True] if last is None else [False, True]):
                g0 = (mpc.guess_from_reference(x, reference) if cold
                      else mpc.shift(last["X"], last["Xc"], last["U"], x, steps=k-last_k))
                if ipopt_print:
                    print(f"\n===== update {k}  ({'cold' if cold else 'warm'} start)  s = {x[3]:.1f} m  t = {t:.2f} s =====",
                          flush=True)
                save_solve_inputs(k, "cold" if cold else "warm", g0)
                result = mpc.solve(x, g0, solver=mpc.cold_solver if cold else None)
                accepted = result["success"] and result["max_violation"] <= accept
                attempts.append(dict(cold=cold, status=result["status"], iterations=result["iterations"],
                                     wall=result["wall"], max_violation=result["max_violation"], accepted=accepted,
                                     log=result["log"]))
                if accepted:
                    break
                first_failed = first_failed if attempts[:-1] else (result, g0)
            row = dict(update=k, time=t, s=float(x[3]), accepted=accepted, status=result["status"],
                       iterations=result["iterations"], wall=sum(a["wall"] for a in attempts), objective=result["objective"],
                       tube_slack=result["tube_slack"], slip_slack=result["slip_slack"],
                       max_violation=result["max_violation"], violation_by_family=result["violation_by_family"],
                       attempts=attempts, rate=result["U"][0].tolist())
            windows.append(row)
            predictions.append(result["X"])
            if not accepted:
                # Re-solve the first failed attempt identically, recording every iterate.
                failed, g_failed = first_failed
                recorded_log = None if log_path is None else OUTPUT/name/f"window_{k:04d}_recorded.log"
                solver, recorder = recording_solver(mpc, recorded_log)
                if ipopt_print:
                    print(f"\n===== update {k}: re-solving the first failed attempt with an iteration recorder =====", flush=True)
                save_solve_inputs(k, "recorded re-solve (IPOPT)", g_failed)
                recorded = mpc.solve(x, g_failed, solver=solver)
                path = write_window(OUTPUT/name/f"window_{k:04d}.pkl", mpc, recorded, recorder.frames, track,
                                    dict(update=k, time=t, s=float(x[3]), x0=x.tolist(), attempts=attempts,
                                         violation_by_family=recorded["violation_by_family"], recorded_log=None if recorded_log is None else str(recorded_log.relative_to(ROOT)),
                                         note="first failed attempt re-solved with an iteration recorder"))
                row["history"] = str(path.relative_to(ROOT))
                print(f"{name}: update {k} at s={x[3]:.1f} NOT accepted ({result['status']}); wrote {path.name}", flush=True)
                if not continue_on_failure:
                    reason = f"controller rejected: {result['status']}"
                    break
                # Fallback 1: the soft-slip NLP (no progress reward), warm started like the hard attempt: the plan
                # for the car's actual state with the least slip excess.
                soft = None
                if mpc_soft is not None:
                    g_soft = (mpc_soft.guess_from_reference(x, reference) if last is None
                              else mpc_soft.shift(last["X"], last["Xc"], last["U"], x, steps=k-last_k))
                    save_solve_inputs(k, "soft-slip fallback", g_soft)
                    soft = mpc_soft.solve(x, g_soft, solver=mpc_soft.cold_solver if last is None else None)
                    soft_ok = soft["success"] and soft["max_violation"] <= accept
                    row["soft_fallback"] = dict(status=soft["status"], iterations=soft["iterations"], wall=soft["wall"],
                                                max_violation=soft["max_violation"], slip_slack=soft["slip_slack"],
                                                accepted=soft_ok)
                    row["wall"] += soft["wall"]
                    if not soft_ok:
                        soft = None
                if soft is not None:
                    planned = soft["U"][0]
                    last, last_k = soft, k            # the next update warm starts from this plan
                    predictions[-1] = soft["X"]
                    row["fallback"] = "soft slip limit"
                # Fallback 2: the last accepted plan's input for this interval (that plan was feasible; the failed
                # one need not be), or hold the actuators if no plan was accepted yet.
                elif last is None:
                    planned = np.zeros(2)
                    row["fallback"] = "no accepted plan yet: zero rates"
                else:
                    j = min(k-last_k, mpc.N-1)
                    planned = last["U"][j]
                    row["fallback"] = f"plan of update {last_k}, interval {j}"
                print(f"{name}: update {k} fallback: {row['fallback']}", flush=True)
            else:
                last, last_k = result, k
                planned = result["U"][0]
            rate = np.clip(planned, [-lim.steer_rate, -lim.pedal_rate], [lim.steer_rate, lim.pedal_rate])
            row["rate"] = rate.tolist()   # the rate actually applied
            if full:
                _, Z, _, why = dw.advance(state, rate, mpc.h)
                state = Z[:, -1].copy()
                row["plant_rho_max"] = float(max(max(dw.metrics(z)["rho"]) for z in Z.T[1:]))
                rho.append(dw.metrics(state)["rho"])
                plant_states.append(state.copy())
                if why:
                    reason = why
                else:
                    x = model.from_plant(reference.project(state), state, dw.names)
            else:
                for _ in range(substeps):
                    x = np.asarray(step(x, rate)).ravel()
                    x[6] = np.clip(x[6], -lim.steer_angle, lim.steer_angle)
                    x[7] = np.clip(x[7], -1, 1)
            t += mpc.h
            states.append(x.copy())
            if hang_file is not None:
                faulthandler.cancel_dump_traceback_later()
            outcome = "accepted" if accepted else f"REJECTED -> {row.get('fallback')}"
            progress.write(f"update {k:4d}  s {x[3]:8.1f}  t {t:6.2f}  {outcome}  "
                           f"status {row['status']}  iters {row['iterations']}  attempts {len(attempts)}  "
                           f"solve {row['wall']:.2f} s  plant rho {row.get('plant_rho_max', float('nan')):.3f}  "
                           f"{time.strftime('%H:%M:%S')}\n")
            if checkpoint_every and (k+1) % checkpoint_every == 0:
                save(final=False)
            left, right = float(road.left(x[3])), float(road.right(x[3]))
            if reason:
                pass
            elif not np.all(np.isfinite(x)):
                reason = "nonfinite plant state"
            elif x[4] > left-allowance+1e-3 or x[4] < -(right-allowance)-1e-3:
                reason = "plant left the corridor"
            elif x[0] < 1.:
                reason = "plant stopped"
            if reason:
                break
            if k % 20 == 0:
                print(f"{name}: update {k:4d}, s={x[3]:8.1f}, t={t:6.2f}, solve={row['wall']:.2f}s, "
                      f"iters={row['iterations']}, status={row['status']}", flush=True)
    except KeyboardInterrupt:
        reason = "interrupted (Ctrl+C)"
    except Exception as exc:          # save what the run has, then re-raise below
        reason, error = f"error: {exc!r}", exc
    finally:
        faulthandler.cancel_dump_traceback_later()
        progress.close()
        if hang_file is not None:
            hang_file.close()
    report = save(final=True)
    print(json.dumps(report["summary"], indent=2))
    if error is not None:
        raise error
    return report


def main():
    run(**RUN, settings=MPC_SETTINGS)


if __name__ == "__main__":
    main()
