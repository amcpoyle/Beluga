"""Lap-time weight (thesis Q_L, Settings.lap_weight) sweep: one run_mpc lap per value, then a table against
the lap-time OCP.

Edit SWEEP below, then run

    python -B -m mpc.workflows.sweep_lap_weight

Every run uses run_mpc's RUN and MPC_SETTINGS with only lap_weight changed. lap_weight is an NLP parameter,
so all runs share one compiled NLP (no recompile). The runs go in parallel processes, one lap each (each
single-threaded), named <name>_ql<value> in mpc/results/runs/. Saved runs listed in SWEEP["include"] join
the table, marked if their settings differ from MPC_SETTINGS apart from lap_weight.
"""

from concurrent.futures import ProcessPoolExecutor
from dataclasses import asdict, replace
import json
import time

import numpy as np

from .run_mpc import MPC_SETTINGS, OUTPUT, RUN, soft_fallback_settings

# ----------------------------------------------------------------------------------- sweep settings
SWEEP = dict(
    lap_weights=[0., 6., 12.],              # Q_L values to run
    include=["dw_650-lap_20261029_171318"],  # saved runs to add to the table (the Q_L = 3 lap)
    name=None,                              # run names <name>_ql<value>; None = qlsweep_<timestamp>
    workers=3,                              # parallel laps
)
# -------------------------------------------------------------------------------------------------


def _lap(job):
    from .run_mpc import run
    report = run(**dict(RUN, name=job["name"]), settings=replace(MPC_SETTINGS, lap_weight=job["lap_weight"]))
    return job["name"], report["summary"]["status"]


def table(names):
    """Lap time, gap to the OCP, plant slip and rejections of saved runs, sorted by lap weight."""
    from ..core.case import load_case
    reference = load_case().ref
    rows = []
    base = {k: v for k, v in asdict(MPC_SETTINGS).items() if k != "lap_weight"}
    for name in names:
        r = json.loads((OUTPUT/(name+".json")).read_text(encoding="utf-8"))
        s = r["summary"]
        with np.load(OUTPUT/(name+".npz"), allow_pickle=False) as d:
            t, x = d["t"], d["x"]
        full = x[-1, 3] >= s["end"]
        lap = float(np.interp(s["end"], x[:, 3], t)) if full else float("nan")
        ocp = float(reference.time(s["end"])-reference.time(s["start"]))
        same = {k: v for k, v in r["settings"].items() if k != "lap_weight"} == json.loads(json.dumps(base))
        rows.append((r["settings"]["lap_weight"], name, lap, lap-ocp, s["plant_rho_max"], 100*s["plant_rho_over_1"],
                     s["rejected"], s["status"], same))
    lines = [f"{'Q_L':>5}  {'lap [s]':>8}  {'gap to OCP':>10}  {'plant rho max':>13}  {'rho > 1':>7}  {'rejected':>8}  run"]
    for q, name, lap, gap, rho, over, rej, status, same in sorted(rows):
        lines.append(f"{q:5g}  {lap:8.3f}  {gap:+10.3f}  {rho:13.3f}  {over:6.1f}%  {rej:8d}  {name}"
                     + ("" if status == "completed" else f"  ({status})") + ("" if same else "  [different settings]"))
    return "\n".join(lines)


def main(sweep=SWEEP):
    prefix = sweep["name"] or f"qlsweep_{time.strftime('%Y%m%d_%H%M%S')}"
    jobs = [dict(name=f"{prefix}_ql{q:g}", lap_weight=float(q)) for q in sweep["lap_weights"]]
    # build (and if needed compile) the NLP once here, so the parallel laps only load the cached DLL
    if MPC_SETTINGS.compiled:
        from ..core.case import PREDICTOR, load_case
        from ..core.ocp import MPC
        from ..core.predictor.bicycle import load_predictor
        model, road = load_predictor(PREDICTOR), load_case().profiles
        for s in (MPC_SETTINGS, soft_fallback_settings(MPC_SETTINGS, RUN["slip_fallback_penalty"])):
            if s is not None:   # the MPC and its soft-slip fallback (one NLP each, every lap_weight)
                MPC(model, road, s)
    with ProcessPoolExecutor(max_workers=sweep["workers"]) as pool:
        for name, status in pool.map(_lap, jobs):
            print(f"{name}: {status}", flush=True)
    names = sweep["include"]+[j["name"] for j in jobs]
    text = table(names)
    (OUTPUT/(prefix+".txt")).write_text(text+"\n", encoding="utf-8")
    print("\n"+text)


if __name__ == "__main__":
    main()
