"""Full-lap MPC on the double-wishbone plant, split into lap sections run in parallel.

Edit LAP below (the MPC itself uses run_mpc.MPC_SETTINGS), then run

    python -B -m mpc.workflows.run_mpc_parallel

The lap [start, start + L) is cut into `sections` equal parts [b_i, b_(i+1)). Section i is an ordinary
run_mpc closed loop from a_i = b_i - overlap to b_(i+1), started from the lap-time OCP's full plant state
at a_i (section 0 starts at b_0, with no warm-up). The warm-up distance lets the controller settle from
the OCP state into its own driving; only [b_i, b_(i+1)) of each section counts:

    lap time   sum of each section's time from b_i to b_(i+1) (plant trajectory, interpolated)
    KPIs       slip and solver statistics of the updates inside the counted parts

Sections are independent processes, so wall time is about the longest section instead of the whole lap.
The stitched lap approximates one continuous run: each section starts from the OCP state, not from where
the previous section's car actually was. Set LAP["compare"] to a saved continuous run (run_mpc over the
same stretch) to measure that error section by section.

Output in mpc/results/runs/: <name>.json (stitched lap, per-section details) and each section's own run
in <name>/sec<i>.json/.npz.
"""

from concurrent.futures import ProcessPoolExecutor
from dataclasses import asdict
import json
import os
import time

import numpy as np

from ..core.case import PREDICTOR, load_case
from ..core.helpers.paths import ROOT
from ..core.ocp import MPC
from ..core.predictor.bicycle import load_predictor
from .run_mpc import MPC_SETTINGS, OUTPUT, RUN, soft_fallback_settings

# ----------------------------------------------------------------------------------- lap settings
LAP = dict(
    name=None,                 # mpc/results/runs/<name>.json, sections in <name>/; None = lap_<start>_<timestamp>
    start=650.,                # [m] lap start (b_0)
    end=None,                  # [m]; None = one lap from start
    sections=8,
    overlap=300.,              # [m] warm-up before each counted part
    workers=None,              # parallel processes; None = min(sections, cores/2)
    predictor=PREDICTOR,       # 12-state predictor file
    continue_on_failure=True,  # keep going after a rejected plan (applying the last accepted plan's input)
    ipopt_log=False,           # write every solve's log to each section's ipopt.log
    compare=None,              # name of a saved continuous run to compare section times with; None = no comparison
)
# -------------------------------------------------------------------------------------------------


def _section(job):
    from .run_mpc import run
    started = time.perf_counter()
    report = run(job["name"], start=job["start"], end=job["end"], settings=job["settings"],
                 slip_fallback_penalty=RUN["slip_fallback_penalty"], hang_timeout=RUN["hang_timeout"],
                 continue_on_failure=job["continue_on_failure"], ipopt_log=job["ipopt_log"],
                 plant="double-wishbone", predictor=job["predictor"])
    return dict(index=job["index"], name=job["name"], summary=report["summary"], wall=time.perf_counter()-started)


def counted(name, lo, hi):
    """Time from s = lo to s = hi of a saved run, and the updates whose s lies in [lo, hi)."""
    record = json.loads((OUTPUT/(name+".json")).read_text(encoding="utf-8"))
    with np.load(OUTPUT/(name+".npz"), allow_pickle=False) as d:
        t, s = d["t"], d["x"][:, 3]
        rho = d["plant_rho"] if "plant_rho" in d else None
    if s[-1] < hi:
        return None
    windows = [w for w in record["windows"] if lo <= w["s"] < hi]
    keep = (s[1:] >= lo) & (s[1:] < hi)                  # plant_rho row k is the state after update k
    return dict(time=float(np.interp(hi, s, t)-np.interp(lo, s, t)), windows=windows,
                rho=None if rho is None else rho[:len(keep)][keep[:len(rho)]])


