"""The double-wishbone setup the clean MPC drives: track, lap-time OCP reference, road profiles,
plant and start state.

"""

import json
from pathlib import Path
from types import SimpleNamespace

import numpy as np

from .plant.actuation import ActuatorLimits, RateActuator
from .predictor.bicycle import load_predictor
from .helpers.paths import ROOT, from_record
from .plant.plant import TimePlant
from .plant.reference import LapReference, RoadProfiles

PLANT = ROOT/"mpc/config/plant.json"  # the plant's actuator limits, step, car half-width and track margin
PREDICTOR = ROOT/"mpc/config/wheel_predictor.json"  # the MPC's internal model
# The default lap-time OCP solution the MPC tracks: python -m omc2casadi_opt.run_min_laptime (ds = 10) writes it.
REFERENCE = ROOT/"results/Catalunya_ds10_casadi.npz"
START_S = 650.  # [m] the plant starts from the reference's OCP state here


def load_case(plant_path=PLANT, reference_path=REFERENCE, start_s=START_S):
    from laptime_core.track import Track
    from omc2casadi_opt.vehicle_casadi import VehicleCasadi
    from laptime_core.vehicle import PEDAL_RATE_PARAM

    reference_path = from_record(reference_path)
    if not reference_path.exists():
        raise FileNotFoundError(f"{reference_path} missing: run python -m omc2casadi_opt.run_min_laptime first")
    config = json.loads(Path(plant_path).read_text(encoding="utf-8"))
    limits = ActuatorLimits(**config["actuator_limits"])
    offset = load_predictor(PREDICTOR).reference_offset
    vehicle = VehicleCasadi(params={PEDAL_RATE_PARAM: limits.pedal_rate}, linear_solver="lapacklu")
    track = Track(ROOT/"track_data/tracks/Catalunya.csv", smoothing=50.)
    reference = LapReference(reference_path, vehicle, track, offset)
    profiles = RoadProfiles(track, reference)
    plant = TimePlant(vehicle, track, profiles, actuator=RateActuator(limits), max_step=config["plant_step"],
                      car_half_width=config["car_half_width"], track_margin=config["track_margin"])
    return SimpleNamespace(limits=limits, vehicle=vehicle, track=track, ref=reference, profiles=profiles,
                           plant=plant, initial=ocp_plant_state(reference, vehicle, start_s))


def ocp_plant_state(reference, vehicle, s):
    """Full plant state [vehicle states, s, n] of the lap-time OCP solution at s (the reference's
    interpolated states and offset n)."""
    z = reference.state(s)
    state = np.r_[z[:-1], s, z[-1]]
    drive, brake = vehicle.i["drive"], vehicle.i["brake"]
    state[[drive, brake]] = np.clip(state[[drive, brake]], 0, 1)  # spline overshoot must not leave [0, 1]
    # the predictor has one signed pedal, so release the lighter one of any interpolated overlap
    state[brake if state[drive] >= state[brake] else drive] = 0.
    return state
