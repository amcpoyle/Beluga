"""An MPC run against a saved lap-time OCP solution: the first section of mpc/notebooks/RunOverview.ipynb.

    run = Run(name)                                # None = the newest MPC run
    c = compare(run, "Catalunya_ds10_casadi.npz")  # a run_min_laptime solution; None = the one the MPC tracked
    print(summary_table(c)); print(section_table(c))
    plot_times(c); plot_track_overlay(c); plot_traces(c); plot_sections(c)

Both are compared by track position over the distance the run covered, in the predictor's states (left-positive,
at the nominal CoG): the OCP's mesh states go through the same projection as the plant's. The MPC starts from the
OCP's state at its start, and the OCP is periodic, so one full MPC lap compares with the OCP's lap time.
"""

import filecmp
import glob
import os
import pickle
from types import SimpleNamespace

import matplotlib.pyplot as plt
import numpy as np

from laptime_core.history import POST_DIR
from laptime_core.vehicle import combined_slip_sq_for

from ..case import ocp_plant_state
from ..plant.reference import LapReference
from .paths import ROOT

OCP_COLOR, MPC_COLOR = "#2a78d6", "#eb6834"
INK, MUTED = "#0b0b0b", "#898781"
TRACK_EDGE = "#52514e"
WHEELS = ("FL", "FR", "RL", "RR")
OCP_RESULTS = ROOT/"results"


def find_ocp(name):
    """A saved lap-time OCP solution (run_min_laptime .npz), from its name or file name in results/, or a path."""
    for path in (ROOT/name, OCP_RESULTS/name, OCP_RESULTS/f"{name}.npz"):
        if path.is_file():
            return path
    raise FileNotFoundError(f"OCP solution {name!r} not found in {OCP_RESULTS} (or as a path)")


def _matching_history(lap_time):
    """(wall, iterations) of the post/*.pkl with exactly this lap time, newest first: the solve statistics of an
    .npz saved before it recorded them. (None, None) if there is none."""
    for path in sorted(glob.glob(os.path.join(POST_DIR, "*.pkl")), key=os.path.getmtime, reverse=True):
        with open(path, "rb") as fh:
            data = pickle.load(fh)
        if data["meta"]["lapTime"] == lap_time:
            return data["timing"].get("wall"), data["meta"].get("iterCount")
    return None, None


def load_ocp(name, run):
    """A saved OCP solution (see find_ocp) on the run's track, with its lap time and solve statistics."""
    path = find_ocp(name)
    ref = LapReference(path, run.reference.plant, run.track, run.reference.reference_offset)
    with np.load(path, allow_pickle=False) as d:
        status = str(d["status"])
        wall, iterations = (float(d["wall_time"]), int(d["iterations"])) if "wall_time" in d else (None, None)
    if wall is None:
        wall, iterations = _matching_history(ref.lap_time)
    return SimpleNamespace(path=path, ref=ref, lap_time=ref.lap_time, status=status, wall=wall, iterations=iterations)


def _slip_scale(run):
    """(kappa, tan alpha) of rho = 1 in the run's saved settings, the scale of its recorded plant rho, and the
    slip formula it used ("brush" or "mf"; runs before the brush tire have no slip_model: "mf")."""
    limits = run.report["settings"]["limits"]
    return limits["kappa_peak"], limits["tan_alpha_peak"], limits.get("slip_model", "mf")


def _ocp_states(ocp, s0, s1, slip_scale):
    """The OCP's mesh points in [s0, s1] (s continuing past the track length): projected states, and rho per wheel
    on the MPC run's scale."""
    L, plant = ocp.ref.track.length, ocp.ref.plant
    laps = np.arange(np.floor(s0/L), np.floor(s1/L)+1)
    grid = np.concatenate([ocp.ref.s+k*L for k in laps])
    grid = grid[(grid >= s0) & (grid <= s1)]
    x, rho = [], []
    for s in grid:
        lap = np.floor(s/L)
        state = ocp_plant_state(ocp.ref, plant, s-lap*L)
        row = ocp.ref.project(state)
        row[3] += lap*L
        x.append(row)
        rho.append([np.sqrt(combined_slip_sq_for(slip_scale[2], state[plant.i["kappa"+w]], state[plant.i["tanAlpha"+w]],
                                                 slip_scale[:2]))
                    for w in WHEELS])
    return np.array(x), np.array(rho)


