"""
Model: AlyssaModel.Experiments.OptimalControlFMU
Model is built by fmu/build_fmu.mos.
Two subclasses of Vehicle evaluate it:
    fmu_opt/vehicle_fmu.py           VehicleFMU: the FMU itself through CasADi (finite-difference Jacobian)
    omc2casadi_opt/vehicle_casadi.py VehicleCasadi: the FMU converted to CasADi (exact derivatives)

Both give a ca.Function f(x_full, u) -> (ode, y) over the full FMU state 
This module holds everything else: the state selection, nominals, controls and parameter names, and the helper methods.
FMU coordinates are SAE

Lap time optimization uses the dynamic states only
    --Excludes world position (longitudinal.s, lateral.s) and wheel rotation angles
"""
import casadi as ca
import numpy as np

WHEELS = ("FL", "FR", "RL", "RR")

# short name -> (FMU variable, nominal magnitude, offset) ; scaled = (x - offset) / nominal
STATES = {
    "z": ("rig.motion.heave.s", 0.003, -0.32),          # chassis height, SAE z (down) [m]
    "vz": ("rig.motion.heave.v", 0.12, 0.0),             # [m/s]
    "VX": ("rig.motion.longitudinal.v", 1.1, 0.0),      # world-frame velocity, X [m/s]
    "VY": ("rig.motion.lateral.v", 1.1, 0.0),           # world-frame velocity, Y (SAE: Y = -north) [m/s]
    "pitch": ("rig.motion.pitch.phi", 0.0036, 0.0),      # [rad]
    "q": ("rig.motion.pitch.w", 0.36, 0.0),             # [rad/s]
    "roll": ("rig.motion.roll.phi", 0.012, 0.0),         # [rad]
    "p": ("rig.motion.roll.w", 0.86, 0.0),               # [rad/s]
    "yaw": ("rig.motion.yaw.phi", 0.035, 0.0),           # SAE yaw, + = clockwise from above [rad]
    "r": ("rig.motion.yaw.w", 1.4, 0.0),               # [rad/s]
    "delta": ("rigController.steerSmoothing.delta", 0.09, 0.0),  # steer angle command [rad]
    "drive": ("rigController.pedalSmoothing.drive", 0.3, 0.0),   # drive pedal, 0 .. 1 of available torque
    "brake": ("rigController.pedalSmoothing.brake", 0.23, 0.0),   # brake pedal, 0 .. 1 of maximum torque
}

# settings states and nominals for each wheel, slip dynamics, etc.
_AXLE = {"FL": "F", "FR": "F", "RL": "R", "RR": "R"}
for _w in WHEELS:
    STATES[f"w{_w}"] = (f"vehicle.wheel{_w}.rim.rotor1D.w",
                        {"F": 23.0, "R": 29.0}[_AXLE[_w]], 0.0)          # wheel spin [rad/s]
for _w in WHEELS:
    STATES[f"kappa{_w}"] = (f"vehicle.wheel{_w}.slipDynamics.kappa",
                            {"F": 0.15, "R": 0.19}[_AXLE[_w]], 0.0)          # slip ratio [-]
for _w in WHEELS:
    STATES[f"tanAlpha{_w}"] = (f"vehicle.wheel{_w}.slipDynamics.tanAlpha",
                               {"F": 0.23, "R": 0.16}[_AXLE[_w]], 0.0)       # tan(slip angle)

# double wishbone corners: upper control arm angle about its chassis pivot (0 = design position) and rate.
_CORNER = {"FL": "frontSuspension.cornerL", "FR": "frontSuspension.cornerR",
           "RL": "rearSuspension.cornerL", "RR": "rearSuspension.cornerR"}
for _w in WHEELS:
    STATES[f"uca{_w}"] = (f"vehicle.{_CORNER[_w]}.ucaPivot.phi", 0.02, 0.0)    # [rad]
