"""Write an MPC window in the plotting/PlotHelpers.py schema (as laptime_core/history.py does).

So `plotting.PlotHelpers` works on a single failed MPC solve: profiles with bounds
(vs predicted progress s), IPOPT convergence panels, top-N infeasibility stackplot,
track bounds and violation along the horizon. Differences from a lap-time run:

    meta["lapTime"]   holds the window's OBJECTIVE value (the plots label it lap time)
    data["s"]         is the PREDICTED progress at the horizon's mesh nodes
    final["U"]        has one row per node: interval k's rate, the last one repeated
    data["window"]    MPC context: time, measured state, attempts, family violations
"""

import pickle
import time
from pathlib import Path

import casadi as ca
import numpy as np

from ..predictor.bicycle import CONTROLS


class FrameRecorder(ca.Callback):
    """IPOPT iteration callback storing every iterate of one solve."""

    def __init__(self, name, mpc):
        ca.Callback.__init__(self)
        self.mpc, self.frames = mpc, []
        self.nw, self.ng, self.np_ = mpc.w.numel(), mpc.g.numel(), mpc.p.numel()
        self.construct(name, {})

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
        size = dict(x=self.nw, f=1, g=self.ng, lam_x=self.nw, lam_g=self.ng, lam_p=self.np_)[n]
        return ca.Sparsity.dense(size, 1)

    def eval(self, arg):
        w, f, g = (np.asarray(a).ravel() for a in arg[:3])
        self.frames.append(frame(self.mpc, len(self.frames), w, float(f[0]), g))
        return [0]


def row_scale(mpc):
    """Physical units per constraint row: scaled dynamics/initial rows times their state nominal."""
    scale = np.ones(len(mpc.lbg))
    scaled = np.isin(mpc.family, ("initial", "collocation", "continuity"))
    scale[scaled] = mpc.nominal[mpc.state_index[scaled]]
    return scale


def violation_by_state(mpc, g):
    viol = np.maximum(0, np.maximum(mpc.lbg-g, g-mpc.ubg))
    physical = viol*row_scale(mpc)
    by, by_scaled = np.zeros(mpc.nx), np.zeros(mpc.nx)
    for i in range(mpc.nx):
        sel = mpc.state_index == i
        if sel.any():
            by[i], by_scaled[i] = physical[sel].max(), viol[sel].max()
    return viol, by, by_scaled


def frame(mpc, index, w, objective, g):
    X, _, U = mpc.unpack(w)
    viol, by, by_scaled = violation_by_state(mpc, g)
    return dict(iter=index, objective=objective, maxViolation=float(viol.max()),
                violByState=by, violByStateScaled=by_scaled, X=X, U=np.r_[U, U[-1:]])


def recording_solver(mpc, log_path=None):
    """Same NLP, solved by IPOPT with an iteration recorder (also when the run uses FATROP, so its
    iterates are IPOPT's on the same NLP and guess). It must not share the run's IPOPT log file:
    a second solver opening that file truncates it under the main solver (NUL-filled holes).
    log_path=None disables file output for the re-solve."""
    recorder = FrameRecorder("simple_mpc_frames", mpc)
    options = {k: v for k, v in mpc.ipopt_options.items() if k not in ("ipopt.output_file", "ipopt.file_print_level")}
    if log_path is not None:
        options.update({"ipopt.output_file": str(log_path), "ipopt.file_print_level": 5})
    solver = ca.nlpsol("simple_mpc_recorded", "ipopt", mpc.nlp, {**options, "iteration_callback": recorder})
    return solver, recorder


def bounds_config(mpc):
    lim = mpc.settings.limits
    states = {name: {} for name in mpc.state_names}
    states["vx"] = {"min": lim.vx_min}
    states["delta"] = {"min": -lim.steer_angle, "max": lim.steer_angle}
    states["tr"] = {"min": -1., "max": 1.}
    controls = {"delta_rate": {"min": -lim.steer_rate, "max": lim.steer_rate},
                "tr_rate": {"min": -lim.pedal_rate, "max": lim.pedal_rate}}
    return dict(states=states, controls=controls, mpc=mpc.settings_dict())


def write_window(path, mpc, result, frames, track, window):
    X, Xc, U = result["X"], result["Xc"], result["U"]
    road, lim = mpc.road, mpc.settings.limits
    s = X[:, 3]
    allowance = lim.car_half_width+lim.margin+lim.tube_buffer
    xy = np.asarray(track.xy(s))
    g = result["g"]
    nodes = np.arange(mpc.N+1)
    data = {
        "meta": {"track": "Catalunya (MPC window)", "N": mpc.N+1, "degree": mpc.d, "nx": mpc.nx, "nu": 2,
                 "degrees": np.full(mpc.N, mpc.d, np.int64), "stateNames": list(mpc.state_names), "controlNames": list(CONTROLS),
                 "trackLength": float(track.length), "status": result["status"], "iterCount": result["iterations"],
                 "lapTime": result["objective"], "stride": 1, "partial": False, "phase2Start": None,
                 "timestamp": time.strftime("%Y-%m-%d %H:%M:%S"), "config": bounds_config(mpc),
                 "model": "bicycle.WheelBicycle (12-state predictor: thesis bicycle plus wheel speeds)"},
        "refX": xy[:, 0], "refY": xy[:, 1], "refPsi": np.asarray(track.theta(s)), "baseTrack": "Catalunya",
        "s": s, "h": np.full(mpc.N, mpc.h), "kappa": np.asarray(road.kappa(s)).ravel(),
        "nMin": -(np.asarray(road.right(s)).ravel()-allowance), "nMax": np.asarray(road.left(s)).ravel()-allowance,
        "convergence": result["convergence"],
        "timing": {"wall": result["wall"]},
        "frames": frames,
        "derived": {"t": mpc.t_nodes, "vref": mpc.settings.speed_scale*np.asarray(road.speed(s)).ravel(),
                    "nref": np.asarray(road.offset(s)).ravel(), "theta_ref": np.asarray(road.relative_heading(s)).ravel(),
                    "vy_ref": np.asarray(road.lateral_velocity(s)).ravel(), "r_ref": np.asarray(road.yaw_rate(s)).ravel()},
        "final": {"X": X, "U": np.r_[U, U[-1:]], "w": result["w"], "lamG": result["lam_g"], "lamX": result["lam_x"],
                  "scaleVec": mpc.scale_vec,
                  "tubeSlack": mpc.slack(result["w"]),
                  "offsetVec": np.zeros(result["w"].size), "rowScale": row_scale(mpc),
                  "Xidx": mpc.node_index[:, None].astype(np.int64), "Uidx": np.zeros((mpc.N, 1), np.int64),
                  "tau": mpc.tau, "g": g, "lbg": mpc.lbg, "ubg": mpc.ubg, "lbw": mpc.lbw, "ubw": mpc.ubw,
                  "gStateIdx": mpc.state_index.astype(np.int64), "gInterval": mpc.interval.astype(np.int64),
                  "periodicRows": np.zeros(0, np.int64), "isScaled": True, "Xc": Xc,
                  "family": mpc.family},
        "window": window,
    }
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    with open(path, "wb") as fh:
        pickle.dump(data, fh, protocol=pickle.HIGHEST_PROTOCOL)
    return path


def load_window(path):
    with open(path, "rb") as fh:
        return pickle.load(fh)