def track_sections(track, s0, s1, corner_radius=250., min_length=40.):
    """Cut [s0, s1] into straights and corners from the centerline curvature, smoothed over 25 m: a corner is
    tighter than corner_radius [m]; a stretch shorter than min_length [m] joins its neighbours (chicanes stay one
    corner). Returns the edges and labels S1, C1, ... in driving order (this code's numbering, not official turn
    numbers)."""
    s = np.arange(s0, s1, 1.)
    if len(s) < 2:
        return np.array([s0, s1]), ["S1"]
    kappa = np.abs(np.asarray(track.kappa(np.arange(s0-12., s1+12., 1.))))
    corner = np.convolve(kappa, np.ones(25)/25, "valid")[:len(s)] > 1/corner_radius

    def absorb_short(mask):
        starts = np.r_[0, np.flatnonzero(np.diff(mask))+1, len(mask)]
        for lo, hi in zip(starts[:-1], starts[1:]):
            if mask[lo] and hi-lo < min_length:
                mask[lo:hi] = False
        return mask
    corner = absorb_short(~absorb_short(~corner))     # short straights join corners, then short corners join straights
    cuts = np.flatnonzero(np.diff(corner))+1
    edges, labels, count = np.r_[s0, s[cuts], s1], [], {True: 0, False: 0}
    for lo in np.r_[0, cuts]:
        kind = bool(corner[lo])
        count[kind] += 1
        labels.append(f"{'C' if kind else 'S'}{count[kind]}")
    return edges, labels


def compare(run, ocp_file=None, sections=None):
    """Everything the tables and plots show. ocp_file: a saved OCP solution, by name, file name or
    path (find_ocp); None = the one the MPC tracked. sections: edges [m] in the run's s (continuing past the track length),
    labelled 1, 2, ...; None = straights and corners from the curvature (track_sections)."""
    ocp = load_ocp(run.reference_file if ocp_file is None else ocp_file, run)
    x, t = run.x, run.t
    s0, s1 = x[0, 3], min(x[-1, 3], run.summary["end"])
    s = np.linspace(s0, s1, int(s1-s0)+1)
    t_mpc = np.interp(s, x[:, 3], t)
    t_ocp = np.asarray(ocp.ref.time(s), float)-float(ocp.ref.time(s0))
    if sections is None:
        edges, labels = track_sections(run.track, s0, s1)
    else:
        edges = np.unique(np.clip(np.r_[s0, sections, s1], s0, s1))
        labels = [str(k+1) for k in range(len(edges)-1)]
    time_mpc, time_ocp = np.diff(np.interp(edges, s, t_mpc)), np.diff(np.interp(edges, s, t_ocp))
    x_ocp, rho_ocp = _ocp_states(ocp, s0, s1, _slip_scale(run))
    return SimpleNamespace(run=run, ocp=ocp, s=s, t_mpc=t_mpc, t_ocp=t_ocp, gap=t_mpc-t_ocp, edges=edges, labels=labels,
                           section_mpc=time_mpc, section_ocp=time_ocp, x_ocp=x_ocp, rho_ocp=rho_ocp,
                           full_lap=s1-s0 >= run.track.length-1.,
                           walls=np.array([w["wall"] for w in run.windows]), budget=float(t[1]-t[0]))


