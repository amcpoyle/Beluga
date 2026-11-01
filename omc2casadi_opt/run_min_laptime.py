"""Minimum lap time with the AlyssaVehicle converted to CasADi by omc2casadi (exact derivatives).

    python -m omc2casadi_opt.run_min_laptime

The model comes from the FMU build (fmu/AlyssaVehicle.fmu and its AlyssaVehicle_info.json), so the FMU
must be built, but its runtime is never loaded. Edit SETTINGS below to change the run. Every other
setting, with its documentation, is in laptime_core/runner.py DEFAULTS; add it here to override it.
From Python, main(ds=5.0) overrides single entries. IPOPT settings are in configs/base/solverConfig.json.
"""
from laptime_core import runner
from laptime_core.paths import FMU_PATH

from .vehicle_casadi import VehicleCasadi

# ----------------------------------------------------------------------------------- run settings
SETTINGS = dict(
    vehicle="casadi",         # this path (saved with the run; laptime_core tools reopen runs by it).
                              # Results, npz and plots get a "_casadi" tag
    track="Catalunya",        # track_data/tracks/<track>.csv
    ds=10.0,                  # mesh interval length [m]
    degree=2,                 # Radau collocation degree
    mesh_refinement=False,    # adaptive ph mesh refinement (laptime_core/mesh_refinement.py)
    mesh_tol=1e-3,
    warm=None,                # previous results .npz or post/*.pkl to warm start from, or None
    solver_config=None,       # solver JSON; None = configs/base/solverConfig.json
    fmu=None,                 # FMU build to convert (its _info.json next to it); None = fmu/AlyssaVehicle.fmu
    pedal_rate=10.0,          # max drive/brake pedal rate [1/s] (FMU parameter maxPedalRate)
    fmu_params={},            # FMU parameter overrides, e.g. {"rigController.driveBrakeTorque.tEps": 1.0}
    linear_solver="lapacklu", # "lapacklu" solves the model's linear systems of >= linear_solver_min_size
                              # unknowns numerically (pivoted LU, exact AD through the solve) instead of
                              # symbolically: FMU-level accuracy, far smaller/faster derivatives;
                              # None = all symbolic (the pre-2026-10-13 behaviour)
    linear_solver_min_size=20,
    threads=10,               # threads for the per-point dynamics and derivatives (the points are
                              # independent); each holds its own work memory. Scaling was near ideal up to the
                              # hardware threads on the 24-thread machine (2026-10-15, double wishbone, 2400
                              # points: 28.4 s/iteration at 12 threads, 17.5 s at 24, peak RAM 5.5 GB); this
                              # machine has 16
    name=None,                # post/<name>.pkl; None = <track>_N<N>_<timestamp>
)
# -------------------------------------------------------------------------------------------------


def build_vehicle(args):
    return VehicleCasadi(args.fmu or FMU_PATH, params=runner.fmu_params(args), linear_solver=args.linear_solver,
                         min_size=args.linear_solver_min_size)


def main(**overrides):
    """Run with SETTINGS; keyword arguments override single entries (e.g. main(ds=5.0))."""
    runner.main(SETTINGS, build_vehicle, **overrides)


if __name__ == "__main__":
    main()
