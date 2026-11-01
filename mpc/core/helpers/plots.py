"""Run-level and window-level plots for mpc/notebooks/RunOverview.ipynb.

Failed windows are additionally plotted with plotting/PlotHelpers.py, whose schema
history.py writes.
"""

import json
from pathlib import Path

import matplotlib.pyplot as plt
import numpy as np

from .paths import ROOT, RUNS, from_record
from .history import load_window
from ..predictor.bicycle import BODY_STATES as STATES  # the 8 body states; plots skip the wheel speeds

RESULTS = RUNS


def find_run(name=None):
    """A saved MPC run's name in mpc/results/runs/, from its name, file name or path. None = the newest run_mpc run
    (a parallel lap's top-level record has no per-update "windows")."""
    if name is None:
        records = [p for p in RESULTS.glob("*.json") if "windows" in json.loads(p.read_text(encoding="utf-8"))]
        if not records:
            raise FileNotFoundError(f"no MPC runs in {RESULTS}: run python -B -m mpc.workflows.run_mpc first")
        return max(records, key=lambda p: p.stat().st_mtime).stem
    path = ROOT/name if (ROOT/name).is_relative_to(RESULTS) else RESULTS/name
    if path.suffix in (".json", ".npz"):
        path = path.with_suffix("")
    if not path.with_name(path.name+".json").exists():
        raise FileNotFoundError(f"MPC run {name!r} not found in {RESULTS}")
    return path.relative_to(RESULTS).as_posix()


class Run:
    """A saved closed-loop run: report, plant trajectory, predictions and road profiles. name: see find_run."""

    def __init__(self, name=None):
        name = find_run(name)
        self.name = name
        self.report = json.loads((RESULTS/(name+".json")).read_text(encoding="utf-8"))
        with np.load(RESULTS/(name+".npz"), allow_pickle=False) as d:
            self.t, self.x, self.predictions, self.t_nodes = d["t"], d["x"], d["predictions"], d["t_nodes"]
            self.plant_rho = d["plant_rho"] if "plant_rho" in d else None
        self.windows = self.report["windows"]
        self.summary = self.report["summary"]
        from ...workflows.run_mpc import setup
        from ..case import load_case
        copy = RESULTS/name/"reference.npz"     # runs made before run_mpc saved this have only the recorded path
        self.reference_saved = copy.exists()
        self.reference_file = copy if self.reference_saved else from_record(self.report["reference"])
        self.track, self.reference, self.road, _ = setup(load_case(reference_path=self.reference_file))
        lim = self.report["settings"]["limits"]
        self.allowance = lim["car_half_width"]+lim["margin"]+lim.get("tube_buffer", 0.)
        self.speed_scale = self.report["settings"]["speed_scale"]

    def failed(self):
        return [w for w in self.windows if not w["accepted"]]

    def update(self, number):
        return next(w for w in self.windows if w["update"] == number)

    def ipopt_log(self, row, attempt=None):
        """IPOPT's own log for one update (all attempts, or one attempt index), if the run wrote one."""
        if not self.report.get("ipopt_log"):
            return "this run was made without ipopt_log=True (run_mpc RUN)"
        text = (ROOT/self.report["ipopt_log"]).read_bytes()
        attempts = row["attempts"] if attempt is None else [row["attempts"][attempt]]
        parts = []
        for a in attempts:
            lo, hi = a["log"]
            head = f"----- {'cold' if a['cold'] else 'warm'} attempt: {a['status']}, {a['iterations']} iterations -----\n"
            parts.append(head+text[lo:hi].decode("utf-8", errors="replace"))
        return "\n".join(parts)

    def prediction_error(self):
        """Measured minus predicted state one interval after each update (same applied rate):
        pure predictor/plant mismatch. Rows: updates whose next state was measured."""
        k = min(len(self.predictions), len(self.x)-1)
        e = self.x[1:k+1]-self.predictions[:k, 1]
        e[:, 5] = np.arctan2(np.sin(e[:, 5]), np.cos(e[:, 5]))
        return e

    def window(self, row):
        return load_window(ROOT/row["history"])

    def corridor(self, s):
        return (-(np.asarray(self.road.right(s)).ravel()-self.allowance),
                np.asarray(self.road.left(s)).ravel()-self.allowance)

    def summary_table(self):
        s = self.summary
        rows = [("status", f"{s['status']} ({s['reason']})" if s["reason"] else s["status"]),
                ("progress", f"{s['start']:.0f} -> {s['reached_s']:.1f} m of {s['end']:.0f}"),
                ("simulated time", f"{s['elapsed']:.2f} s (OCP over the same distance {s['reference_time']:.2f} s)"),
                ("updates", f"{s['updates']}  rejected {s['rejected']}  cold retries {s['cold_retries']}"),
                ("solve time", f"mean {s['mean_solve']:.3f} s, max {s['max_solve']:.2f} s, median iterations {s['median_iterations']:.0f}"),
                ("reference speed", f"{self.speed_scale:g} x OCP speed"),
                ("plant", self.report.get("plant", "?"))]
        if s.get("plant_rho_max") is not None:
            rows.append(("plant combined slip", f"max {s['plant_rho_max']:.3f}, updates ending above 1: "
                                                f"{100*s['plant_rho_over_1']:.1f}%"))
        e = self.prediction_error()
        rms = np.sqrt(np.mean(e**2, axis=0))
        rows.append(("50 ms prediction RMS", "  ".join(f"{n} {v:.3g}" for n, v in zip(STATES, rms) if n != "s")))
        width = max(len(k) for k, _ in rows)
        return "\n".join(f"{k:<{width}}  {v}" for k, v in rows)