def summary_table(c):
    """Lap times and solve times of both."""
    run, ocp, walls = c.run, c.ocp, c.walls
    dist = f"one full lap, s = {c.s[0]:.0f} m to {c.s[-1]:.0f} m" if c.full_lap else \
        f"{c.s[-1]-c.s[0]:.0f} m of the lap, s = {c.s[0]:.0f} m to {c.s[-1]:.0f} m; the run stopped early"
    ocp_solve = "not recorded" if ocp.wall is None else f"{ocp.wall:.1f} s ({ocp.iterations} iterations)"
    rows = [("OCP solution", f"{ocp.path} ({ocp.status})"),
            ("MPC run", f"{run.name} ({run.summary['status']}, {len(walls)} updates, {run.summary['rejected']} rejected)"),
            ("compared over", dist),
            ("time, OCP", f"{c.t_ocp[-1]:.3f} s"),
            ("time, MPC", f"{c.t_mpc[-1]:.3f} s ({c.gap[-1]:+.3f} s, {100*c.gap[-1]/c.t_ocp[-1]:+.2f}%)"),
            ("total solve, OCP", f"{ocp_solve}: one solve of the whole lap, offline"),
            ("total solve, MPC", f"{walls.sum():.1f} s over {len(walls)} updates (run wall {run.summary['rollout_wall']:.1f} s with the plant)"),
            ("per MPC update", f"median {np.median(walls):.3f} s, 95% {np.percentile(walls, 95):.3f} s, max {walls.max():.3f} s; "
                               f"{100*np.mean(walls <= c.budget):.1f}% within the {1e3*c.budget:.0f} ms update period")]
    if not filecmp.cmp(run.reference_file, ocp.path, shallow=False):
        rows.insert(2, ("note", f"the MPC tracked a different solution: {run.reference_file}"))
    if not run.reference_saved:
        rows.insert(2, ("note", "this run saved no copy of the OCP solution it tracked, so the file at its recorded path "
                                "may have changed since the run"))
    width = max(len(k) for k, _ in rows)
    return "\n".join(f"{k:<{width}}  {v}" for k, v in rows)


def section_table(c):
    """Time in every section of the track, in driving order."""
    delta = c.section_mpc-c.section_ocp
    lines = [f"{'section':<8}{'s from [m]':>11}{'s to [m]':>10}{'OCP [s]':>10}{'MPC [s]':>10}{'MPC-OCP [s]':>13}"]
    for k, label in enumerate(c.labels):
        lines.append(f"{label:<8}{c.edges[k]:>11.0f}{c.edges[k+1]:>10.0f}{c.section_ocp[k]:>10.3f}"
                     f"{c.section_mpc[k]:>10.3f}{delta[k]:>+13.3f}")
    lines.append(f"{'total':<8}{c.edges[0]:>11.0f}{c.edges[-1]:>10.0f}{c.section_ocp.sum():>10.3f}"
                 f"{c.section_mpc.sum():>10.3f}{delta.sum():>+13.3f}")
    return "\n".join(lines)


def _style(ax):
    ax.grid(alpha=.25, lw=.6)
    ax.spines[["top", "right"]].set_visible(False)
    ax.tick_params(colors=TRACK_EDGE, labelsize=9)


def plot_times(c):
    """Lap time and total solve time, side by side. Bars start at zero, so read the lap-time gap off the labels."""
    fig, ax = plt.subplots(1, 2, figsize=(13, 2.8))

    def bars(a, ocp, mpc, title, digits):
        names = ["OCP" if ocp is not None else "OCP (not recorded)", "MPC"]
        values = [0. if ocp is None else ocp, mpc]
        a.barh(names, values, color=[OCP_COLOR, MPC_COLOR], height=.55)
        a.invert_yaxis()
        a.margins(x=.2)
        for k, v in enumerate(values):
            if k == 1 or ocp is not None:
                a.text(v, k, f"  {v:.{digits}f} s", va="center", color=INK, fontsize=10)
        a.set_title(title, fontsize=11, loc="left", color=INK)
        a.set_xlabel("[s]", fontsize=9, color=TRACK_EDGE)
        _style(a)
        a.grid(False, axis="y")
    bars(ax[0], c.t_ocp[-1], c.t_mpc[-1], f"Time over {'the lap' if c.full_lap else 'the distance covered'}: "
         f"MPC {c.gap[-1]:+.3f} s", 3)
    bars(ax[1], c.ocp.wall, c.walls.sum(), "Total solve time (OCP: one offline solve; MPC: all updates)", 0)
    fig.tight_layout()
    return fig


