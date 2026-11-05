"""
Plotting for runs recorded in the post/<name>.pkl schema: lap-time OCP solves
(laptime_core/history.py) and single MPC windows (mpc/core/helpers/history.py).

SCHEMA-DRIVEN BY DESIGN. Nothing here hardcodes a state or control name.
Everything is read from the pickle:

    meta["stateNames"]    the state names, written by the history writer
    meta["controlNames"]  the control names
    meta["config"]        the bounds, keyed by the same names

Add a state to a model and it appears in every plot automatically, with its
bounds, as soon as the history writer records it.
"""

from __future__ import annotations

import numpy as np
import matplotlib.pyplot as plt
from matplotlib import cm

try:
    from ipywidgets import Dropdown, Output, VBox, IntSlider, HBox
    from IPython.display import display
except Exception:
    Dropdown = Output = VBox = IntSlider = HBox = display = None


# ------------------------------------------------------------- schema ------

def stateNames(data):
    return list(data["meta"]["stateNames"])


def controlNames(data):
    return list(data["meta"]["controlNames"])


def _cfgEntry(data, name, group):
    """Bounds entry for a state/control from the embedded config."""
    cfg = data["meta"].get("config", {}) or {}
    grp = cfg.get(group, {})
    if name in grp:
        return grp[name]
    # omegaFL..RR all come from the single "omega" entry
    base = name.rstrip("FLR")
    for key in grp:
        if name.startswith(key) and key:
            return grp[key]
    return grp.get(base, {})


def bounds(data, name, group="states"):
    """(min, max) for a signal, from the config. None where unbounded."""
    e = _cfgEntry(data, name, group)
    return e.get("min"), e.get("max")


COMPUTED_SIGNALS = ("speed", "u_body", "v_body")  # from VX, VY, yaw; see signal()


def computedNames(data):
    """Computed signals available for every iteration of this run (see signal())."""
    return list(COMPUTED_SIGNALS) if {"VX", "VY", "yaw"} <= set(data["meta"]["stateNames"]) else []


def signal(data, name, frame=None):
    """
    Values of one state or control across the mesh, by NAME.
    frame=None uses the converged solution; an int indexes into frames.
    """
    meta = data["meta"]
    src = data["final"] if frame is None else data["frames"][frame]
    if name in meta["stateNames"]:
        return np.asarray(src["X"], dtype=float)[:, meta["stateNames"].index(name)]
    if name in meta["controlNames"]:
        return np.asarray(src["U"], dtype=float)[:, meta["controlNames"].index(name)]
    # OCModelica: speeds computed from the world-frame velocity states, so they exist for every
    # recorded iteration (VX, VY are world-frame and change sign with the heading)
    if name in COMPUTED_SIGNALS and {"VX", "VY", "yaw"} <= set(meta["stateNames"]):
        VX, VY, yaw = (signal(data, n, frame) for n in ("VX", "VY", "yaw"))
        if name == "speed":
            return np.hypot(VX, VY)
        if name == "u_body":  # forward speed in the yaw frame (SAE)
            return VX * np.cos(yaw) + VY * np.sin(yaw)
        return -VX * np.sin(yaw) + VY * np.cos(yaw)  # v_body: lateral speed, + = right (SAE)
    # OCModelica: FMU outputs and other derived channels (vx, ay, fz[1], ...) at the final
    # mesh points. Not recorded per iteration, so only available for frame=None.
    derived = data.get("derived", {})
    if name in derived and frame is None:
        return np.asarray(derived[name], dtype=float)
    raise KeyError("%r is neither a state, a control nor a derived signal%s. Available: %s"
                   % (name, " (derived signals exist only for the final iterate)" if name in derived else "",
                      meta["stateNames"] + meta["controlNames"] + list(derived)))


def _markBoundHits(ax, x, y, bound, label):
    if bound is None:
        return
    span = float(np.ptp(y)) if y.size else 0.0
    tol = max(1e-8, 1e-3*max(1.0, abs(bound), span))
    hit = np.where(np.abs(y - bound) <= tol)[0]
    if hit.size:
        ax.scatter(x[hit], y[hit], color="red", s=20, zorder=4, label=label)


# --------------------------------------- final profiles with bounds --------

def plot_final_iteration_profiles_with_bounds(data, names=None, ncols=2,
                                              vsArclength=True):
    """
    Every state and control across the mesh, with its configured bounds and
    red markers where the solution sits on a bound.

    names=None plots all of them, in the model's own order.
    """
    meta = data["meta"]
    if names is None:
        names = meta["stateNames"] + meta["controlNames"]
    x = np.asarray(data["s"]) if vsArclength else np.arange(meta["N"])
    xlabel = "s [m]" if vsArclength else "mesh node"

    nrows = int(np.ceil(len(names)/ncols))
    fig, axes = plt.subplots(nrows, ncols, figsize=(7.0*ncols, 2.1*nrows),
                             squeeze=False)
    flat = axes.ravel()

    for ax, nm in zip(flat, names):
        y = signal(data, nm)
        grp = "states" if nm in meta["stateNames"] else "controls"
        lo, hi = bounds(data, nm, grp)
        ax.plot(x, y, lw=1.4, color="tab:blue")
        if nm == "n":                       # track edges vary per node
            ax.plot(x, data["nMin"], color="k", lw=1.0)
            ax.plot(x, data["nMax"], color="k", lw=1.0)
            ax.fill_between(x, data["nMin"], data["nMax"], color="k", alpha=0.05)
        else:
            for b, lbl in ((lo, "min"), (hi, "max")):
                if b is not None:
                    ax.axhline(b, color="k", lw=1.0, ls="-")
                    _markBoundHits(ax, x, y, b, "%s hit" % lbl)
        ax.set_ylabel(nm)
        ax.set_xlabel(xlabel)
        ax.grid(alpha=0.25)
        ax.margins(x=0)

    for ax in flat[len(names):]:
        ax.axis("off")
    fig.suptitle("%s  --  final profiles, %.3f s"
                 % (meta["track"], meta["lapTime"]), y=1.0)
    fig.tight_layout()
    return fig, axes