def plot_iteration_map(run, ax=None):
    """Track with one node per MPC update (every 50 ms) at the car's position, coloured by the solver
    iterations the update took (all attempts); rejected updates ringed in red."""
    from matplotlib.colors import LogNorm
    track, x, w = run.track, run.x, run.windows
    if ax is None:
        _, ax = plt.subplots(figsize=(10, 10))
    s = np.linspace(x[0, 3], x[-1, 3], int(max(200, x[-1, 3]-x[0, 3])))
    for off in (np.asarray(track.w_left(s)), -np.asarray(track.w_right(s))):
        xy = np.asarray(track.frenet_to_xy(s, off))
        ax.plot(xy[:, 0], xy[:, 1], "k-", lw=.6)
    k = np.array([r["update"] for r in w])
    its = np.array([max(sum(a["iterations"] for a in r["attempts"]), 1) for r in w])
    xy = np.asarray(track.frenet_to_xy(x[k, 3], x[k, 4]))
    sc = ax.scatter(xy[:, 0], xy[:, 1], c=its, s=10, cmap="viridis", norm=LogNorm(1, max(its.max(), 2)), zorder=3)
    bad = np.array([not r["accepted"] for r in w])
    if bad.any():
        ax.scatter(xy[bad, 0], xy[bad, 1], s=90, facecolors="none", edgecolors="tab:red", lw=1.5, zorder=4,
                   label="rejected")
        ax.legend(fontsize=8)
    plt.colorbar(sc, ax=ax, shrink=.7, label="solver iterations (all attempts, log scale)")
    ax.set_aspect("equal"); ax.grid(alpha=.2)
    ax.set_title(f"{run.name}: iterations per MPC update (median {np.median(its):.0f}, max {its.max()})")
    return ax


def plot_track(run, window=None, ax=None, pad=40.):
    """Driven path and reference line on the track; failed windows in red. window: zoom on one row."""
    track, x = run.track, run.x
    if ax is None:
        _, ax = plt.subplots(figsize=(9, 9))
    lo, hi = x[0, 3], x[-1, 3]
    if window is not None:
        lo, hi = window["s"]-pad, window["s"]+pad*4
    s = np.linspace(lo, hi, int(max(200, (hi-lo)/1.)))
    nmin, nmax = run.corridor(s)
    for off, style in ((np.asarray(track.w_left(s)), "k-"), (-np.asarray(track.w_right(s)), "k-"),
                       (nmax, "k:"), (nmin, "k:")):
        xy = np.asarray(track.frenet_to_xy(s, off))
        ax.plot(xy[:, 0], xy[:, 1], style, lw=.8)
    ref = np.asarray(track.frenet_to_xy(s, np.asarray(run.road.offset(s)).ravel()))
    ax.plot(ref[:, 0], ref[:, 1], color="tab:green", lw=1.2, label="reference (OCP) line")
    m = (x[:, 3] >= lo) & (x[:, 3] <= hi)
    xy = np.asarray(track.frenet_to_xy(x[m, 3], x[m, 4]))
    ax.plot(xy[:, 0], xy[:, 1], color="tab:blue", lw=1.6, label="MPC (plant)")
    for w in run.failed():
        if lo <= w["s"] <= hi:
            k = int(np.argmin(abs(x[:, 3]-w["s"])))
            p = np.asarray(track.frenet_to_xy(x[k, 3], x[k, 4])).ravel()
            ax.plot(*p, "o", color="tab:red", ms=7)
    if window is not None:
        P = run.predictions[window["update"]]
        xy = np.asarray(track.frenet_to_xy(P[:, 3], P[:, 4]))
        ax.plot(xy[:, 0], xy[:, 1], "--", color="tab:red", lw=1.4, label="returned prediction")
    ax.plot([], [], "o", color="tab:red", label="rejected window")
    ax.set_aspect("equal"); ax.grid(alpha=.2); ax.legend(fontsize=8)
    ax.set_title(f"{run.name}: path" + ("" if window is None else f" around s = {window['s']:.0f} m"))
    return ax


