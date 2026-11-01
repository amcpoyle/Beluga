"""Build mpc/notebooks/RunOverview.ipynb and execute it with the venv kernel (no nbconvert needed).

Set RUN below to the MPC run to show (None = the newest) and OCP to the saved lap-time OCP solution to compare it with
(None = the one that run tracked), then

    python -B mpc/diagnostics/build_run_notebook.py
"""
from pathlib import Path
import sys
import nbformat
from nbformat.v4 import new_notebook, new_markdown_cell, new_code_cell, new_output
from jupyter_client import KernelManager

ROOT = Path(__file__).resolve().parents[2]
RUN = None  # MPC run: name or file name in mpc/results/runs/, e.g. "dw_650-lap_20261030_000839"; None = the newest
OCP = None  # OCP solution: name or file name in results/, e.g. "Catalunya_ds10_casadi.npz", or a path;
            # None = the one the MPC run tracked
path = ROOT/"mpc/notebooks/RunOverview.ipynb"

cells = [
    new_markdown_cell(
        "# MPC run overview and failed windows\n\n"
        "- **Predictor** `mpc/core/predictor/bicycle.py`: the 12-state predictor, the thesis bicycle plus the "
        "four wheel speeds, with the plant's force laws.\n"
        "- **OCP** `mpc/core/ocp.py`: Radau direct collocation (degree 3, 60 x 50 ms = 3 s), "
        "thesis Eq. 7.4 cost with its Ch. 3 example weights. Constraints: initial state, collocation, continuity, "
        "state/rate boxes and the lap-time OCP's track tube. No terminal constraint, no extras.\n"
        "- **Track/reference**: the lap-time OCP's track (`laptime_core.track.Track`, smoothing 50), corridor "
        "(width - 1.0 - 0.2 m) and optimal solution (line, heading, speed x `speed_scale`).\n"
        "- **Plant**: the double-wishbone plant; each update its state is projected to the 8 body states plus "
        "the measured wheel speeds, with combined slip recorded as a KPI.\n\n"
        "Only **rejected windows** get detailed plots. Each was re-solved identically with an iteration recorder "
        "and saved in the `plotting/PlotHelpers.py` schema (`meta['lapTime']` holds the window objective; `s` is the "
        "predicted progress).\n\n"
        "New run: set `RUN` (name, start/end, `ipopt_log=True` to save solver logs, `ipopt_print=5` to print them "
        "live) and `MPC_SETTINGS` in `mpc/workflows/run_mpc.py`, run `.\\.venv\\Scripts\\python.exe -B -m "
        "mpc.workflows.run_mpc`; `RUN = None` below then picks it up."),
    new_code_cell(
        "%matplotlib inline\n"
        "import sys, os\n"
        "ROOT = os.path.abspath(os.path.join(os.getcwd(), '..', '..')) if os.path.basename(os.getcwd()) == 'notebooks' else os.getcwd()\n"
        "sys.path.insert(0, ROOT)\n"
        "import matplotlib.pyplot as plt\n"
        "from plotting import PlotHelpers\n"
        "from mpc.core.helpers.plots import (Run, RESULTS, plot_track, plot_signals, plot_solver, plot_window_horizon,\n"
        "                                    plot_prediction_error, plot_iteration_map)\n"
        "from mpc.core.helpers.ocp_compare import (compare, summary_table, section_table, plot_times, plot_track_overlay,\n"
        "                                          plot_traces, plot_sections)\n"
        "print('saved runs:', sorted(p.stem for p in RESULTS.glob('*.json')))\n"
        f"RUN = {RUN!r}  # MPC run: name or file name in mpc/results/runs/; None = the newest\n"
        f"OCP = {OCP!r}  # OCP solution: name or file name in results/, or a path; None = the one the MPC run tracked\n"
        "run = Run(RUN)\n"
        "comparison = compare(run, OCP)\n"
        "print(run.summary_table())"),
    new_markdown_cell("## MPC against the lap-time OCP\nThe closed-loop lap against the saved OCP solution named by `OCP`, "
                      "by track position over the distance the run covered. Lap times and solve times first (the OCP is one "
                      "offline solve of the whole lap, the MPC one solve per update), then the driven lines, the state traces, "
                      "and the time in each section of the track. Pass `compare(run, OCP, sections=[...])` to use your own "
                      "section edges instead of the straights and corners found from the curvature."),
    new_code_cell("print(summary_table(comparison))"),
    new_code_cell("plot_times(comparison); plt.show()"),
    new_markdown_cell("### Driven lines\nBoth lines on the track, with zooms on the sections where the MPC loses the most time."),
    new_code_cell("plot_track_overlay(comparison); plt.show()"),
    new_markdown_cell("### Traces\nBoth in the predictor's states, so they compare directly: left-positive, at the nominal CoG."),
    new_code_cell("plot_traces(comparison); plt.show()"),
    new_markdown_cell("### Time by track section"),
    new_code_cell("print(section_table(comparison))"),
    new_code_cell("plot_sections(comparison); plt.show()"),
    new_markdown_cell("## Overview\nPath on the track, plant states against the reference and corridor, and the solver per update. "
                      "Red markers/lines are rejected windows."),
    new_code_cell("plot_track(run); plt.show()"),
    new_code_cell("plot_signals(run); plt.show()"),
    new_code_cell("plot_solver(run); plt.show()"),
    new_markdown_cell("### Solver iterations along the track\nOne node per MPC update (every 50 ms) at the car's position, "
                      "coloured by the solver iterations it took (warm and cold attempts together, log scale); rejected "
                      "updates ringed in red."),
    new_code_cell("plot_iteration_map(run); plt.show()"),
    new_markdown_cell("## Predictor/plant mismatch\nMeasured minus predicted state one interval (50 ms) after each "
                      "update, under the same applied rate, so this is the predictor's own error. The last panel is the "
                      "plant's per-wheel combined slip."),
    new_code_cell("plot_prediction_error(run); plt.show()"),
    new_markdown_cell("## Rejected windows\nFor each (up to `MAX_SHOW`): the returned horizon against reference and corridor "
                      "with violation by family, then the `PlotHelpers` views: IPOPT convergence, top states by violation over "
                      "iterations, final profiles with bounds, violation along the horizon, and the track around the window."),
    new_code_cell(
        "failed = run.failed()\n"
        "MAX_SHOW = 3\n"
        "print(f'{len(failed)} rejected windows' + (':' if failed else ' -- nothing to debug in this run.'))\n"
        "for row in failed:\n"
        "    print(f\"  update {row['update']:4d}  s = {row['s']:8.1f} m  {str(row['status']):30s} iterations {row['iterations']:4d}  \"\n"
        "          f\"max violation {row['max_violation']:.2e}  worst family {max(row['violation_by_family'], key=row['violation_by_family'].get)}\")"),
    new_markdown_cell("### IPOPT logs of the rejected windows\nIPOPT's own iteration log (level 5) for every attempt of "
                      "each rejected window, cut from `mpc/results/runs/<RUN>/ipopt.log` (runs made with `ipopt_log=True`). "
                      "`print(run.ipopt_log(run.update(N)))` shows any update's log."),
    new_code_cell(
        "for row in failed[:MAX_SHOW]:\n"
        "    print(f\"################ update {row['update']}  s = {row['s']:.1f} m ################\")\n"
        "    print(run.ipopt_log(row))"),
    new_markdown_cell("### Plots of the rejected windows"),
    new_code_cell(
        "for row in failed[:MAX_SHOW]:\n"
        "    data = run.window(row)\n"
        "    plot_window_horizon(data); plt.show()\n"
        "    PlotHelpers.plot_ipopt_convergence_panels(data); plt.show()\n"
        "    PlotHelpers.plot_top5_infeasibility_stackplot(data, scaled=True); plt.show()\n"
        "    PlotHelpers.plot_final_iteration_profiles_with_bounds(data); plt.show()\n"
        "    PlotHelpers.plot_final_violation_vs_s(data); plt.show()\n"
        "    plot_track(run, window=row); plt.show()"),
]
nb = new_notebook(cells=cells, metadata={"kernelspec": {"name": "python3", "display_name": "Python 3 (.venv)", "language": "python"}})