def plot_track_overlay(c, zooms=3, pad=25.):
    """Both lines on the track with the sections labelled, and zooms on the sections the MPC loses most time in."""
    run, track = c.run, c.run.track
    delta = c.section_mpc-c.section_ocp
    worst = [k for k in np.argsort(delta)[::-1] if delta[k] > 0][:zooms]
    fig = plt.figure(figsize=(14, 9.5))
    grid = fig.add_gridspec(max(len(worst), 1), 2, width_ratios=[2.2, 1])
    main = fig.add_subplot(grid[:, 0])
    xy_mpc = np.asarray(track.frenet_to_xy(run.x[:, 3], run.x[:, 4]))
    xy_ocp = np.asarray(track.frenet_to_xy(c.x_ocp[:, 3], c.x_ocp[:, 4]))
    lap = np.linspace(0, track.length, 3000)

    def draw(ax):
        for border in track.borders(lap):
            ax.plot(border[:, 0], border[:, 1], color=TRACK_EDGE, lw=.8)
        ax.plot(xy_ocp[:, 0], xy_ocp[:, 1], color=OCP_COLOR, lw=1.6, label="OCP")
        ax.plot(xy_mpc[:, 0], xy_mpc[:, 1], color=MPC_COLOR, lw=1.2, label="MPC")
        ax.set_aspect("equal")
        _style(ax)
    draw(main)
    center = np.asarray(track.xy(lap)).mean(axis=0)
    for k, label in enumerate(c.labels):
        if label.startswith("S"):
            continue
        mid = (c.edges[k]+c.edges[k+1])/2
        p = np.asarray(track.xy(mid))
        out = (p-center)/np.linalg.norm(p-center)
        main.annotate(label, p, xytext=p+45*out, fontsize=8, color=INK, ha="center", va="center")
    start = np.asarray(track.xy(c.s[0]))
    main.plot(*start, "o", color=INK, ms=6, label="MPC start")
    main.legend(fontsize=9, loc="best")
    main.set_title(f"{track.name}: driven lines, corners labelled", fontsize=11, loc="left", color=INK)
    for row, k in enumerate(worst):
        ax = fig.add_subplot(grid[row, 1])
        draw(ax)
        s = np.linspace(c.edges[k]-pad, c.edges[k+1]+pad, 200)
        points = np.vstack(track.borders(s))
        (x0, y0), (x1, y1) = points.min(axis=0)-5, points.max(axis=0)+5
        ax.set_xlim(x0, x1); ax.set_ylim(y0, y1)
        ax.set_title(f"{c.labels[k]}: MPC {delta[k]:+.3f} s", fontsize=10, loc="left", color=INK)
        ax.set_xticks([]); ax.set_yticks([])
    fig.tight_layout()
    return fig


