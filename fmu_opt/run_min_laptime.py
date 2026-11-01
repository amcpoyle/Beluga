"""Minimum lap time with the AlyssaVehicle FMU as the dynamics (finite-difference derivatives).

    python -m fmu_opt.run_min_laptime

Edit SETTINGS below to change the run. Every other setting, with its documentation, is in
laptime_core/runner.py DEFAULTS; add it here to override it. 
Override single entries from Python, ex: main(ds=5.0) to override mesh interval length.
IPOPT settings are in configs/base/solverConfig.json.

Min lap time entry point.
"""
from laptime_core import runner
from laptime_core.paths import FMU_PATH

from .vehicle_fmu import VehicleFMU

# ----------------------------------------------------------------------------------- run settings
SETTINGS = dict(
    vehicle="fmu",            # choose "fmu" or "casadi", label for use elsewhere
    track="Catalunya",
    ds=10.0,                  # mesh interval length [m]
    degree=2,                 # Radau collocation degree
    warm=None,                # warm start file
    solver_config=None,       # solver JSON; None = configs/base/solverConfig.json
    fmu=None,                 # FMU to load; None = fmu/AlyssaVehicle.fmu
    pedal_rate=10.0,          # max drive/brake pedal rate [1/s] (FMU parameter maxPedalRate)
    fmu_params={},            # FMU parameter overrides, e.g. {"rigController.driveBrakeTorque.tEps": 1.0}
    name=None,                # post/<name>.pkl; None = <track>_N<N>_<timestamp>
)
# -------------------------------------------------------------------------------------------------


def build_vehicle(args):
    return VehicleFMU(args.fmu or FMU_PATH, params=runner.fmu_params(args))


def main(**overrides):
    """Run with SETTINGS; keyword arguments override single entries (e.g. main(ds=5.0))."""
    runner.main(SETTINGS, build_vehicle, **overrides)


if __name__ == "__main__":
    main()
