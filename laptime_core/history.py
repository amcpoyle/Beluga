"""
Per-iteration recording of the IPOPT solve, written to post/<name>.pkl in the SAME schema as
optipySolverFast/OCP/history.py, so plotting/PlotHelpers.py and ResultsLog.ipynb work unchanged.

Schema (plain dict, load with pickle):
    meta         track, N, degree (degrees: per interval), nx, nu, stateNames, controlNames, status, iterCount, lapTime,
                 stride, partial, timestamp, config (bounds keyed by state/control name)
    refX/refY/refPsi, s, h, kappa, nMin, nMax     mesh geometry (ENU, n > 0 to the left)
    convergence  IPOPT's own per-iteration arrays: obj, inf_pr, inf_du, mu, alpha_pr, alpha_du, ...
    timing       CasADi t_proc_/t_wall_/n_call_ stats + per-iteration wall clock
    frames       per recorded iteration: iter, objective, maxViolation, violByState (physical
                 units), violSDot, X (N, nx), U (N, nu)
    final        X (optimizer variables, named by stateNames), U, sDot, lapTime, w, lamG, lamX, scaleVec, rowScale, Xidx, Uidx, tau, g,
                 lbg, ubg, lbw, ubw, gStateIdx, periodicRows, isScaled

Differences from optipySolverFast, all additive:
    final["offsetVec"]           the FMU heave state is scaled with an offset:
                                 real w = w * scaleVec + offsetVec
    frames[i]["violByStateScaled"]  per-state violation in the units IPOPT sees (scaled)
    frames[i]["violSlip"]        max violation of the combined-slip limit rows
    derived                      FMU outputs at the final mesh points (vx, vy, ax, ay, fz...),
                                 looked up by name by PlotHelpers.signal like states
    defects                      per-interval fine-RK4 defects (nx, N), physical units
"""
import os
import pickle
import signal
import time

import casadi as ca
import numpy as np

from .paths import REPO

POST_DIR = os.path.join(REPO, "post")


class IterationRecorder(ca.Callback):
    """ca.Callback storing the iterate every `stride` IPOPT iterations. Pass as
    opts["iteration_callback"]; keep a reference alive for the whole solve."""

    def __init__(self, name, ocp, stride=1, opts={}):
        ca.Callback.__init__(self)
        self.ocp = ocp
        self.stride = max(int(stride), 1)
        self.nw = ocp.w.numel()
        self.ng = ocp.g.numel()
        self.frames = []
        self.lastW = None
        self._count = 0
        self.tEnter, self.tExit = [], []
        self.tStart = None
        # Ctrl+C sets stopRequested (see LapTimeOCP.solve); the next callback returns 1 so IPOPT
        # stops cleanly with User_Requested_Stop instead of an exception through native code
        self.stopRequested = False
        # autosave = (every, fn): fn(iter) is called every `every` iterations (writes the pkl), so
        # even a hard kill of the process leaves the run behind
        self.autosave = None
        self._xRows = ocp.Xidx[:, 0][:, None] + np.arange(ocp.nx)
        self._uRows = ocp.Uidx[:, None] + np.arange(ocp.nu)
        self.construct(name, opts)

    def get_n_in(self):
        return ca.nlpsol_n_out()

    def get_n_out(self):
        return 1

    def get_name_in(self, i):
        return ca.nlpsol_out(i)

    def get_name_out(self, i):
        return "ret"

    def get_sparsity_in(self, i):
        n = ca.nlpsol_out(i)
        if n == "f":
            return ca.Sparsity.scalar()
        if n in ("x", "lam_x"):
            return ca.Sparsity.dense(self.nw)
        if n in ("g", "lam_g"):
            return ca.Sparsity.dense(self.ng)
        return ca.Sparsity(0, 0)

    def markStart(self):
        self.tStart = time.perf_counter()

    def timings(self):
        if not self.tEnter:
            return {}
        tE, tX = np.asarray(self.tEnter), np.asarray(self.tExit)
        t0 = self.tStart if self.tStart is not None else tE[0]
        prev = np.concatenate([[t0], tX[:-1]])
        return {"secPerIter": (tE - prev).astype(float), "secRecorder": (tX - tE).astype(float)}

    def eval(self, arg):
        tIn = time.perf_counter()
        k = self._count
        self._count += 1
        names = ca.nlpsol_out()
        w = np.array(arg[names.index("x")]).ravel()
        self.lastW = w
        if k % self.stride:
            self.tEnter.append(tIn)
            self.tExit.append(time.perf_counter())
            return self._ret(k)

        ocp = self.ocp
        gv = np.array(arg[names.index("g")]).ravel()
        absViol = ocp.violationReal(gv)
        scaledViol = absViol / ocp.rowScale
        idx = ocp.gStateIdx
        byState = np.zeros(ocp.nx)
        byStateScaled = np.zeros(ocp.nx)
        for i in range(ocp.nx):
            sel = idx == i
            byState[i] = absViol[sel].max()
            byStateScaled[i] = scaledViol[sel].max()
        ws = w * ocp.scaleVec + ocp.offsetVec
        self.frames.append({
            "iter": k,
            "objective": float(arg[names.index("f")]),
            "maxViolation": float(absViol.max()),
            "violByState": byState.astype(np.float32),
            "violByStateScaled": byStateScaled.astype(np.float32),
            "violSDot": float(absViol[idx == -1].max()),
            "violSlip": float(absViol[idx == -2].max()),
            "X": ws[self._xRows].astype(np.float32),
            "U": ws[self._uRows].astype(np.float32),
        })
        self.tEnter.append(tIn)
        self.tExit.append(time.perf_counter())
        return self._ret(k)

    def _ret(self, k):
        if self.autosave is not None and k > 0 and k % self.autosave[0] == 0 and not self.stopRequested:
            try:
                self.autosave[1](k)
            except Exception as err:  # never let a failed autosave kill the solve
                print(f"  autosave at iteration {k} failed: {err!r}")
        return [1 if self.stopRequested else 0]