# ------------------------------------------ IPOPT convergence panels -------

def plot_ipopt_convergence_panels(data):
    """lg(mu), infeasibilities, step sizes and objective, from IPOPT's own log."""
    conv = data.get("convergence", {}) or {}
    if not conv:
        # Older run: no IPOPT iteration arrays. Rebuild what we can from the
        # recorded frames -- objective and max constraint violation.
        return _convergenceFallback(data)
    it = np.arange(len(conv.get("obj", [])))

    fig, axes = plt.subplots(2, 2, figsize=(13, 7))

    ax = axes[0, 0]
    for k, c in (("inf_pr", "tab:red"), ("inf_du", "tab:orange")):
        if k in conv:
            ax.semilogy(it, np.maximum(conv[k], 1e-16), label=k, color=c, lw=1.2)
    ax.set_title("infeasibility"); ax.set_xlabel("iteration")
    ax.grid(alpha=0.3, which="both"); ax.legend()

    ax = axes[0, 1]
    ax.plot(it, conv["obj"], color="tab:blue", lw=1.4)
    ax.axhline(data["meta"]["lapTime"], color="k", ls="--", lw=1.0,
               label="final %.3f s" % data["meta"]["lapTime"])
    ax.set_title("objective (lap time)"); ax.set_xlabel("iteration")
    ax.set_ylabel("s"); ax.grid(alpha=0.3); ax.legend()

    ax = axes[1, 0]
    if "mu" in conv:
        ax.semilogy(it, np.maximum(conv["mu"], 1e-16), color="tab:green", lw=1.2)
    ax.set_title("barrier parameter mu"); ax.set_xlabel("iteration")
    ax.grid(alpha=0.3, which="both")

    ax = axes[1, 1]
    bins = np.linspace(0.0, 1.0, 21)
    series = [(k, c) for k, c in (("alpha_pr", "tab:purple"),
                                  ("alpha_du", "tab:brown")) if k in conv]
    if series:
        ax.hist([np.clip(conv[k], 0.0, 1.0) for k, _ in series], bins=bins,
                label=[k for k, _ in series],
                color=[c for _, c in series], alpha=0.8)
        for k, c in series:
            frac = float(np.mean(conv[k] > 0.99))
            ax.axvline(np.median(conv[k]), color=c, ls="--", lw=1.0)
            ax.plot([], [], " ", label="%s: %.0f%% full steps" % (k, 100*frac))
    ax.set_title("step size distribution")
    ax.set_xlabel("step fraction"); ax.set_ylabel("iterations")
    ax.grid(alpha=0.3, axis="y"); ax.legend(fontsize=8)

    fig.suptitle("%s  --  %s after %d iterations"
                 % (data["meta"]["track"], data["meta"]["status"],
                    data["meta"]["iterCount"]))
    fig.tight_layout()
    return fig, axes


# ------------------------------------- top contributors to infeasibility ---

def plot_top5_infeasibility_stackplot(data, topN=5, begin_iter=0, ax=None, scaled=False):
    """
    Which states' constraints carry the infeasibility, stacked over iterations.

    Uses violByState recorded per frame: for each state, the largest constraint
    violation among the rows that constrain it. Answers "what is the solver
    still struggling to satisfy", which raw inf_pr cannot.

    scaled=True (OCModelica runs) uses violByStateScaled instead: the residual
    in the units IPOPT sees, i.e. divided by each state's nominal. Physical
    units rank a wheel speed in rad/s against a pitch angle in rad; scaled
    units show what the solver is actually fighting.
    """
    frames = data.get("frames", [])
    key = "violByStateScaled" if scaled else "violByState"
    if not frames or key not in frames[0]:
        # Recorded before per-state violation was captured. Fall back to
        # whatever the run does have rather than refusing to plot.
        return _infeasibilityFallback(data, begin_iter=begin_iter, ax=ax)

    names = stateNames(data)
    it = np.array([f["iter"] for f in frames])
    V = np.array([f[key] for f in frames], dtype=float)

    keep = it >= begin_iter
    it, V = it[keep], V[keep]

    order = np.argsort(V.sum(axis=0))[::-1][:topN]
    other = np.setdiff1d(np.arange(V.shape[1]), order)

    if ax is None:
        fig, ax = plt.subplots(figsize=(12, 4.5))
    else:
        fig = ax.figure

    stack = [V[:, i] for i in order]
    labels = [names[i] for i in order]
    if other.size:
        stack.append(V[:, other].sum(axis=1))
        labels.append("other")

    colors = cm.tab10(np.linspace(0, 1, len(stack)))
    ax.stackplot(it, *stack, labels=labels, colors=colors, alpha=0.85)
    ax.set_xlabel("iteration")
    ax.set_ylabel("max constraint violation" + (" (scaled)" if scaled else ""))
    ax.set_title("%s  --  top %d states by constraint violation%s"
                 % (data["meta"]["track"], topN, " (scaled)" if scaled else ""))
    ax.grid(alpha=0.25); ax.legend(loc="upper right", ncol=3, fontsize=8)
    ax.margins(x=0)
    fig.tight_layout()
    return fig, ax


def _hasFrames(data):
    return bool(data.get("frames"))


def _staleNote(ax, what):
    ax.text(0.99, 0.02,
            "%s unavailable in this run -- re-record with the\n"
            "current history writer to get it" % what,
            transform=ax.transAxes, ha="right", va="bottom", fontsize=7,
            color="0.4", style="italic")


