"""Physical steering/signed-pedal rates -> normalized FMU rate inputs.

No plant states are reset. Each returned command has an exact validity duration
ending at an actuator boundary or pedal zero crossing, whichever comes first.
"""

from dataclasses import dataclass

import numpy as np


@dataclass(frozen=True)
class ActuatorLimits:
    steer_rate: float = 5.0
    pedal_rate: float = 10.0
    steer_angle: float = 0.35

    def __post_init__(self):
        if any(not np.isfinite(v) or v <= 0 for v in vars(self).values()):
            raise ValueError("actuator limits must be finite and positive")


class RateActuator:
    """Keep pedals mutually exclusive starting from an exclusive initial state.

    Input rates: [delta_left_dot, signed_pedal_dot] in rad/s and 1/s.
    Output: [driveRate, brakeRate, steer] normalized to the plant's maxima,
    with steer positive right. Initial overlap up to overlap_tolerance is
    tolerated for numerical reference data: drain the smaller pedal first.
    Such pre-existing overlap is measured, not silently removed from the plant.
    """

    def __init__(self, limits=ActuatorLimits(), *, overlap_tolerance=1e-5):
        self.limits = limits
        if not np.isfinite(overlap_tolerance) or overlap_tolerance < 0:
            raise ValueError("overlap_tolerance must be finite and nonnegative")
        self.overlap_tolerance = overlap_tolerance

    def command(self, delta_sae, drive, brake, requested_rate, max_duration):
        values = np.asarray([delta_sae, drive, brake, max_duration, *requested_rate], float)
        if values.shape != (6,) or not np.all(np.isfinite(values)) or max_duration <= 0:
            raise ValueError("finite actuator states, two rates and positive duration required")
        eps, bound_tol = 1e-12, 1e-7
        limits = self.limits
        if (min(drive, brake) < -bound_tol or max(drive, brake) > 1 + bound_tol
                or abs(delta_sae) > limits.steer_angle + bound_tol):
            raise ValueError("plant actuator states are outside limits")
        if max(0, drive) * max(0, brake) > self.overlap_tolerance + 1e-10:
            raise ValueError("initial pedal overlap exceeds the supported tolerance")
        d, b = np.clip([drive, brake], 0, 1)
        steer = float(np.clip(-requested_rate[0], -limits.steer_rate, limits.steer_rate))
        signed = float(np.clip(requested_rate[1], -limits.pedal_rate, limits.pedal_rate))
        dd, db = 0.0, 0.0
        if d > eps and b > eps:
            # Remove existing numerical overlap before opening either pedal.
            if d >= b:
                db = -limits.pedal_rate
            else:
                dd = -limits.pedal_rate
        elif d > eps:
            dd = signed
        elif b > eps:
            db = -signed
        elif signed > 0:
            dd = signed
        elif signed < 0:
            db = -signed

        duration = float(max_duration)
        rates = [dd, db, steer]
        for j, (position, lo, hi) in enumerate(((d, 0, 1), (b, 0, 1),
                                               (delta_sae, -limits.steer_angle, limits.steer_angle))):
            rate = rates[j]
            distance = hi - position if rate > 0 else position - lo
            if rate and distance <= eps:
                rates[j] = 0.0
            elif rate:
                duration = min(duration, distance / abs(rate))
        if duration <= 0 or not np.isfinite(duration):
            raise RuntimeError("actuator event failed to make positive time progress")
        normalized = np.array([rates[0] / limits.pedal_rate,
                               rates[1] / limits.pedal_rate, rates[2] / limits.steer_rate])
        return duration, normalized