for _w in WHEELS:
    STATES[f"wUca{_w}"] = (f"vehicle.{_CORNER[_w]}.ucaPivot.w", 0.5, 0.0)     # [rad/s]

# TODO: this is pretty specific and maybe need to rethink how this stuff is coded in for more
# TODO: general models
# states only some model versions have (the rigid-corner builds have no suspension states); the others
# must be in every FMU
OPTIONAL_STATES = {f"{k}{_w}" for k in ("uca", "wUca") for _w in WHEELS}


def state_names(fmu_x):
    """The STATES this FMU has (in STATES order): the required states and the optional states."""
    missing = [n for n, v in STATES.items() if v[0] not in fmu_x and n not in OPTIONAL_STATES]
    if missing:
        raise KeyError(f"FMU lacks required states {missing}")
    return [n for n, v in STATES.items() if v[0] in fmu_x]

# FMU parameter overrides applied by default (no FMU rebuild needed), e.g.
# {"rigController.driveBrakeTorque.tEps": 1.0}
DEFAULT_PARAMS = {}
PEDAL_RATE_PARAM = "rigController.pedalSmoothing.vehicleParams.maxPedalRate"  # [1/s]
# Combined-slip limits per wheel: (kappa/kappa_max)^2 + (tan(alpha)/tan(alpha_max))^2 <= 1, each maximum with the other slip zero.
# The tire model peaks at kappa 0.10-0.11 and alpha 8-9 deg depending on load (AlyssaModel.mo MFForces). The lap-time OCP stays
# at the high-load peak, so its line is one the MPC can follow; past the peak the wheel-spin dynamics are unstable, and limits
# of 0.15 and 0.18 rad gave a line with slip spikes that the MPC could not finish a lap on. The MPC's own limits are wider, so
# that it has slip to recover with when the plant is off the line.
OCP_KAPPA_MAX = 0.10
OCP_ALPHA_MAX = float(np.radians(8.0))   # [rad]
MPC_KAPPA_MAX = 0.15
MPC_ALPHA_MAX = 0.18                     # [rad]

# FMU inputs in the order used on the Python side, all rates in -1 .. 1:
# driveRate, brakeRate: pedal rates as a fraction of maxPedalRate
# (the pedal POSITIONS drive/brake are FMU states, PedalSmoothing; wheel torque is linear in each); 
# steer: steer rate (+ = right).
# The FMU output "pedal" = drive - brake is the single-pedal equivalent.
CONTROLS = ("driveRate", "brakeRate", "steer")


