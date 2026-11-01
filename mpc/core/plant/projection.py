"""Read-only conversion from the existing SAE plant to the left-positive predictor."""

import numpy as np


def split_signed_pedal(tr):
    """Signed POSITION -> drive/brake POSITIONS; this is not a rate-input adapter."""
    tr = np.asarray(tr, dtype=float)
    if not np.all(np.isfinite(tr)) or np.any(np.abs(tr) > 1):
        raise ValueError("signed pedal must be finite and within [-1, 1]")
    return np.maximum(tr, 0), np.maximum(-tr, 0)


def project_plant_state(state, state_names, *, s, path_heading, lateral_offset=None,
                        overlap_tolerance=1e-5, reference_offset=(0.0, 0.0)):
    """Map a physical plant state to [vx, vy, r, s, w, theta, delta, tr].

    state_names uses laptime_core.vehicle's short names; VX/VY are world SAE velocities.
    path_heading is ENU CCW. Supply s and either lateral_offset or a named n
    state from the spatial controller. Steering is the existing roadwheel
    command (unit ratio, ackermann=0 in the current build), sign reversed.

    Significant simultaneous pedals are rejected: drive-brake would discard
    their different torque distributions and hide overlap. No plant state is
    modified, including wheel speed, slip, suspension, or individual pedals.
    reference_offset=(forward, left) shifts velocity to a fixed nominal CoG.
    In that case s, lateral_offset and path_heading must describe that CoG,
    with the position projection performed by the caller.
    """
    names = tuple(state_names)
    values = np.asarray(state, dtype=float).reshape(-1)
    if len(set(names)) != len(names) or values.size != len(names) or not np.all(np.isfinite(values)):
        raise ValueError("state and unique state_names must match and be finite")
    i = {name: k for k, name in enumerate(names)}
    required = {"VX", "VY", "yaw", "r", "delta", "drive", "brake"}
    if lateral_offset is None:
        required.add("n")
    if required - i.keys():
        raise ValueError(f"missing plant states: {sorted(required - i.keys())}")
    if not np.isfinite(overlap_tolerance) or overlap_tolerance < 0:
        raise ValueError("overlap_tolerance must be finite and nonnegative")
    drive, brake = values[i["drive"]], values[i["brake"]]
    if not 0 <= drive <= 1 or not 0 <= brake <= 1:
        raise ValueError("plant pedal positions must lie in [0, 1]")
    if drive * brake > overlap_tolerance:
        raise ValueError("plant pedal overlap cannot be represented by a signed pedal")
    yaw, vx_world, vy_world = values[i["yaw"]], values[i["VX"]], values[i["VY"]]
    vx = vx_world * np.cos(yaw) + vy_world * np.sin(yaw)
    vy = vx_world * np.sin(yaw) - vy_world * np.cos(yaw)
    forward, left = _offset(reference_offset)
    r = -values[i["r"]]
    vx, vy = vx - r * left, vy + r * forward
    theta = -yaw - path_heading
    theta = np.arctan2(np.sin(theta), np.cos(theta))
    w = values[i["n"]] if lateral_offset is None else lateral_offset
    result = np.array([vx, vy, -values[i["r"]], s, w, theta,
                       -values[i["delta"]], drive - brake], dtype=float)
    if not np.all(np.isfinite(result)):
        raise ValueError("progress, path heading and lateral offset must be finite")
    return result


def _offset(reference_offset):
    offset = np.asarray(reference_offset, dtype=float)
    if offset.shape != (2,) or not np.all(np.isfinite(offset)):
        raise ValueError("reference_offset must contain finite forward/left distances")
    return offset


def project_plant_derivatives(state, derivative, state_names, *, reference_offset=(0.0, 0.0)):
    """Return [vx_dot, vy_dot, r_dot] in the rotating left-positive yaw frame.

    Rotating inertial acceleration alone is NOT the derivative of body velocity:
    the yaw-rate terms below are required. A fixed nominal CoG offset also adds
    yaw-acceleration terms. Actual suspension-dependent CoG motion is omitted.
    """
    names = tuple(state_names)
    state, derivative = np.asarray(state, float), np.asarray(derivative, float)
    if (len(set(names)) != len(names) or state.shape != (len(names),)
            or derivative.shape != state.shape or not np.all(np.isfinite(state))
            or not np.all(np.isfinite(derivative))):
        raise ValueError("finite state/derivative vectors must match unique state_names")
    i = {n: j for j, n in enumerate(names)}
    required = {"VX", "VY", "yaw", "r"}
    if required - i.keys():
        raise ValueError(f"missing plant states: {sorted(required - i.keys())}")
    yaw, r_sae = state[i["yaw"]], state[i["r"]]
    vx = state[i["VX"]] * np.cos(yaw) + state[i["VY"]] * np.sin(yaw)
    vy = state[i["VX"]] * np.sin(yaw) - state[i["VY"]] * np.cos(yaw)
    dvx = derivative[i["VX"]] * np.cos(yaw) + derivative[i["VY"]] * np.sin(yaw) - r_sae * vy
    dvy = derivative[i["VX"]] * np.sin(yaw) - derivative[i["VY"]] * np.cos(yaw) + r_sae * vx
    dr = -derivative[i["r"]]
    forward, left = _offset(reference_offset)
    return np.array([dvx - dr * left, dvy + dr * forward, dr])