EARLY_STOP = {"Running", "User_Requested_Stop", "Interrupted_By_User", "Maximum_Iterations_Exceeded",
              "Maximum_CpuTime_Exceeded", "NonIpopt_Exception_Thrown"}


def timingBlock(ocp, recorder, wall=None):
    st = ocp.stats or {}
    out = {"wall": wall}
    for k, v in st.items():
        if k.startswith(("t_proc_", "t_wall_", "n_call_")):
            out[k] = v
    if recorder is not None:
        out.update(recorder.timings())
    fn = sum(v for k, v in out.items() if k.startswith("t_proc_nlp_") and isinstance(v, (int, float)))
    tot = out.get("t_proc_total")
    out["secInFunctions"] = fn
    if isinstance(tot, (int, float)) and tot > 0:
        out["secInSolver"] = tot - fn
        out["fracInFunctions"] = fn / tot
    return out


def saveHistory(ocp, recorder, name=None, extra=None, wall=None):
    """Write the run to post/<name>.pkl and print a timing summary. Returns the path.
    Ctrl+C is ignored while saving, so a second interrupt cannot leave a half-written file."""
    old = signal.signal(signal.SIGINT, signal.SIG_IGN)
    try:
        return _saveHistory(ocp, recorder, name, extra, wall)
    finally:
        signal.signal(signal.SIGINT, old)


def stationarity(ocp, w, lamG, lamX):
    """Gradient of the Lagrangian per variable, grad J + J_g^T lamG + lamX (IPOPT's dual infeasibility
    is its max); the two CasADi functions are built once per OCP."""
    if not hasattr(ocp, "_gradL_fns"):
        lam = ca.MX.sym("lam", ocp.g.numel())
        ocp._gradL_fns = (ca.Function("gradJ", [ocp.w], [ca.gradient(ocp.J, ocp.w)]),
                          ca.Function("JtLam", [ocp.w, lam], [ca.jtimes(ocp.g, ocp.w, lam, True)]))
    gJ, JtL = ocp._gradL_fns
    w = np.asarray(w, float).ravel()
    return (np.array(gJ(w)).ravel() + np.array(JtL(w, np.asarray(lamG, float).ravel())).ravel()
            + np.asarray(lamX, float).ravel())