def plot_traces(c):
    """State traces of both against track position; the MPC corridor around n."""
    run, x, xo = c.run, c.run.x, c.x_ocp
    panels = [("speed [m/s]", np.hypot(x[:, 0], x[:, 1]), np.hypot(xo[:, 0], xo[:, 1])),
              ("n [m] (left +)", x[:, 4], xo[:, 4]),
              ("vy [m/s]", x[:, 1], xo[:, 1]),
              ("yaw rate r [rad/s]", x[:, 2], xo[:, 2]),
              ("heading to centerline [rad]", x[:, 5], xo[:, 5]),
              ("steering delta [rad]", x[:, 6], xo[:, 6]),
              ("pedal, drive - brake [-]", x[:, 7], xo[:, 7])]
    if run.plant_rho is not None:
        panels.append(("max combined slip rho [-]", None, c.rho_ocp.max(axis=1)))
    fig, axes = plt.subplots(len(panels), 1, figsize=(14, 2.1*len(panels)), sharex=True)
    for ax, (name, mpc, ocp) in zip(axes, panels):
        ax.plot(xo[:, 3], ocp, color=OCP_COLOR, lw=1.4, label="OCP")
        if mpc is None:
            n = len(run.plant_rho)
            ax.plot(x[1:n+1, 3], run.plant_rho.max(axis=1), color=MPC_COLOR, lw=.9, label="MPC")
            kappa, tan_alpha, model = _slip_scale(run)
            scale = (f"brush |sigma| {kappa:.3g}" if model == "brush"
                     else f"MF kappa {kappa:.3g}, alpha {np.arctan(tan_alpha):.3g} rad")
            ax.axhline(1, color=INK, ls="--", lw=.8, label=f"rho = 1 ({scale})")
        else:
            ax.plot(x[:, 3], mpc, color=MPC_COLOR, lw=.9, label="MPC")
        ax.set_ylabel(name, fontsize=9, color=TRACK_EDGE)
        _style(ax)
    lo, hi = run.corridor(c.s)
    axes[1].fill_between(c.s, lo, hi, color=MUTED, alpha=.15, lw=0, label="MPC corridor")
    for ax in (axes[0], axes[1], axes[-1]):
        ax.legend(fontsize=8, loc="upper right", ncol=3)
    axes[-1].set_xlabel("s [m] (continues past the start/finish line)", fontsize=9, color=TRACK_EDGE)
    axes[0].set_xlim(c.s[0], c.s[-1])
    axes[0].set_title(f"{run.name}: traces against the OCP", fontsize=11, loc="left", color=INK)
    fig.tight_layout()
    return fig


def plot_sections(c):
    """Cumulative time gap along the track, time in every section, and what the MPC gains or loses in each."""
    run, k = c.run, np.arange(len(c.labels))
    delta = c.section_mpc-c.section_ocp
    fig, ax = plt.subplots(3, 1, figsize=(14, 9.5), height_ratios=[1, 1.1, 1])
    ax[0].plot(c.s, c.gap, color=MPC_COLOR, lw=1.4, label="MPC - OCP")
    ax[0].axhline(0, color=INK, lw=.7)
    rejected = run.failed()
    for w in rejected:
        ax[0].axvline(w["s"], color=MUTED, lw=.8, alpha=.7)
    if rejected:
        ax[0].plot([], [], color=MUTED, lw=.8, label="rejected update")
    ax[0].set_xlim(c.s[0], c.s[-1])
    ax[0].set_xlabel("s [m]", fontsize=9, color=TRACK_EDGE)
    ax[0].set_ylabel("cumulative gap [s]", fontsize=9, color=TRACK_EDGE)
    ax[0].legend(fontsize=8, loc="upper left")
    ax[0].set_title(f"Time gap along the track: {c.gap[-1]:+.3f} s at the end", fontsize=11, loc="left", color=INK)
    width = .38
    ax[1].bar(k-width/2-.01, c.section_ocp, width, color=OCP_COLOR, label="OCP")
    ax[1].bar(k+width/2+.01, c.section_mpc, width, color=MPC_COLOR, label="MPC")
    ax[1].set_ylabel("time in section [s]", fontsize=9, color=TRACK_EDGE)
    ax[1].legend(fontsize=8, loc="upper center", ncol=2)
    ax[1].set_title("Time in each section (S straight, C corner)", fontsize=11, loc="left", color=INK)
    ax[2].bar(k, delta, .7, color=MPC_COLOR)
    ax[2].axhline(0, color=INK, lw=.7)
    ax[2].set_ylabel("MPC - OCP [s]", fontsize=9, color=TRACK_EDGE)
    ax[2].set_title("Time lost (above zero) or gained (below) by the MPC in each section", fontsize=11, loc="left", color=INK)
    for a in ax[1:]:
        a.set_xticks(k, c.labels, fontsize=8)
        a.set_xlim(-.7, len(k)-.3)
    for a in ax:
        _style(a)
    ax[1].grid(False, axis="x"); ax[2].grid(False, axis="x")
    fig.tight_layout()
    return fig