def plot_signals(run):
    """Plant states against progress with reference, corridor and limits; rejected windows marked."""
    x, s = run.x, run.x[:, 3]
    lim = run.report["settings"]["limits"]
    fig, axes = plt.subplots(4, 2, figsize=(14, 11), sharex=True)
    ax = axes.ravel()
    ax[0].plot(s, x[:, 0], label="vx"); ax[0].plot(s, run.speed_scale*np.asarray(run.road.speed(s)).ravel(), "--", label="reference")
    ax[0].set_ylabel("vx [m/s]")
    nmin, nmax = run.corridor(s)
    ax[1].plot(s, x[:, 4], label="n"); ax[1].plot(s, np.asarray(run.road.offset(s)).ravel(), "--", label="reference")
    ax[1].fill_between(s, nmin, nmax, color="k", alpha=.06, label="corridor"); ax[1].set_ylabel("n [m]")
    ax[2].plot(s, x[:, 1]); ax[2].set_ylabel("vy [m/s]")
    ax[3].plot(s, x[:, 2]); ax[3].set_ylabel("r [rad/s]")
    ax[4].plot(s, x[:, 5]); ax[4].plot(s, np.asarray(run.road.relative_heading(s)).ravel(), "--"); ax[4].set_ylabel("theta [rad]")
    ax[5].plot(s, np.minimum(nmax-x[:, 4], x[:, 4]-nmin)); ax[5].axhline(0, color="k", lw=.8); ax[5].set_ylabel("corridor clearance [m]")
    ax[6].plot(s, x[:, 6]); [ax[6].axhline(b, color="k", lw=.8) for b in (-lim["steer_angle"], lim["steer_angle"])]
    ax[6].set_ylabel("delta [rad]")
    ax[7].plot(s, x[:, 7]); [ax[7].axhline(b, color="k", lw=.8) for b in (-1, 1)]; ax[7].set_ylabel("tr [-]")
    for a in ax:
        for w in run.failed():
            a.axvline(w["s"], color="tab:red", lw=.8, alpha=.6)
        a.grid(alpha=.25)
    ax[0].legend(fontsize=8); ax[1].legend(fontsize=8)
    for a in ax[-2:]:
        a.set_xlabel("s [m]")
    fig.suptitle(f"{run.name}: plant states (red: rejected windows)")
    fig.tight_layout()
    return fig


def plot_solver(run):
    """Per-update IPOPT status, iterations, solve time and constraint violation by family."""
    w = run.windows
    s = np.array([r["s"] for r in w])
    ok = np.array([r["accepted"] for r in w])
    fig, ax = plt.subplots(3, 1, figsize=(14, 8), sharex=True)
    ax[0].scatter(s[ok], [r["iterations"] for r in np.array(w)[ok]], s=8, label="accepted")
    ax[0].scatter(s[~ok], [r["iterations"] for r in np.array(w)[~ok]], s=25, color="tab:red", label="rejected")
    ax[0].set_ylabel("IPOPT iterations"); ax[0].legend(fontsize=8)
    ax[1].plot(s, [r["wall"] for r in w]); ax[1].set_ylabel("solve wall [s]")
    families = sorted({f for r in w for f in r["violation_by_family"]})
    for f in families:
        ax[2].semilogy(s, [max(r["violation_by_family"].get(f, 0), 1e-12) for r in w], lw=1, label=f)
    ax[2].axhline(1e-4, color="k", ls="--", lw=.8, label="acceptance")
    ax[2].set_ylabel("returned max violation"); ax[2].set_xlabel("s [m]"); ax[2].legend(fontsize=7, ncol=4)
    for a in ax:
        a.grid(alpha=.25)
    fig.suptitle(f"{run.name}: solver per update")
    fig.tight_layout()
    return fig