def _infeasibilityFallback(data, begin_iter=0, ax=None):
    """Per-state violation is missing: show IPOPT's inf_pr/inf_du instead."""
    if ax is None:
        fig, ax = plt.subplots(figsize=(12, 4.5))
    else:
        fig = ax.figure

    conv = data.get("convergence", {}) or {}
    if "inf_pr" in conv:
        it = np.arange(len(conv["inf_pr"]))
        keep = it >= begin_iter
        for k, c in (("inf_pr", "tab:red"), ("inf_du", "tab:orange")):
            if k in conv:
                ax.semilogy(it[keep], np.maximum(conv[k][keep], 1e-16),
                            label=k, color=c, lw=1.2)
    elif _hasFrames(data):
        fr = data["frames"]
        it = np.array([f["iter"] for f in fr])
        v = np.array([f["maxViolation"] for f in fr])
        keep = it >= begin_iter
        ax.semilogy(it[keep], np.maximum(v[keep], 1e-16),
                    color="tab:red", lw=1.2, label="max constraint violation")
    else:
        raise ValueError("this run has no convergence data of any kind")

    ax.set_xlabel("iteration"); ax.set_ylabel("infeasibility")
    ax.set_title("%s  --  infeasibility" % data["meta"]["track"])
    ax.grid(alpha=0.25, which="both"); ax.legend(); ax.margins(x=0)
    _staleNote(ax, "Per-state breakdown")
    fig.tight_layout()
    return fig, ax


def _convergenceFallback(data):
    """No IPOPT iteration arrays: plot objective and violation from frames."""
    if not _hasFrames(data):
        raise ValueError("this run has neither IPOPT stats nor frames")
    fr = data["frames"]
    it = np.array([f["iter"] for f in fr])
    obj = np.array([f["objective"] for f in fr])
    viol = np.array([f["maxViolation"] for f in fr])

    fig, axes = plt.subplots(1, 2, figsize=(13, 4))
    axes[0].semilogy(it, np.maximum(viol, 1e-16), color="tab:red", lw=1.2)
    axes[0].set_title("max constraint violation"); axes[0].set_xlabel("iteration")
    axes[0].grid(alpha=0.3, which="both")

    axes[1].plot(it, obj, color="tab:blue", lw=1.4)
    axes[1].axhline(data["meta"]["lapTime"], color="k", ls="--", lw=1.0,
                    label="final %.3f s" % data["meta"]["lapTime"])
    axes[1].set_title("objective (lap time)"); axes[1].set_xlabel("iteration")
    axes[1].set_ylabel("s"); axes[1].grid(alpha=0.3); axes[1].legend()

    for a in axes:
        _staleNote(a, "mu / alpha / inf_du")
    fig.suptitle("%s  --  %s after %d iterations"
                 % (data["meta"]["track"], data["meta"]["status"],
                    data["meta"]["iterCount"]))
    fig.tight_layout()
    return fig, axes


# ---------------------------------------------- track and racing line ------

def _centrelineXY(data, track=None):
    """
    Reference-line geometry in world coordinates, and the unit normal that n is
    measured along (+n to the left, as in laptime_core.track).

    From `track` (a laptime_core.track.Track) when given, otherwise from the
    geometry stored in the pickle (refX, refY, refPsi), which both history
    writers (laptime_core/history.py, mpc/core/helpers/history.py) always save.
    """
    s = np.asarray(data["s"])
    if track is not None:
        (X, Y), (nx_, ny_) = track.xy(s).T, track.normal(s).T
        return X, Y, nx_, ny_
    if "refX" not in data or "refY" not in data or "refPsi" not in data:
        raise KeyError("this pickle has no reference geometry (refX/refY/refPsi); pass the track: "
                       "plot_track_bounds(data, track=laptime_core.track.Track(...))")
    psi = np.asarray(data["refPsi"])
    return np.asarray(data["refX"]), np.asarray(data["refY"]), -np.sin(psi), np.cos(psi)


def plot_track_bounds(data, track=None, colorBy="vx", ax=None, lw=2.2,
                      closeLoop=True, cmap="viridis"):
    """
    Track edges plus the optimal line as a SOLID line, coloured by any state
    or control.

    Drawn as a LineCollection: one segment between consecutive nodes, each
    taking the colour of that segment. That keeps the continuous look of a
    line while still carrying the colour information a scatter gives.

    colorBy=None draws a plain single-colour line.
    """
    from matplotlib.collections import LineCollection

    X, Y, nx_, ny_ = _centrelineXY(data, track)
    nMin, nMax = np.asarray(data["nMin"]), np.asarray(data["nMax"])
    n = signal(data, "n")

    if ax is None:
        fig, ax = plt.subplots(figsize=(9, 9))
    else:
        fig = ax.figure

    edgeR = np.column_stack([X + nMax*nx_, Y + nMax*ny_])
    edgeL = np.column_stack([X + nMin*nx_, Y + nMin*ny_])
    line = np.column_stack([X + n*nx_, Y + n*ny_])
    centre = np.column_stack([X, Y])

    if closeLoop and getattr(track, "closed", True) is not False:
        # repeat the first point so the loop visibly closes rather than
        # leaving a gap at the start/finish line
        edgeR = np.vstack([edgeR, edgeR[:1]])
        edgeL = np.vstack([edgeL, edgeL[:1]])
        line = np.vstack([line, line[:1]])
        centre = np.vstack([centre, centre[:1]])

    ax.fill(np.concatenate([edgeR[:, 0], edgeL[::-1, 0]]),
            np.concatenate([edgeR[:, 1], edgeL[::-1, 1]]),
            color="0.92", zorder=0)
    ax.plot(edgeR[:, 0], edgeR[:, 1], "k-", lw=1.0, zorder=1)
    ax.plot(edgeL[:, 0], edgeL[:, 1], "k-", lw=1.0, zorder=1)
    ax.plot(centre[:, 0], centre[:, 1], color="0.6", lw=0.7, ls="--",
            zorder=2, label="centreline")

    if colorBy is None:
        ax.plot(line[:, 0], line[:, 1], color="tab:red", lw=lw, zorder=3,
                solid_capstyle="round", label="optimal line")
    else:
        c = signal(data, colorBy)
        if closeLoop and len(c) == len(line) - 1:
            c = np.append(c, c[0])
        segs = np.stack([line[:-1], line[1:]], axis=1)
        cSeg = 0.5*(c[:-1] + c[1:])            # colour each segment by its mean
        lc = LineCollection(segs, cmap=cmap, linewidths=lw, zorder=3,
                            capstyle="round", joinstyle="round")
        lc.set_array(cSeg)
        ax.add_collection(lc)
        plt.colorbar(lc, ax=ax, label=colorBy, shrink=0.75)
        ax.plot([], [], color="0.3", lw=lw, label="optimal line")

    pad = 0.03*max(np.ptp(edgeR[:, 0]), np.ptp(edgeR[:, 1]))
    ax.set_xlim(min(edgeL[:, 0].min(), edgeR[:, 0].min()) - pad,
                max(edgeL[:, 0].max(), edgeR[:, 0].max()) + pad)
    ax.set_ylim(min(edgeL[:, 1].min(), edgeR[:, 1].min()) - pad,
                max(edgeL[:, 1].max(), edgeR[:, 1].max()) + pad)
    ax.set_aspect("equal"); ax.grid(alpha=0.2)
    ax.set_xlabel("X [m]"); ax.set_ylabel("Y [m]")
    ax.set_title("%s  --  optimal line, %.3f s"
                 % (data["meta"]["track"], data["meta"]["lapTime"]))
    ax.legend(loc="best", fontsize=8)
    fig.tight_layout()
    return fig, ax


