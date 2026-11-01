Get it? Beluga like the whale?

## Repo Structure
- fmu - where the fmu and unzipped fmu are
- fmu_opt - perform direct optimization by evaluating the fmu
- omc2casadi_opt - convert Modelica flattened equations (see json file in fmu directory) into CasADi SX graph via omc2casadi, optimize this
- laptime_core - functions and classes that support optimization, used by both omc2casadi_opt and fmu_opt
- linsolver - where my vibe coded custom linear solver lives. called "structured" in the solverConfig (can switch to MUMPS in config)
- install - contains the omc2casadi wheel that needs to be pip installed for omc2casadi functionality
- track_data - stores CSV files of the open source TUFTM track repo

* Note: IPOPT will say "running with linear solver ma27" when you set the linear solver = "structured" (custom linsolver) but it is actually the custom linear solver. linsolver uses the interface of ma27 to connect to IPOPT/CasADi.

## Example Usage
- Build the FMU: "omc build_fmu.mos"
- Running a minimum lap time sim for FMU converted to CasADi: python -m omc2casadi_opt.run_min_laptime
- Running the MPC:
1) "python -m mpc.workflows.run_mpc" (specify settings in run_mpc)
2) look at the finished run: "python -B mpc/diagnostics/build_run_notebook.py"
mpc/notebooks/RunOverview.ipynb will contain the MPC result and the comparison to an OCP result (which the user points at)
