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
# Combined-slip limit per wheel, brush tire (AlyssaModel.mo TireForces.BrushForces): theoretical slip
# sigma = (kappa, tan(alpha)) / (1 + kappa); the tire is fully sliding at theta*|sigma| = 1 with
# theta = C / (3 mu Fz) ~ 8, so |sigma| = SIGMA_SAT ~ 0.125. theta ~ Fz^-0.05, so the limit barely changes with load
# (default BrushParameters, road mu = 1). Pure-slip peaks: brake kappa -0.111, drive kappa +0.143, alpha 7.1 deg.
# combined_slip_sq(kappa, tanA, (s, s)) = |sigma|^2 / s^2; the OCP and MPC require it <= slip_limit^2.
# Both run at 90% of saturation; with F = mu Fz (1 - (1 - lambda)^3) that is still 99.9% of the peak force.
# MF tire (git history, commit 191de416): ellipse (kappa/0.10)^2 + (tanA/tan 8deg)^2 <= 1 (MPC 0.15, 0.18 rad).
SIGMA_SAT = 0.125
OCP_SIGMA_MAX = 0.9 * SIGMA_SAT
MPC_SIGMA_MAX = OCP_SIGMA_MAX


def combined_slip_sq(kappa, tan_alpha, peak):
    """Brush combined slip squared, rho^2 = ((kappa/peak[0])^2 + (tanA/peak[1])^2) / d^2 with
    d = smoothMax(1 + kappa, d_min = 0.05) as in BrushForces. peak = (sigma_max, sigma_max) gives
    |sigma|^2 / sigma_max^2. Works on numpy arrays and CasADi expressions."""
    a, b = 1 + kappa, 0.05
    d = 0.5 * (a + b + ((a - b) ** 2 + 1e-12) ** 0.5)
    return ((kappa / peak[0]) ** 2 + (tan_alpha / peak[1]) ** 2) / d ** 2


def combined_slip_sq_mf(kappa, tan_alpha, peak):
    """MF-tire combined slip squared (runs before the brush tire): ellipse
    (kappa/peak[0])^2 + (tanA/peak[1])^2, peak = (kappa_max, tan alpha_max)."""
    return (kappa / peak[0]) ** 2 + (tan_alpha / peak[1]) ** 2


# the tire model a run was solved with: saved in its config (lap-time OCP: constraints.slip_model, MPC:
# settings.limits.slip_model). Runs without the key are MF runs.
SLIP_MODEL = "brush"
_SLIP_FORMULAS = {"brush": combined_slip_sq, "mf": combined_slip_sq_mf}


def combined_slip_sq_for(model, kappa, tan_alpha, peak):
    """combined slip squared with the formula of a run's slip_model ("brush" or "mf"; None = "mf")."""
    return _SLIP_FORMULAS[model or "mf"](kappa, tan_alpha, peak)

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
