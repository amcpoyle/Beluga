"""AlyssaVehicle FMU (AlyssaModel.Experiments.OptimalControlFMU) loaded into CasADi.

The FMU is a Model Exchange FMU 2.0 built by fmu/build_fmu.mos. CasADi's DaeBuilder wraps it as
a ca.Function f(x[39], u[3]) -> (ode[39], y[20]). The FMU has no directional derivatives (see
fmu/build_fmu.mos), so CasADi finite-differences its Jacobian; omc2casadi_opt/vehicle_casadi.py has
exact derivatives. States, controls and helpers: laptime_core/vehicle.py.
"""
import os
import zipfile

import casadi as ca

from laptime_core.paths import FMU_PATH
from laptime_core.vehicle import DEFAULT_PARAMS, Vehicle

# CasADi FmuFunction options. The FMU provides no derivatives (fmu/build_fmu.mos): its Jacobian is finite
# differences, and the exact-Hessian phase's second derivatives are finite differences of that Jacobian, one perturbed
# Jacobian per input direction (28) at every collocation point, serially. Forward differences: 5.1 ms
# per point instead of 19.4 ms (central, the default), Hessian equal to 9e-8 relative. Jacobians
# (all L-BFGS needs) are unaffected. parallelization="thread" crashes the OpenModelica runtime.
FMU_FUNCTION_OPTS = {"fd_method": "forward"}


class VehicleFMU(Vehicle):
    def __init__(self, fmu_path=FMU_PATH, params=None):
        """params: {FMU parameter name: value} overriding the FMU's start values without a rebuild,
        e.g. {"rigController.driveBrakeTorque.tEps": 1.0}. See DEFAULT_PARAMS."""
        self.fmu_path = fmu_path
        unz = os.path.splitext(fmu_path)[0] + "_unz"
        if not os.path.isdir(unz) or os.path.getmtime(unz) < os.path.getmtime(fmu_path):
            with zipfile.ZipFile(fmu_path) as z:
                z.extractall(unz)
            os.utime(unz)
        self.dae = ca.DaeBuilder("alyssa", unz)
        self.fmu_x = list(self.dae.x())
        self.fmu_u = list(self.dae.u())
        self.y_names = list(self.dae.y())
        self.params = dict(DEFAULT_PARAMS if params is None else params)
        for name, value in self.params.items():
            self.dae.set(name, value)
        self.f_fmu = self.dae.create("f", ["x", "u"], ["ode", "y"], FMU_FUNCTION_OPTS)
        self._setup(ca.MX)