def plot_window_horizon(data):
    """One window: returned horizon against reference and corridor, and violation by family."""
    X, t = data["final"]["X"], data["derived"]["t"]
    d = data["derived"]
    fig, ax = plt.subplots(2, 3, figsize=(15, 6.5))
    ax[0, 0].plot(t, X[:, 0], label="vx"); ax[0, 0].plot(t, d["vref"], "--", label="vref"); ax[0, 0].legend(fontsize=8)
    ax[0, 1].plot(t, X[:, 4], label="n"); ax[0, 1].plot(t, d["nref"], "--", label="nref")
    ax[0, 1].plot(t, data["nMin"], "k-", lw=.8); ax[0, 1].plot(t, data["nMax"], "k-", lw=.8); ax[0, 1].legend(fontsize=8)
    ax[0, 2].plot(t, X[:, 5], label="theta"); ax[0, 2].plot(t, d["theta_ref"], "--", label="theta ref"); ax[0, 2].legend(fontsize=8)
    ax[1, 0].plot(t, X[:, 6], label="delta"); ax[1, 0].plot(t, X[:, 7], label="tr"); ax[1, 0].legend(fontsize=8)
    g, lbg, ubg = (np.asarray(data["final"][k]) for k in ("g", "lbg", "ubg"))
    viol = np.maximum(0, np.maximum(lbg-g, g-ubg))*np.asarray(data["final"]["rowScale"])
    fam, ivl = np.asarray(data["final"]["family"]), np.asarray(data["final"]["gInterval"])
    for f in np.unique(fam):
        v = np.zeros(int(ivl.max())+1)
        np.maximum.at(v, ivl[fam == f], viol[fam == f])
        if v.max() > 0:
            ax[1, 1].semilogy(t[:len(v)], np.maximum(v, 1e-12), label=f)
    ax[1, 1].set_title("returned violation by family (physical)"); ax[1, 1].legend(fontsize=7)
    names = list(data["window"]["violation_by_family"])
    ax[1, 2].barh(names, [max(data["window"]["violation_by_family"][n], 1e-12) for n in names])
    ax[1, 2].set_xscale("log"); ax[1, 2].set_title("max violation per family")
    for a in ax.ravel()[:5]:
        a.grid(alpha=.25); a.set_xlabel("prediction time [s]")
    fig.suptitle(f"window {data['window']['update']} at s = {data['window']['s']:.1f} m: {data['meta']['status']} "
                 f"after {data['meta']['iterCount']} iterations")
    fig.tight_layout()
    return fig


def plot_prediction_error(run):
    """Predictor/plant mismatch: measured minus predicted state 50 ms after each update, and plant
    combined slip if recorded."""
    e = run.prediction_error()
    s = run.x[:len(e), 3]
    names = [n for n in STATES if n != "s"]
    units = dict(vx="m/s", vy="m/s", r="rad/s", n="m", theta="rad", delta="rad", tr="-")
    extra = run.plant_rho is not None
    fig, axes = plt.subplots(4, 2, figsize=(14, 11), sharex=True)
    ax = axes.ravel()
    for a, name in zip(ax, names):
        v = e[:, STATES.index(name)]
        a.plot(s, v, lw=.8)
        a.axhline(0, color="k", lw=.6)
        a.set_ylabel(f"{name} error [{units[name]}]")
        a.set_title(f"RMS {np.sqrt(np.mean(v**2)):.3g}, max |e| {np.max(abs(v)):.3g}", fontsize=9)
    if extra:
        rho = run.plant_rho[:len(e)]
        for i, w in enumerate(("FL", "FR", "RL", "RR")):
            ax[7].plot(run.x[1:len(rho)+1, 3], rho[:, i], lw=.7, label=w)
        ax[7].axhline(1, color="k", ls="--", lw=.8)
        ax[7].set_ylabel("plant combined slip rho"); ax[7].legend(fontsize=7, ncol=4)
    for a in ax:
        for w in run.failed():
            a.axvline(w["s"], color="tab:red", lw=.8, alpha=.6)
        a.grid(alpha=.25)
    for a in ax[-2:]:
        a.set_xlabel("s [m]")
    fig.suptitle(f"{run.name}: 50 ms prediction error (measured - predicted, same rate)")
    fig.tight_layout()
    return fig
