"""AlyssaVehicle dynamics as CasADi SX, converted from OpenModelica's solved equations (omc2casadi).

Drop-in alternative to fmu_opt.vehicle_fmu.VehicleFMU: same reduced state (laptime_core.vehicle.STATES),
controls, outputs, nominals and helper methods, but `ode` is an SX Function instead of an FMU call. That gives
exact second derivatives (the FMU only has first derivatives; CasADi finite-differences its Jacobian
for the exact-Hessian phase), ~50x cheaper evaluations and Jacobians, and a thread-safe function.

Source is the FMU build: fmu/build_fmu.mos writes AlyssaVehicle_info.json (OMC's sorted,
solved equations) next to AlyssaVehicle.fmu; modelDescription.xml and the start values are read from
inside the .fmu.
Rebuild the FMU after any change to AlyssaModel.mo (repo root); both files then change together.
python -m omc2casadi_opt.check_alyssa compares this model with the FMU (agrees to ~1e-14).
"""
import os

import casadi as ca

from laptime_core.paths import FMU_PATH
from laptime_core.vehicle import DEFAULT_PARAMS, Vehicle
from omc2casadi import OmcModel


class VehicleCasadi(Vehicle):
    """The Vehicle interface (names, i, iy, nominal, offset, ode, xdot, outputs, straight_line_trim, ...)
    with the dynamics converted to CasADi SX. The FMU runtime is never loaded."""

    symbolic = True  # thread-safe CasADi Function with exact derivatives: callers may evaluate it in parallel

    def __init__(self, fmu_path=FMU_PATH, params=None, info_json=None, linear_solver=None, min_size=20):
        """params: {FMU parameter name: value} overriding the independent parameters' start values, as for
        VehicleFMU (calculated parameters are recomputed from them).
        linear_solver: e.g. "lapacklu" to solve the model's linear systems of >= min_size unknowns
        numerically (OmcModel.function); ode is then MX, not expandable to SX (self.expandable)."""
        self.fmu_path = fmu_path
        self.info_json = info_json or os.path.splitext(fmu_path)[0] + "_info.json"
        if not os.path.exists(self.info_json):
            raise FileNotFoundError(f"{self.info_json} not found; rebuild the FMU (cd fmu && omc build_fmu.mos)")
        # both files come from the same OMC build; a much newer FMU means the JSON is stale
        if os.path.getmtime(fmu_path) - os.path.getmtime(self.info_json) > 600:
            raise RuntimeError(f"{self.info_json} is older than {fmu_path}; rebuild the FMU")
        self.model = OmcModel.from_fmu(fmu_path, self.info_json)
        self.params = dict(DEFAULT_PARAMS if params is None else params)

        m = self.model
        self.fmu_x, self.fmu_u, self.y_names = list(m.states), list(m.inputs), list(m.outputs)
        # full FMU state and inputs in FMU order -> (ode, y): same signature as VehicleFMU.f_fmu
        self.f_fmu = m.function("f", overrides=self.params, linear_solver=linear_solver, min_size=min_size)
        self.numeric_solves = m.numeric_solves  # sizes of the systems solved numerically
        self.expandable = not self.numeric_solves  # SX all the way through
        self._setup(ca.SX if self.expandable else ca.MX)
