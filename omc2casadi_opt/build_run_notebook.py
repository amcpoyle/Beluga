"""Build omc2casadi_opt/notebooks/ResultsLog.ipynb for a lap-time OCP run and execute it with the venv kernel
(no nbconvert needed). Same layout as optipySolver's ResultsLog.ipynb, on this repo's post/<name>.pkl
(laptime_core/history.py schema, plotted by plotting/PlotHelpers.py).

Set RUN below (None = the newest .pkl in post/) or pass it on the command line, then

    python -B omc2casadi_opt/build_run_notebook.py [run]

run: a name in post/ (.pkl optional), e.g. "Catalunya_N465_20261105_094359_casadi", or a path.
Works for fmu_opt runs too: both write the same pkl.
"""
from pathlib import Path
import sys

import nbformat
from jupyter_client import KernelManager
from nbformat.v4 import new_code_cell, new_markdown_cell, new_notebook, new_output

ROOT = Path(__file__).resolve().parents[1]
RUN = None  # lap-time run: name or file name in post/, or a path; None = the newest
if len(sys.argv) > 1:
    RUN = sys.argv[1]
path = ROOT/"omc2casadi_opt/notebooks/ResultsLog.ipynb"

cells = [
    new_markdown_cell(
        "# Lap-time OCP results log\n\n"
        "One minimum lap-time solve from `post/<name>.pkl` (written by `laptime_core/history.py` for "
        "`omc2casadi_opt.run_min_laptime` and `fmu_opt.run_min_laptime`), plotted with `plotting/PlotHelpers.py`. "
        "Everything is looked up by name from the pickle.\n\n"
        "Rebuild for another run: `python -B omc2casadi_opt/build_run_notebook.py <name>` (no name = newest), "
        "or change `pkl_file` below and re-run the notebook."),
    new_code_cell(
        "%matplotlib inline\n"
        "import importlib\n"
        "import os\n"
        "import pickle\n"
        "import sys\n"
        "from datetime import datetime\n"
        "from pathlib import Path\n\n"
        "import matplotlib.pyplot as plt\n"
        "import numpy as np\n"
        "from IPython.display import display\n\n"
        "# repo root, whether the kernel starts in omc2casadi_opt/notebooks/ or the repo\n"
        "ROOT = Path.cwd()\n"
        "while not (ROOT/'laptime_core').is_dir() and ROOT != ROOT.parent:\n"
        "    ROOT = ROOT.parent\n"
        "sys.path.insert(0, str(ROOT))\n\n"
        "import plotting.PlotHelpers as plot_helpers\n"
        "plot_helpers = importlib.reload(plot_helpers)\n\n"
        "# Bind plotting functions from the freshly reloaded module.\n"
        "plot_final_iteration_profiles_with_bounds = plot_helpers.plot_final_iteration_profiles_with_bounds\n"
        "plot_ipopt_convergence_panels             = plot_helpers.plot_ipopt_convergence_panels\n"
        "plot_top5_infeasibility_stackplot         = plot_helpers.plot_top5_infeasibility_stackplot\n"
        "plot_track_bounds_with_trajectory         = plot_helpers.plot_track_bounds\n"
        "plot_iteration_trace_dashboard            = plot_helpers.plot_iteration_trace_dashboard\n"
        "plot_iteration_traces                     = plot_helpers.plot_iteration_traces\n"
        "plot_speed_and_guess                      = plot_helpers.plot_speed_and_guess\n"
        "plot_slip_utilisation                     = plot_helpers.plot_slip_utilisation\n"
        "plot_timing                               = plot_helpers.plot_timing\n"
        "plot_defects_vs_s                         = plot_helpers.plot_defects_vs_s\n\n"
        "# schema helpers: everything is looked up BY NAME from the pickle\n"
        "signal       = plot_helpers.signal\n"
        "bounds       = plot_helpers.bounds\n"
        "stateNames   = plot_helpers.stateNames\n"
        "controlNames = plot_helpers.controlNames"),
    new_code_cell(
        "# Which run to load.\n"
        "#   pkl_file = None            -> newest .pkl in post/ (by modification time)\n"
        "#   pkl_file = \"name\"          -> post/name.pkl  (.pkl optional)\n"
        "#   pkl_file = \"/abs/path.pkl\" -> that file\n"
        f"pkl_file = {RUN!r}\n\n"
        "post_dir = ROOT/'post'\n\n"
        "if pkl_file is None:\n"
        "    candidates = list(post_dir.glob('*.pkl'))\n"
        "    if not candidates:\n"
        "        raise FileNotFoundError(f'No .pkl files found in {post_dir}')\n"
        "    # newest by modification time, NOT lexicographic order\n"
        "    pkl_path = max(candidates, key=lambda f: f.stat().st_mtime)\n"
        "else:\n"
        "    pkl_path = Path(pkl_file).expanduser()\n"
        "    if not pkl_path.is_absolute() and not pkl_path.exists():\n"
        "        pkl_path = post_dir/pkl_path          # bare name -> look in post/\n"
        "    if pkl_path.suffix != '.pkl':\n"
        "        pkl_path = pkl_path.with_suffix('.pkl')\n"
        "    if not pkl_path.exists():\n"
        "        raise FileNotFoundError(f'{pkl_path} not found')\n\n"
        "pkl_file = str(pkl_path)\n\n"
        "with open(pkl_file, 'rb') as fh:\n"
        "    output_data = pickle.load(fh)\n\n"
        "print(f'Loaded {pkl_path.name}')\n"
        "print(f'  {pkl_path}')\n"
        "print(f'  modified {datetime.fromtimestamp(pkl_path.stat().st_mtime):%Y-%m-%d %H:%M:%S}'\n"
        "      f'   {pkl_path.stat().st_size/1e6:.1f} MB')\n"
        "print()\n\n"
        "# available runs, newest first\n"
        "runs = sorted(post_dir.glob('*.pkl'), key=lambda f: f.stat().st_mtime, reverse=True)\n"
        "print(f'{len(runs)} run(s) in post/:')\n"
        "for f in runs[:10]:\n"
        "    mark = ' <-- loaded' if f == pkl_path else ''\n"
        "    print(f'  {datetime.fromtimestamp(f.stat().st_mtime):%Y-%m-%d %H:%M}  {f.name}{mark}')\n"
        "print()\n\n"
        "meta = output_data['meta']\n"
        "settings = output_data.get('settings', {}) or {}\n"
        "cons = meta['config'].get('constraints', {})\n"
        "timing = output_data.get('timing', {}) or {}\n"
        "print(f\"track     {meta.get('track')}\")\n"
        "print(f\"model     {meta.get('model')}   vehicle={settings.get('vehicle')}\")\n"
        "print(f\"tire      {plot_helpers.slip_model(meta['config'])}   slip_peak {cons.get('slip_peak')}\")\n"
        "print(f\"nodes     N={meta.get('N')}  degree={meta.get('degree')}  nx={meta.get('nx')}  nu={meta.get('nu')}\")\n"
        "print(f\"status    {meta.get('status')}   iterations {meta.get('iterCount')}\"\n"
        "      f\"   (exact Hessian from iteration {meta.get('phase2Start')})\")\n"
        "print(f\"lap time  {meta.get('lapTime'):.4f} s\"\n"
        "      + (f\"   (RK4 check {output_data['lapTimeRK4']:.4f} s)\" if output_data.get('lapTimeRK4') is not None else ''))\n"
        "if timing.get('wall') is not None:\n"
        "    print(f\"wall      {timing['wall']:.0f} s   {timing['wall']/max(meta.get('iterCount') or 1, 1):.2f} s/iter\"\n"
        "          f\"   threads={settings.get('threads')}  linear_solver={settings.get('linear_solver')}\")\n"
        "print(f\"frames    {len(output_data.get('frames', []))} (stride {meta.get('stride')})\")\n\n"
        "print('\\nKeys:', list(output_data.keys()))"),
    new_code_cell(
        "# 1) Stackplots: top-5 contributors to inf_pr and inf_du\n"
        "begin_iter = 0  # set >0 to zoom into later iterations\n"
        "fig1, axes1 = plot_top5_infeasibility_stackplot(output_data, begin_iter=begin_iter)\n"
        "plt.show()\n\n"
        "# 2) Final-iteration node profiles with constraint bounds\n"
        "fig2, axes2 = plot_final_iteration_profiles_with_bounds(output_data)\n"
        "plt.show()\n\n"
        "# 3) IPOPT convergence panels\n"
        "fig3, axes3 = plot_ipopt_convergence_panels(output_data)\n"
        "plt.show()"),
    new_code_cell(
        "# 4) Circuit bounds and optimal trajectory\n"
        "fig4, ax4 = plot_track_bounds_with_trajectory(output_data)\n"
        "plt.show()"),
    new_code_cell(
        "# 5) Interactive trace dashboard across all iterations\n"
        "#    (widgets are live only in a running kernel: re-run this cell after opening the notebook)\n"
        "dashboard = plot_iteration_trace_dashboard(output_data)\n"
        "display(dashboard)"),
    new_code_cell(
        "# 6) Speed profile against the initial guess, and the states/controls that\n"
        "#    matter most. Everything is looked up BY NAME -- any state, control or derived\n"
        "#    signal of the pickle works here.\n"
        "fig5, ax5 = plot_speed_and_guess(output_data)\n"
        "plt.show()\n\n"
        "print('states  :', stateNames(output_data))\n"
        "print('controls:', controlNames(output_data))\n\n"
        "# any subset, by name\n"
        "fig6, axes6 = plot_final_iteration_profiles_with_bounds(\n"
        "    output_data, names=['speed', 'n', 'delta', 'drive', 'brake', 'steer'], ncols=2)\n"
        "plt.show()"),
    new_code_cell(
        "# 7) Tire slip use against the limit (formula from the run's tire model: MF or brush)\n"
        "fig7, ax7 = plot_slip_utilisation(output_data)\n"
        "plt.show()"),
    new_code_cell(
        "# 8) Timing: seconds per IPOPT iteration, function evaluations vs linear algebra\n"
        "fig8, axes8 = plot_timing(output_data)\n"
        "plt.show()"),
    new_code_cell(
        "# 9) Fine-RK4 defects per interval along the lap\n"
        "if output_data.get('defects') is not None:\n"
        "    fig9, ax9 = plot_defects_vs_s(output_data)\n"
        "    plt.show()\n"
        "else:\n"
        "    print('no defects in this run')"),
]
nb = new_notebook(cells=cells, metadata={"kernelspec": {"name": "python3", "display_name": "Python 3 (.venv)",
                                                        "language": "python"}})

path.parent.mkdir(parents=True, exist_ok=True)
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
                if count <= 2:   # setup or loading cell (run not found, ...): keep the previous notebook
                    raise SystemExit(c["evalue"])
            elif t == "status" and c["execution_state"] == "idle":
                break
        cell.outputs, cell.execution_count = outputs, count
finally:
    kc.stop_channels(); km.shutdown_kernel(now=True)
nbformat.write(nb, path)
print("wrote", path)