km = KernelManager(kernel_cmd=[sys.executable, "-m", "ipykernel_launcher", "-f", "{connection_file}"])
km.start_kernel(cwd=str(path.parent))
kc = km.client(); kc.start_channels(); kc.wait_for_ready(timeout=120)
count = 0
try:
    for cell in nb.cells:
        if cell.cell_type != "code":
            continue
        count += 1
        msg_id = kc.execute(cell.source)
        outputs = []
        while True:
            msg = kc.get_iopub_msg(timeout=1800)
            if msg["parent_header"].get("msg_id") != msg_id:
                continue
            t, c = msg["msg_type"], msg["content"]
            if t == "stream":
                outputs.append(new_output("stream", name=c["name"], text=c["text"]))
            elif t in ("display_data", "execute_result"):
                kw = dict(data=c["data"], metadata=c.get("metadata", {}))
                if t == "execute_result":
                    kw["execution_count"] = c["execution_count"]
                outputs.append(new_output(t, **kw))
            elif t == "error":
                outputs.append(new_output("error", ename=c["ename"], evalue=c["evalue"], traceback=c["traceback"]))
                print("ERROR in cell", count, c["ename"], c["evalue"])
                if count == 1:   # the setup cell (run or OCP not found, ...): keep the previous notebook
                    raise SystemExit(c["evalue"])
            elif t == "status" and c["execution_state"] == "idle":
                break
        cell.outputs, cell.execution_count = outputs, count
finally:
    kc.stop_channels(); km.shutdown_kernel(now=True)
nbformat.write(nb, path)
print("wrote", path)