def _saveHistory(ocp, recorder, name, extra, wall):
    os.makedirs(POST_DIR, exist_ok=True)
    status = (ocp.stats or {}).get("return_status")
    partial = bool(getattr(ocp, "interrupted", False)) or status in EARLY_STOP
    track = ocp.track.name
    if name is None:
        name = "%s_N%d_%s%s" % (track, ocp.N, time.strftime("%Y%m%d_%H%M%S"), "_partial" if partial else "")
    path = os.path.join(POST_DIR, name.removesuffix(".pkl") + ".pkl")

    res = ocp.evaluate(ocp.wOpt)
    s = ocp.s_mesh
    xy = ocp.track.xy(s)
    g = np.array(ca.Function("g", [ocp.w], [ocp.g])(ocp.wOpt)).ravel()
    y = res["y"]
    yn = ocp.veh.y_names
    derived = {"vx": y[yn.index("vxBody")], "vy": y[yn.index("vyBody")],
               "ax": y[yn.index("axBody")], "ay": y[yn.index("ayBody")],
               "speed": np.hypot(res["x"][ocp.veh.i["VX"]], res["x"][ocp.veh.i["VY"]]),
               "sDot": res["sdot"], "t": res["t"]}
    for j, nm in enumerate(yn):
        derived[nm] = y[j]
    for nm in ("VX", "VY") + tuple(f"w{w}" for w in ("FL", "FR", "RL", "RR")):  # FMU states
        derived[nm] = res["x"][ocp.veh.i[nm]]

    data = {
        "meta": {
            "track": track, "N": ocp.N, "degree": ocp.d, "nx": ocp.nx, "nu": ocp.nu,
            "degrees": np.full(ocp.N, ocp.d, np.int64),  # collocation points per interval (uniform)
            "stateNames": list(ocp.state_names), "controlNames": list(ocp.control_names),
            "trackLength": float(ocp.track.length), "status": status,
            "iterCount": (ocp.stats or {}).get("iter_count"), "lapTime": float(res["lap_time"]),
            "stride": recorder.stride if recorder else 1, "partial": partial,
            # index into "convergence" where the exact-Hessian phase starts (None: L-BFGS only)
            "phase2Start": (ocp.stats or {}).get("phase2_start"),
            "timestamp": time.strftime("%Y-%m-%d %H:%M:%S"),
            "config": dict(ocp.config, solver=getattr(ocp, "solver_config", {}), fmu_params=dict(ocp.veh.params)),
            "model": "AlyssaModel.Experiments.OptimalControlFMU (fmu/AlyssaVehicle.fmu)",
        },
        "refX": xy[:, 0], "refY": xy[:, 1], "refPsi": ocp.track.theta(s),
        "baseTrack": track,
        "s": s, "h": np.full(ocp.N, ocp.ds), "kappa": ocp.track.kappa(s),
        "nMin": ocp.nMin, "nMax": ocp.nMax,
        "convergence": {k: np.asarray(v, dtype=float)
                        for k, v in ((ocp.stats or {}).get("iterations") or {}).items()},
        "timing": timingBlock(ocp, recorder, wall),
        "frames": recorder.frames if recorder else [],
        "derived": derived,
        "final": {
            "X": ocp.unpack_z(ocp.wOpt)[0].T, "U": ocp.unpack_z(ocp.wOpt)[2].T, "sDot": res["sdot"], "lapTime": float(res["lap_time"]),
            "w": ocp.wOpt, "lamG": ocp.lamG, "lamX": ocp.lamX,
            "scaleVec": ocp.scaleVec, "offsetVec": ocp.offsetVec, "rowScale": ocp.rowScale,
            "Xidx": ocp.Xidx.astype(np.int64), "Uidx": ocp.Uidx.astype(np.int64),
            "tau": np.asarray(ocp.tau, float), "g": g, "lbg": ocp.lbg, "ubg": ocp.ubg,
            "lbw": ocp.lbw, "ubw": ocp.ubw, "gStateIdx": ocp.gStateIdx.astype(np.int64),
            "periodicRows": ocp.periodicRows.astype(np.int64), "isScaled": True,
            "gInterval": ocp.gInterval.astype(np.int64),
        },
    }
    if ocp.lamG is not None:
        # gradient of the Lagrangian per variable (its max is IPOPT's dual infeasibility), for the
        # convergence trouble maps in plotting/PlotHelpers.py; computed once per solution
        if getattr(ocp, "_gradL_for", None) is not ocp.wOpt:
            ocp._gradL, ocp._gradL_for = stationarity(ocp, ocp.wOpt, ocp.lamG, ocp.lamX), ocp.wOpt
        data["final"]["gradL"] = ocp._gradL
    if getattr(ocp, "defects", None) is not None:
        data["defects"] = ocp.defects
    if extra:
        data.update(extra)
    tmp = path + ".tmp"
    with open(tmp, "wb") as fh:
        pickle.dump(data, fh, protocol=pickle.HIGHEST_PROTOCOL)
    os.replace(tmp, path)  # atomic: the notebook never sees a half-written pkl

    t = data["timing"]
    spi = t.get("secPerIter")
    if spi is not None and len(spi):
        print("timing  %.3f s/iter median (%.3f mean)   recorder overhead %.4f s/iter"
              % (np.median(spi), np.mean(spi), np.mean(t.get("secRecorder", [0]))))
    if "fracInFunctions" in t:
        print("        %.1f%% of solver CPU in NLP function evaluations (%.1f s of %.1f s); %.1f s in IPOPT itself"
              % (100 * t["fracInFunctions"], t["secInFunctions"], t["t_proc_total"], t["secInSolver"]))
    print("saved %s  (%d frames, %.1f MB)" % (path, len(data["frames"]), os.path.getsize(path) / 1e6))
    return path


def loadHistory(path):
    if not os.path.isabs(path) and not os.path.exists(path):
        path = os.path.join(POST_DIR, path)
    if not path.endswith(".pkl"):
        path += ".pkl"
    with open(path, "rb") as fh:
        return pickle.load(fh)