def stitch(sections):
    total, rows, rho = 0., [], []
    for sec in sections:
        part = counted(sec["name"], sec["counted"][0], sec["counted"][1])
        if part is None:
            return None
        total += part["time"]
        rows += part["windows"]
        sec["counted_time"] = part["time"]
        if part["rho"] is not None:
            rho.append(part["rho"])
    rho = np.vstack(rho) if rho else np.zeros((0, 4))
    walls = np.array([w["wall"] for w in rows])
    return dict(lap_time=total, updates=len(rows), rejected=sum(not w["accepted"] for w in rows),
                cold_retries=sum(len(w["attempts"]) > 1 for w in rows),
                mean_solve=float(walls.mean()), median_solve=float(np.median(walls)), max_solve=float(walls.max()),
                plant_rho_max=float(rho.max()) if len(rho) else None,
                plant_rho_over_1=float(np.mean(rho.max(axis=1) > 1)) if len(rho) else None)


def sequential_split(name, bounds):
    """The same counted parts cut out of one continuous run, for comparison."""
    return [None if (p := counted(name, lo, hi)) is None else p["time"] for lo, hi in zip(bounds[:-1], bounds[1:])]


def main(lap=LAP, settings=MPC_SETTINGS):
    name = lap["name"] or f"lap_{lap['start']:g}_{time.strftime('%Y%m%d_%H%M%S')}"
    case = load_case()
    track, reference = case.track, case.ref
    start = lap["start"]
    end = start+track.length if lap["end"] is None else lap["end"]
    bounds = np.linspace(start, end, lap["sections"]+1)
    jobs = []
    for i, (lo, hi) in enumerate(zip(bounds[:-1], bounds[1:])):
        jobs.append(dict(index=i, name=f"{name}/sec{i:02d}", start=float(start if i == 0 else lo-lap["overlap"]),
                         end=float(hi), counted=(float(lo), float(hi)), settings=settings,
                         continue_on_failure=lap["continue_on_failure"], ipopt_log=lap["ipopt_log"],
                         predictor=str(lap["predictor"])))
    workers = lap["workers"] or min(len(jobs), max(1, (os.cpu_count() or 2)//2))
    began = time.perf_counter()
    if settings.compiled:   # compile once here (the MPC and its soft-slip fallback); the sections load the cached DLLs
        model = load_predictor(lap["predictor"])
        for s in (settings, soft_fallback_settings(settings, RUN["slip_fallback_penalty"])):
            if s is not None:
                MPC(model, case.profiles, s)
    results = {}
    with ProcessPoolExecutor(max_workers=workers) as pool:
        for r in pool.map(_section, jobs):
            results[r["index"]] = r
            print(f"section {r['index']:2d} done: {r['summary']['status']} at s={r['summary']['reached_s']:.1f}, "
                  f"wall {r['wall']/60:.1f} min", flush=True)
    wall = time.perf_counter()-began
    sections = [dict(job, summary=results[job["index"]]["summary"], wall=results[job["index"]]["wall"]) for job in jobs]
    for sec in sections:
        sec["settings"] = None
    stitched = stitch(sections)
    report = dict(name=name, sections=lap["sections"], overlap=lap["overlap"], workers=workers,
                  bounds=bounds.tolist(), settings=asdict(settings), predictor=str(lap["predictor"]),
                  parallel_wall=wall, compute_wall=float(sum(s["wall"] for s in sections)),
                  reference_time=float(reference.time(end)-reference.time(start)), stitched=stitched,
                  sections_detail=[{k: v for k, v in s.items() if k != "settings"} for s in sections])
    if lap["compare"]:
        report["compare"] = dict(run=lap["compare"], section_times=sequential_split(lap["compare"], bounds))
    out = OUTPUT/(name+".json")
    out.write_text(json.dumps(report, indent=2)+"\n", encoding="utf-8")
    print(json.dumps(dict(stitched=stitched, parallel_wall_min=wall/60, compute_wall_min=report["compute_wall"]/60), indent=2))
    if lap["compare"]:
        mine = [s.get("counted_time") for s in sections]
        for i, (a, b) in enumerate(zip(mine, report["compare"]["section_times"])):
            print(f"section {i:2d}: parallel {a if a is None else round(a, 3)} s, sequential {b if b is None else round(b, 3)} s")
    print("wrote", out.relative_to(ROOT))


if __name__ == "__main__":
    main()