class Vehicle:
    """
    Parent class for extending to two subclasses which get invoked: VehicleFMU and VehicleCasadi
    """

    # VehicleCasadi sets this to true
    symbolic = False  # True: ode is a thread-safe CasADi Function, callers may evaluate it in parallel

    def _setup(self, sym=ca.MX):
        """
        Creates attributes that can be accessed later on
        """
        self.names = state_names(self.fmu_x)
        self.nx, self.nu, self.ny = len(self.names), len(CONTROLS), len(self.y_names)
        self.i = {n: k for k, n in enumerate(self.names)}
        self.iy = {n: k for k, n in enumerate(self.y_names)}
        self.nominal = np.array([STATES[n][1] for n in self.names])
        self.offset = np.array([STATES[n][2] for n in self.names])

        # selection matrices between reduced and full FMU state, and control reordering
        self._red_idx = [self.fmu_x.index(STATES[n][0]) for n in self.names] # idx of reduced state
        self._u_perm = [CONTROLS.index(n) for n in self.fmu_u] # controls reordering

        x, u = sym.sym("x", self.nx), sym.sym("u", self.nu)
        ode, y = self.f_fmu(self.full_state(x), u[self._u_perm])
        self.ode = ca.Function("ode", [x, u], [ode[self._red_idx], y], ["x", "u"], ["xdot", "y"])
        self.r_eff = 0.33  # OptimalControlWheel.rEff default, TODO: hard-coded bad

    def full_state(self, xr):
        """Reduced state -> full FMU state (world position and wheel angles set to zero)."""
        full = [0] * len(self.fmu_x)
        for k, j in enumerate(self._red_idx):
            full[j] = xr[k]
        return ca.vertcat(*full) if isinstance(xr, (ca.MX, ca.SX)) else np.array(full, float)

    def scale(self, x):
        """
        IPOPT scaling
        """
        return (np.asarray(x) - self.offset[:, None] if np.ndim(x) == 2 else np.asarray(x) - self.offset) / (
            self.nominal[:, None] if np.ndim(x) == 2 else self.nominal)

    def unscale(self, xs):
        if np.ndim(xs) == 2:
            return np.asarray(xs) * self.nominal[:, None] + self.offset[:, None]
        return np.asarray(xs) * self.nominal + self.offset

    def xdot(self, x, u):
        r = self.ode(x, u)
        return np.array(r[0]).ravel()

    def outputs(self, x, u):
        r = self.ode(x, u)
        return np.array(r[1]).ravel()

    def straight_line_trim(self, v, yaw=0.0, tol=1e-9):
        """Steady straight-line state at speed v (heading yaw, SAE), including the drive pedal
        position that holds it. The inputs (pedal and steer RATES) are zero in steady state."""
        i = self.i
        x = np.zeros(self.nx)
        x[i["z"]] = -0.3224
        x[i["yaw"]] = yaw
        x[i["VX"]], x[i["VY"]] = v * np.cos(yaw), v * np.sin(yaw)
        x[i["drive"]] = 0.05
        for w in WHEELS:
            x[i[f"w{w}"]] = v / self.r_eff
        u = np.zeros(self.nu)
        # suspension (if the model has it): arm angles unknown, arm accelerations zero
        susp = [w for w in WHEELS if f"uca{w}" in i]
        unknown = ([i["z"], i["pitch"]] + [i[f"w{w}"] for w in WHEELS] + [i[f"kappa{w}"] for w in WHEELS]
                   + [i[f"uca{w}"] for w in susp] + [i["drive"]])
        rows = ([i["vz"], i["q"]] + [i[f"w{w}"] for w in WHEELS] + [i[f"kappa{w}"] for w in WHEELS]
                + [i[f"wUca{w}"] for w in susp])
        # longitudinal balance along the heading: d/dt (VX cos + VY sin) = 0
        xs = ca.MX.sym("x", self.nx)
        xd = self.ode(xs, u)[0]
        res = ca.vertcat(xd[rows], xd[i["VX"]] * np.cos(yaw) + xd[i["VY"]] * np.sin(yaw))
        F = ca.Function("F", [xs], [res, ca.jacobian(res, xs)])
        for _ in range(50):
            r, J = F(x)
            J = np.array(J)[:, unknown]
            dz = -np.linalg.solve(J, np.array(r).ravel())
            step = min(1.0, 0.5 / max(1e-12, np.abs(dz[-1])))  # keep drive pedal steps sane
            x[unknown] += step * dz
            if np.abs(dz).max() < tol:
                break
        return x, u


def vehicle_from_settings(settings, params):
    """The vehicle a saved run used (its settings dict): VehicleCasadi for vehicle="casadi" runs,
    otherwise VehicleFMU (runs before 2026-10-13 have no "vehicle" setting: the FMU)."""
    from .paths import FMU_PATH
    fmu_path = settings.get("fmu") or FMU_PATH
    if settings.get("vehicle") == "casadi":
        from omc2casadi_opt.vehicle_casadi import VehicleCasadi
        return VehicleCasadi(fmu_path, params=params, linear_solver=settings.get("linear_solver"),
                             min_size=settings.get("linear_solver_min_size", 20))
    from fmu_opt.vehicle_fmu import VehicleFMU
    return VehicleFMU(fmu_path, params=params)