plot_track_bounds_with_trajectory = plot_track_bounds     # notebook alias


# ------------------------------------------------- iteration dashboard -----

def plot_iteration_trace_dashboard(data):
    """
    Interactive: pick a signal and an iteration, see how it evolved.
    Falls back to a static small-multiples figure outside Jupyter.
    """
    names = computedNames(data) + stateNames(data) + controlNames(data)
    frames = data["frames"]
    if Dropdown is None or not frames:
        return plot_iteration_traces(data)

    dd = Dropdown(options=names, value="u_body" if "u_body" in names else names[0],
                  description="signal")
    sl = IntSlider(value=len(frames) - 1, min=0, max=len(frames) - 1,
                   description="frame", continuous_update=False)
    out = Output()

    def draw(*_):
        with out:
            out.clear_output(wait=True)
            fig, ax = plt.subplots(figsize=(11, 3.6))
            s = np.asarray(data["s"])
            for i in range(0, len(frames), max(1, len(frames)//12)):
                ax.plot(s, signal(data, dd.value, frame=i), lw=0.7,
                        color="0.8", zorder=1)
            ax.plot(s, signal(data, dd.value, frame=sl.value), lw=1.8,
                    color="tab:red", zorder=3,
                    label="iter %d" % frames[sl.value]["iter"])
            ax.plot(s, signal(data, dd.value), lw=1.2, color="tab:blue",
                    ls="--", zorder=2, label="final")
            ax.set_xlabel("s [m]"); ax.set_ylabel(dd.value)
            ax.grid(alpha=0.25); ax.legend(); ax.margins(x=0)
            plt.show()

    dd.observe(draw, "value"); sl.observe(draw, "value"); draw()
    return VBox([HBox([dd, sl]), out])


def plot_iteration_traces(data, names=None, nShow=12, ncols=2):
    """Static version: every signal, faded early iterations, final in colour."""
    meta = data["meta"]
    frames = data["frames"]
    if names is None:
        names = meta["stateNames"] + meta["controlNames"]
    s = np.asarray(data["s"])
    step = max(1, len(frames)//nShow)

    nrows = int(np.ceil(len(names)/ncols))
    fig, axes = plt.subplots(nrows, ncols, figsize=(7.0*ncols, 2.1*nrows),
                             squeeze=False)
    flat = axes.ravel()
    for ax, nm in zip(flat, names):
        for i in range(0, len(frames), step):
            ax.plot(s, signal(data, nm, frame=i), lw=0.6,
                    color=cm.viridis(i/max(1, len(frames) - 1)), alpha=0.6)
        ax.plot(s, signal(data, nm), lw=1.6, color="tab:red")
        ax.set_ylabel(nm); ax.set_xlabel("s [m]")
        ax.grid(alpha=0.25); ax.margins(x=0)
    for ax in flat[len(names):]:
        ax.axis("off")
    fig.suptitle("%s  --  iteration traces (dark = early, red = final)"
                 % meta["track"], y=1.0)
    fig.tight_layout()
    return fig, axes


# ------------------------------------------------------- speed profile -----

def plot_speed_and_guess(data, ax=None):
    """Optimal speed against the g-g-v guess that seeded it."""
    if ax is None:
        fig, ax = plt.subplots(figsize=(12, 3.6))
    else:
        fig = ax.figure
    s = np.asarray(data["s"])
    ax.plot(s, signal(data, "vx"), lw=1.5, label="optimal vx")
    if "vGuess" in data:
        ax.plot(s, data["vGuess"], lw=1.0, ls="--", color="0.5",
                label="g-g-v guess")
    ax2 = ax.twinx()
    ax2.plot(s, np.abs(data["kappa"]), lw=0.7, color="tab:orange", alpha=0.6)
    ax2.set_ylabel("|kappa| [1/m]", color="tab:orange")
    ax.set_xlabel("s [m]"); ax.set_ylabel("speed [m/s]")
    ax.grid(alpha=0.25); ax.legend(loc="upper right"); ax.margins(x=0)
    fig.tight_layout()
    return fig, ax


# =========================================================================
# OCModelica additions: localise infeasibility along the track, check the
# discretization, tire slip utilisation, and where the time goes.
# =========================================================================

def _stateNominals(data):
    """Per-state scale factors (real = scaled*nominal + offset) from the saved layout."""
    fin = data["final"]
    k0 = int(np.asarray(fin["Xidx"])[0, 0])
    return np.asarray(fin["scaleVec"], dtype=float)[k0:k0 + data["meta"]["nx"]]


def plot_final_violation_vs_s(data, topN=6, scaled=True, ax=None):
    """
    WHERE along the lap the final iterate violates its constraints: for each
    state, the largest violation over that interval's collocation and
    continuity rows, plus the sDot and slip-limit rows. Run-to-run, bands
    that stay high mark the corners the solver cannot settle.
    """
    fin = data["final"]
    if "gInterval" not in fin:
        raise ValueError("run has no gInterval (row -> interval map); re-record it")
    g = np.asarray(fin["g"], float)
    viol = np.maximum(np.maximum(np.asarray(fin["lbg"]) - g, g - np.asarray(fin["ubg"])), 0.0)
    if not scaled:
        viol = viol*np.asarray(fin["rowScale"], float)
    idx = np.asarray(fin["gStateIdx"])
    ivl = np.asarray(fin["gInterval"])
    N = data["meta"]["N"]
    names = stateNames(data)
    s = np.asarray(data["s"])

    V = np.zeros((len(names), N))
    for i in range(len(names)):
        sel = idx == i
        np.maximum.at(V[i], ivl[sel], viol[sel])
    extra = {}
    for code, lbl in ((-1, "sDot >= min"), (-2, "slip limit")):
        sel = idx == code
        if sel.any():
            e = np.zeros(N)
            np.maximum.at(e, ivl[sel], viol[sel])
            extra[lbl] = e

    if ax is None:
        fig, ax = plt.subplots(figsize=(13, 4.5))
    else:
        fig = ax.figure
    order = np.argsort(V.max(axis=1))[::-1][:topN]
    for i in order:
        ax.semilogy(s, np.maximum(V[i], 1e-12), lw=1.0, label=names[i])
    for lbl, e in extra.items():
        if e.max() > 0:
            ax.semilogy(s, np.maximum(e, 1e-12), lw=1.0, ls="--", label=lbl)
    ax.set_ylim(bottom=1e-8)
    ax.set_xlabel("s [m]")
    ax.set_ylabel("violation" + (" (scaled)" if scaled else " (physical)"))
    ax.set_title("%s  --  final constraint violation along the lap (top %d states)"
                 % (data["meta"]["track"], topN))
    ax.grid(alpha=0.25, which="both"); ax.legend(ncol=4, fontsize=8); ax.margins(x=0)
    fig.tight_layout()
    return fig, ax


def plot_defects_vs_s(data, topN=6, threshold=0.1, ax=None):
    """
    Discretization check: per-interval mismatch between the collocation
    solution and a fine RK4 re-integration of the same interval (from its
    mesh state, with its control). Scaled by state nominal. Spikes above
    `threshold` mark where the mesh is too coarse for the dynamics or the
    optimizer is exploiting discretization error.
    """
    if ax is None:
        fig, ax = plt.subplots(figsize=(13, 4.5))
    else:
        fig = ax.figure
    if "defects" not in data:
        # the runner saves the pkl first and adds the defects ~10 s later, after the RK4 check;
        # a pkl loaded in between (or a run whose check was interrupted) has none yet
        ax.text(0.5, 0.5, "no RK4 defects in this pkl yet -- the check runs after the first save\n"
                "(reload once the run prints 'history: ...'), or it was interrupted",
                transform=ax.transAxes, ha="center", va="center", color="0.4")
        ax.set_axis_off()
        return fig, ax
    D = np.asarray(data["defects"], float)/_stateNominals(data)[:, None]
    names = stateNames(data)
    s = np.asarray(data["s"])
    order = np.argsort(D.max(axis=1))[::-1][:topN]
    for i in order:
        ax.semilogy(s, np.maximum(D[i], 1e-10), lw=1.0, label=names[i])
    ax.axhline(threshold, color="k", ls="--", lw=1.0, label="threshold %g" % threshold)
    nbad = int(np.sum(D.max(axis=0) > threshold))
    t = data.get("lapTimeRK4")
    ax.set_title("%s  --  RK4 defect per interval (scaled): %d of %d above %g%s"
                 % (data["meta"]["track"], nbad, D.shape[1], threshold,
                    "" if t is None else ";  RK4 lap %.3f s vs %.3f s" % (t, data["meta"]["lapTime"])))
    ax.set_xlabel("s [m]"); ax.set_ylabel("|defect| / nominal")
    ax.grid(alpha=0.25, which="both"); ax.legend(ncol=4, fontsize=8); ax.margins(x=0)
    fig.tight_layout()
    return fig, ax


def slip_rho2_mf(kappa, tan_alpha, sp):
    """MF-tire runs: ellipse (kappa/kappa_max)^2 + (tanA/tanA_max)^2, sp = (kappa_max, tanA_max, ...)."""
    return (kappa/sp[0])**2 + (tan_alpha/sp[1])**2


def slip_rho2_brush(kappa, tan_alpha, sp):
    """Brush-tire runs: |sigma|^2 / sigma_max^2 with sigma = (kappa, tanA)/(1 + kappa), sp = (sigma_max, sigma_max, ...)
    (laptime_core/vehicle.py combined_slip_sq, 1 + kappa floored at 0.05 like BrushForces)."""
    d = np.maximum(1 + kappa, 0.05)
    return ((kappa/sp[0])**2 + (tan_alpha/sp[1])**2) / d**2


SLIP_RHO2 = {"mf": slip_rho2_mf, "brush": slip_rho2_brush}


def slip_model(cfg):
    """The run's tire model for the slip formula: config constraints.slip_model; runs without it are MF."""
    return cfg.get("constraints", {}).get("slip_model") or "mf"


def plot_slip_utilisation(data, ax=None):
    """
    Combined normalised slip rho per wheel at the final mesh points, against the configured limit,
    with the formula of the run's tire model (slip_model):
        mf     rho = sqrt((kappa/kappa_max)^2 + (tanAlpha/tanAlpha_max)^2)
        brush  rho = |sigma| / sigma_max, sigma = (kappa, tanAlpha) / (1 + kappa)
    rho = 1 is the configured slip limit scale; sitting on the limit through corners is
    expected, sitting on it in traction zones is where defects come from.
    """
    sp = data["meta"]["config"].get("constraints", {}).get("slip_peak")
    if sp is None:
        raise ValueError("run config has no slip_peak")
    model = slip_model(data["meta"]["config"])
    rho2_fn = SLIP_RHO2[model]
    s = np.asarray(data["s"])
    if ax is None:
        fig, ax = plt.subplots(figsize=(13, 4))
    else:
        fig = ax.figure
    for w in ("FL", "FR", "RL", "RR"):
        rho = np.sqrt(rho2_fn(np.asarray(signal(data, "kappa" + w)), np.asarray(signal(data, "tanAlpha" + w)), sp))
        ax.plot(s, rho, lw=1.0, label=w)
    if sp[2] is None:
        ax.axhline(1.0, color="k", lw=1.0, ls="--", label="tire peak (no limit)")
    else:
        ax.axhline(sp[2], color="k", lw=1.0, label="limit %.2f" % sp[2])
    ax.set_xlabel("s [m]"); ax.set_ylabel("combined slip / peak")
    ax.set_title("%s  --  tire slip utilisation (%s tire)" % (data["meta"]["track"], "brush" if model == "brush" else "MF"))
    ax.grid(alpha=0.25); ax.legend(ncol=5, fontsize=8); ax.margins(x=0)
    fig.tight_layout()
    return fig, ax


def plot_timing(data):
    """Seconds per IPOPT iteration, and the split between NLP function
    evaluations (FMU calls) and IPOPT's own linear algebra."""
    t = data.get("timing", {}) or {}
    spi = t.get("secPerIter")
    fig, axes = plt.subplots(1, 2, figsize=(13, 3.8), gridspec_kw={"width_ratios": [3, 1]})
    if spi is not None and len(spi):
        axes[0].plot(np.arange(len(spi)), spi, lw=0.8)
        axes[0].axhline(np.median(spi), color="k", ls="--", lw=1.0,
                        label="median %.2f s" % np.median(spi))
        axes[0].legend()
    axes[0].set_xlabel("iteration"); axes[0].set_ylabel("s / iteration"); axes[0].grid(alpha=0.25)
    axes[0].set_title("wall time per iteration")
    parts = {k[len("t_proc_nlp_"):]: v for k, v in t.items()
             if k.startswith("t_proc_nlp_") and isinstance(v, (int, float)) and v > 0}
    if "secInSolver" in t:
        parts["IPOPT (linear algebra)"] = t["secInSolver"]
    if parts:
        axes[1].pie(list(parts.values()), labels=["%s\n%.0f s" % kv for kv in parts.items()],
                    textprops={"fontsize": 8})
    axes[1].set_title("CPU split")
    fig.tight_layout()
    return fig, axes


# ------------------------------------------------ convergence trouble spots --
# Per mesh interval, five independent measures of how hard the solver is
# struggling there. Each answers a different question:
#   violation  final primal infeasibility (scaled) -- constraints not satisfied
#   activity   mean largest scaled step over the last iterations -- the solver
#              keeps moving these nodes instead of settling
#   chatter    near-bound / near-limit status flips over the last iterations
#              (pedal and box bounds, track edges, slip limit) -- active-set
#              indecision
#   dual       largest |gradient of the Lagrangian| (final["gradL"]) -- the
#              optimality conditions do not hold here (IPOPT's inf_du)
#   defect     RK4 re-integration mismatch -- the mesh does not resolve it

_TROUBLE_LABELS = {
    "violation": "final violation (scaled)",
    "activity": "late step size (scaled)",
    "chatter": "active-set flips",
    "dual": "|grad Lagrangian|",
    "defect": "RK4 defect / nominal",
}


def _stageVarNames(data, d=None):
    d = data["meta"]["degree"] if d is None else d
    names = stateNames(data)
    return (list(names) + ["%s(c%d)" % (n, j + 1) for j in range(d) for n in names]
            + controlNames(data))


def _chatter(data, X):
    """Near-bound status flips per interval over the stacked mesh states X (K, N, nx)."""
    names = stateNames(data)
    cfg = data["meta"]["config"]
    N = X.shape[1]
    flips, by = np.zeros(N), {}

    def count(label, near):
        f = (np.diff(near.astype(int), axis=0) != 0).sum(axis=0)
        if f.any():
            by[label] = f
        return f

    for i, nm in enumerate(names):
        e = cfg.get("states", {}).get(nm, {})
        lo, hi = e.get("min"), e.get("max")
        if lo is None and hi is None:
            continue
        span = (hi - lo) if (lo is not None and hi is not None) else 1.0
        tol = max(1e-3, 0.01*span)
        near = np.zeros(X.shape[:2], bool)
        if lo is not None:
            near |= X[:, :, i] - lo < tol
        if hi is not None:
            near |= hi - X[:, :, i] < tol
        flips += count(nm + " bound", near)
    if "n" in names:
        n = X[:, :, names.index("n")]
        near = (n - np.asarray(data["nMin"]) < 0.05) | (np.asarray(data["nMax"]) - n < 0.05)
        flips += count("track edge", near)
    sp = cfg.get("constraints", {}).get("slip_peak")
    if sp is not None and sp[2] is not None:
        for w in ("FL", "FR", "RL", "RR"):
            if "kappa" + w in names:
                rho2 = SLIP_RHO2[slip_model(cfg)](X[:, :, names.index("kappa" + w)],
                                                  X[:, :, names.index("tanAlpha" + w)], sp)
                flips += count("slip " + w, rho2 > 0.98*sp[2]**2)
    labels = list(by)
    if not labels:
        return flips, [""]*N
    dom = [labels[int(np.argmax([by[l][k] for l in labels]))] if flips[k] > 0 else "" for k in range(N)]
    return flips, dom


def trouble_metrics(data, last=100):
    """
    ({metric: (N,) array}, {metric: [dominant variable per interval]}) for the
    metrics this run supports. `last` = how many recorded iterations the
    activity and chatter measures look back over.
    """
    meta, fin = data["meta"], data["final"]
    N = meta["N"]
    names = stateNames(data)
    nom = _stateNominals(data)
    out, dom = {}, {}

    g = np.asarray(fin["g"], float)
    viol = np.maximum(np.maximum(np.asarray(fin["lbg"]) - g, g - np.asarray(fin["ubg"])), 0.0)
    ivl, idx = np.asarray(fin["gInterval"]), np.asarray(fin["gStateIdx"])
    v = np.zeros(N)
    np.maximum.at(v, ivl, viol)
    out["violation"] = v
    order = np.lexsort((viol, ivl))                       # last row of each interval = its worst
    worst = order[np.r_[np.flatnonzero(np.diff(ivl[order])), len(order) - 1]]
    rowName = lambda c: names[c] if c >= 0 else {-1: "sDot", -2: "slip limit"}.get(int(c), "?")
    dom["violation"] = [""]*N
    for r in worst:
        dom["violation"][ivl[r]] = rowName(idx[r])

    frames = data.get("frames") or []
    if len(frames) > 2:
        X = np.array([f["X"] for f in frames[-(last + 1):]], float)     # (K, N, nx)
        dX = np.abs(np.diff(X, axis=0))/nom                             # (K-1, N, nx)
        out["activity"] = dX.max(axis=2).mean(axis=0)
        dom["activity"] = [names[i] for i in dX.mean(axis=0).argmax(axis=1)]
        out["chatter"], dom["chatter"] = _chatter(data, X)

    if fin.get("gradL") is not None:
        G = np.abs(np.asarray(fin["gradL"], float))                     # stage-major layout
        starts = np.asarray(fin["Xidx"])[:, 0]                          # stages may differ in size
        stages = np.split(G, starts[1:])                                # (per-interval degree)
        out["dual"] = np.array([g.max() for g in stages])
        degs = data["meta"].get("degrees")
        degs = np.full(N, data["meta"]["degree"]) if degs is None else np.asarray(degs)
        dom["dual"] = []
        for g, d in zip(stages, degs):
            vn, j = _stageVarNames(data, int(d)), int(g.argmax())
            dom["dual"].append(vn[j] if j < len(vn) else "?")

    if "defects" in data:
        D = np.asarray(data["defects"], float)/nom[:, None]
        out["defect"] = D.max(axis=0)
        dom["defect"] = [names[i] for i in D.argmax(axis=0)]
    return out, dom


def _troubleScore(metrics):
    """Mean percentile rank over the available metrics (1 = worst on every measure)."""
    ranks = [np.argsort(np.argsort(m))/(len(m) - 1.0) for m in metrics.values()]
    return np.mean(ranks, axis=0)


def trouble_table(data, last=100, topK=15, show=True):
    """
    The topK intervals by combined trouble score: where they are, what the car
    is doing there, every metric, and the variable that dominates each metric.
    Returns the rows as a list of dicts.
    """
    met, dom = trouble_metrics(data, last)
    score = _troubleScore(met)
    s = np.asarray(data["s"])
    der = data.get("derived", {})
    names = stateNames(data)
    kap = np.asarray(data.get("kappa", np.zeros(len(s))))
    rows = []
    for k in np.argsort(score)[::-1][:topK]:
        row = {"k": int(k), "s": float(s[k]), "score": float(score[k]),
               "speed": float(der["speed"][k]) if "speed" in der else np.nan, "kappa": float(kap[k])}
        for p in ("drive", "brake"):
            if p in names:
                row[p] = float(signal(data, p)[k])
        for m in met:
            row[m] = float(met[m][k])
            row[m + "_var"] = dom[m][k]
        rows.append(row)
    if show:
        hdr = "%4s %4s %7s %5s %6s %8s %5s %5s" % ("rank", "k", "s [m]", "score", "v", "kappa", "drv", "brk")
        print(hdr + "".join("  %-26s" % _TROUBLE_LABELS[m][:26] for m in met))
        for i, r in enumerate(rows):
            line = "%4d %4d %7.0f %5.2f %6.1f %+8.4f %5.2f %5.2f" % (
                i + 1, r["k"], r["s"], r["score"], r["speed"], r["kappa"],
                r.get("drive", np.nan), r.get("brake", np.nan))
            line += "".join("  %8.1e %-17s" % (r[m], r[m + "_var"][:17]) for m in met)
            print(line)
        if "dual" not in met:
            print("\n(no 'dual' column: this pkl has no final['gradL']. Runs saved from now on include it; "
                  "for an older run: from laptime_core.diagnostics import add_stationarity; "
                  "add_stationarity(path), then reload.)")
    return rows


def plot_trouble_maps(data, last=100, topK=8, track=None, cmap="inferno_r"):
    """
    One track map per trouble metric: the racing line coloured (log scale) by
    the metric, the topK worst intervals circled and labelled with s and the
    variable that dominates there.
    """
    from matplotlib.collections import LineCollection
    from matplotlib.colors import LogNorm

    met, dom = trouble_metrics(data, last)
    X, Y, nx_, ny_ = _centrelineXY(data, track)
    nMin, nMax = np.asarray(data["nMin"]), np.asarray(data["nMax"])
    n = signal(data, "n")
    s = np.asarray(data["s"])
    line = np.column_stack([X + n*nx_, Y + n*ny_])
    edgeR = np.column_stack([X + nMax*nx_, Y + nMax*ny_])
    edgeL = np.column_stack([X + nMin*nx_, Y + nMin*ny_])
    closed = lambda a: np.vstack([a, a[:1]])

    keys = list(met)
    ncol = 2
    nrow = int(np.ceil(len(keys)/ncol))
    fig, axes = plt.subplots(nrow, ncol, figsize=(15, 7.2*nrow))
    axes = np.atleast_1d(axes).ravel()
    for ax, m in zip(axes, keys):
        v = np.asarray(met[m], float)
        pos = v[v > 0]
        vmin = max(np.percentile(pos, 5) if pos.size else 1e-12, 1e-12)
        vmax = max(v.max(), vmin*10)
        ax.fill(np.r_[edgeR[:, 0], edgeL[::-1, 0]], np.r_[edgeR[:, 1], edgeL[::-1, 1]], color="0.94", zorder=0)
        ax.plot(*closed(edgeR).T, color="0.55", lw=0.7, zorder=1)
        ax.plot(*closed(edgeL).T, color="0.55", lw=0.7, zorder=1)
        L = closed(line)
        lc = LineCollection(np.stack([L[:-1], L[1:]], axis=1), cmap=cmap, norm=LogNorm(vmin, vmax),
                            linewidths=3.0, zorder=3, capstyle="round")
        lc.set_array(np.maximum(v, vmin))
        ax.add_collection(lc)
        plt.colorbar(lc, ax=ax, shrink=0.7, label=_TROUBLE_LABELS[m])
        labelled = []
        for k in np.argsort(v)[::-1][:topK]:
            ax.scatter(*line[k], s=90, facecolors="none", edgecolors="tab:blue", lw=1.6, zorder=4)
            if any(min(abs(k - j), len(s) - abs(k - j)) <= 3 for j in labelled):
                continue                                   # one label per cluster of neighbours
            labelled.append(k)
            ax.annotate("s=%.0f\n%s" % (s[k], dom[m][k]), line[k], xytext=(6, 6), textcoords="offset points",
                        fontsize=7.5, color="tab:blue", zorder=5)
        ax.plot(*line[0], "k>", ms=8, zorder=5)
        ax.set_aspect("equal"); ax.set_xticks([]); ax.set_yticks([])
        ax.set_title("%s  (max %.2g, top %d circled)" % (_TROUBLE_LABELS[m], v.max(), topK))
    for ax in axes[len(keys):]:
        ax.set_axis_off()
    fig.suptitle("%s  --  where the solver struggles (activity/chatter over the last %d iterations; > = start)"
                 % (data["meta"]["track"], last), fontsize=12)
    fig.tight_layout(rect=(0, 0, 1, 0.97))
    return fig, axes


def plot_trouble_vs_s(data, last=100, topK=8):
    """
    The same metrics along the lap, stacked, under speed and track curvature for
    context. The topK intervals by combined score are shaded in every panel, so
    you can see which measures agree.
    """
    met, dom = trouble_metrics(data, last)
    score = _troubleScore(met)
    s = np.asarray(data["s"])
    h = float(np.median(np.diff(s)))
    der = data.get("derived", {})
    fig, axes = plt.subplots(len(met) + 1, 1, figsize=(14, 2.1*(len(met) + 1)), sharex=True)
    ax0 = axes[0]
    if "speed" in der:
        ax0.plot(s, der["speed"], color="k", lw=1.0)
        ax0.set_ylabel("speed [m/s]")
    if "kappa" in data:
        t = ax0.twinx()
        t.plot(s, data["kappa"], color="tab:green", lw=0.8)
        t.set_ylabel("track curvature", color="tab:green")
    worst = np.argsort(score)[::-1][:topK]
    for ax, m in zip(axes[1:], met):
        if m == "chatter":
            ax.bar(s, met[m], width=np.asarray(data.get("h", h)), align="edge", color="tab:purple")
        else:
            ax.semilogy(s, np.maximum(np.asarray(met[m], float), 1e-14), lw=0.9)
        ax.set_ylabel(_TROUBLE_LABELS[m], fontsize=8)
        ax.grid(alpha=0.25, which="both")
    for ax in axes:
        for k in worst:
            ax.axvspan(s[k] - h/2, s[k] + h/2, color="tab:red", alpha=0.15, lw=0)
    for k in worst:
        ax0.annotate("%.0f" % s[k], (s[k], 1.0), xycoords=("data", "axes fraction"), fontsize=7,
                     color="tab:red", ha="center", va="bottom")
    axes[-1].set_xlabel("s [m]")
    ax0.margins(x=0)
    ax0.set_title("%s  --  convergence trouble along the lap (red: top %d by combined score)"
                  % (data["meta"]["track"], topK), pad=14)
    fig.tight_layout()
    return fig, axes


def plot_step_heatmap(data, state=None, last=None):
    """
    Iteration x track position image of the largest scaled step at each mesh
    node (state=None: over all states; or one state by name). Bands that stay
    bright late in the solve are the nodes the solver keeps moving.
    """
    from matplotlib.colors import LogNorm
    frames = data.get("frames") or []
    if len(frames) < 3:
        raise ValueError("run has fewer than 3 recorded iterations")
    fr = frames if last is None else frames[-(last + 1):]
    X = np.array([f["X"] for f in fr], float)
    it = np.array([f["iter"] for f in fr])
    dX = np.abs(np.diff(X, axis=0))/_stateNominals(data)
    A = dX.max(axis=2) if state is None else dX[:, :, stateNames(data).index(state)]
    A = np.maximum(A, 1e-8)
    s = np.asarray(data["s"])
    fig, ax = plt.subplots(figsize=(14, 6))
    pm = ax.pcolormesh(s, it[1:], A, cmap="magma", shading="nearest",
                       norm=LogNorm(max(np.percentile(A, 5), 1e-8), A.max()))
    plt.colorbar(pm, ax=ax, label="|step| / nominal" + ("" if state is None else " (%s)" % state))
    ax.set_xlabel("s [m]"); ax.set_ylabel("iteration")
    ax.set_title("%s  --  where each iteration moves the solution%s"
                 % (data["meta"]["track"], "" if state is None else ": " + state))
    fig.tight_layout()
    return fig, ax
