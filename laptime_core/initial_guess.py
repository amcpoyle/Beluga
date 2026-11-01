"""Initial guess for the lap time OCP.

1. qss_speed_profile: point-mass, g-g-v speed profile along the centerline (forward/backward pass).
2. simulate_lap: closed-loop time-domain simulation of the FMU with a simple driver (pure pursuit
   steering + speed tracking of the scaled QSS profile).
"""
import numpy as np

from .vehicle import WHEELS

G = 9.81


def qss_speed_profile(track, s, m=768.0, mu_lat=1.5, mu_long=1.4, c_lift=3.06, c_drag=0.735,
                      power=745.7e3 * 0.9, rear_load=0.53, v_max=100.0):
    """Quasi-steady-state speed on the grid s (uniform, periodic). Defaults match AlyssaModel.parameters."""
    k = np.abs(track.kappa(s))
    ds = np.diff(s).mean()
    den = m * k - mu_lat * c_lift
    v_lat = np.where(den > 1e-9, np.sqrt(mu_lat * m * G / np.maximum(den, 1e-9)), v_max)
    v_lat = np.minimum(v_lat, v_max)

    def ax_room(v, ki, mu_x, frac):
        fz = m * G + c_lift * v**2
        ay = v**2 * ki
        ay_max = mu_lat * fz / m
        return mu_x * frac * fz / m * np.sqrt(np.clip(1 - (ay / ay_max) ** 2, 0, 1))

    n = len(s)
    v = v_lat.copy()
    for _ in range(2):  # two sweeps handle the periodic wrap
        for j in range(2 * n):  # forward: acceleration limit
            a, b = j % n, (j + 1) % n
            va = v[a]
            acc = min(ax_room(va, k[a], mu_long, rear_load), power / (m * max(va, 1.0))) - c_drag * va**2 / m
            v[b] = min(v[b], np.sqrt(max(va**2 + 2 * acc * ds, 0.0)))
        for j in range(2 * n, 0, -1):  # backward: braking limit
            a, b = j % n, (j - 1) % n
            va = v[a]
            dec = ax_room(va, k[a], mu_long, 1.0) + c_drag * va**2 / m
            v[b] = min(v[b], np.sqrt(va**2 + 2 * dec * ds))
    return v


def _sae_to_enu(veh, x):
    i = veh.i
    return -x[i["yaw"]], x[i["VX"]], -x[i["VY"]]  # yaw_enu, vx_enu, vy_enu


def simulate_lap(veh, track, v_ref_fn, laps=2.0, dt=2e-3, wheelbase=3.6, steer_rate_max=5.0,
                 delta_max=0.35, kp_speed=0.6, preview=0.3, pedal_rate_max=10.0, verbose=True):
    """Closed-loop simulation from s = 0 for `laps` laps. Returns dict of time histories.

    The FMU world position is not part of the reduced state, so X/Y (ENU) are integrated here.
    """
    i = veh.i
    s0 = 0.0
    th0 = track.theta(s0)
    x, u = veh.straight_line_trim(v_ref_fn(s0), yaw=-th0)  # SAE yaw = -ENU heading
    pos = track.xy(s0).astype(float)
    s_track = s0
    n_steps = int(laps * track.length / max(v_ref_fn(0.0), 10.0) / dt) * 5
    out = {k: [] for k in ("t", "x", "u", "s", "n", "X", "Y")}
    t = 0.0

    def f(xx, uu):
        xd = veh.xdot(xx, uu)
        _, vx_e, vy_e = _sae_to_enu(veh, xx)
        return xd, np.array([vx_e, vy_e])

    for step in range(n_steps):
        s_track, n = track.project(pos[0], pos[1], s_track)
        if s_track - s0 >= laps * track.length:
            break
        yaw_e, vx_e, vy_e = _sae_to_enu(veh, x)
        v = np.hypot(vx_e, vy_e)

        # pure pursuit on the centerline (ENU, + = left), then SAE steer (+ = right)
        look = max(8.0, 0.6 * v)
        tgt = track.xy(s_track + look)
        dxy = tgt - pos
        alpha = np.arctan2(dxy[1], dxy[0]) - yaw_e
        alpha = (alpha + np.pi) % (2 * np.pi) - np.pi
        delta_cmd = -np.arctan(2 * wheelbase * np.sin(alpha) / np.hypot(*dxy))
        delta_cmd = np.clip(delta_cmd, -delta_max, delta_max)
        u_steer = np.clip((delta_cmd - x[i["delta"]]) / (steer_rate_max * 0.05), -1, 1)

        v_ref = v_ref_fn(s_track + preview * v)
        vx_body = vx_e * np.cos(yaw_e) + vy_e * np.sin(yaw_e)
        u_thr = np.clip(kp_speed * (v_ref - vx_body), -1, 1)
        # simple ABS / traction control: back the pedal target off once any (rear, for drive) wheel's
        # slip passes the tire peak (|kappa| ~ 0.1), so the guess lap does not lock or spin a wheel
        k_brake = max(-min(x[i[f"kappa{w}"]] for w in ("FL", "FR", "RL", "RR")), 0.0)
        k_drive = max(max(x[i[f"kappa{w}"]] for w in ("RL", "RR")), 0.0)
        target_brake = max(-u_thr, 0.0) * np.clip(1.0 - (k_brake - 0.08) / 0.04, 0.0, 1.0)
        target_drive = max(u_thr, 0.0) * np.clip(1.0 - (k_drive - 0.08) / 0.04, 0.0, 1.0)
        # pedal positions are FMU states driven by rate inputs, so track the target pedals like the steer
        u_drive = np.clip((target_drive - x[i["drive"]]) / (pedal_rate_max * 0.05), -1, 1)
        u_brake = np.clip((target_brake - x[i["brake"]]) / (pedal_rate_max * 0.05), -1, 1)
        u = np.array([u_drive, u_brake, u_steer])  # FMU inputs: drive rate, brake rate, steer rate

        out["t"].append(t); out["x"].append(x.copy()); out["u"].append(u.copy())
        out["s"].append(s_track); out["n"].append(n); out["X"].append(pos[0]); out["Y"].append(pos[1])

        # RK4 on (reduced state, ENU position)
        k1, p1 = f(x, u)
        k2, p2 = f(x + 0.5 * dt * k1, u)
        k3, p3 = f(x + 0.5 * dt * k2, u)
        k4, p4 = f(x + dt * k3, u)
        x = x + dt / 6 * (k1 + 2 * k2 + 2 * k3 + k4)
        pos = pos + dt / 6 * (p1 + 2 * p2 + 2 * p3 + p4)
        t += dt
        if not np.all(np.isfinite(x)) or abs(n) > 1.5 * max(track.w_left(s_track), track.w_right(s_track)):
            if verbose:
                print(f"  simulation left the track / diverged at s = {s_track:.1f} m, t = {t:.2f} s")
            break
        if verbose and step % 5000 == 0:
            print(f"  t = {t:6.2f} s  s = {s_track:7.1f} m  v = {v:5.1f} m/s  n = {n:5.2f} m")
    return {k: np.array(val) for k, val in out.items()}


def resample_on_s(sim, s_query, lap_start):
    """Interpolate a simulation (monotone in s) onto s_query + lap_start. Returns x (nx, M), u (nu, M), n (M)."""
    s = sim["s"] - lap_start
    keep = np.r_[True, np.diff(s) > 1e-9]
    s = s[keep]
    xq = np.array([np.interp(s_query, s, col) for col in sim["x"][keep].T])
    uq = np.array([np.interp(s_query, s, col) for col in sim["u"][keep].T])
    nq = np.interp(s_query, s, sim["n"][keep])
    tq = np.interp(s_query, s, sim["t"][keep])
    return xq, uq, nq, tq


def fill_suspension_states(veh, track, names, X, U, s, periodic=True, threads=1, tol=1e-10):
    """Convert a solution from another model (e.g. rigid-corner) to veh's state layout, filling in
    any missing suspension states.

    Args:
        names: source state names, including "n".
        X: source states, shape (len(names), M).
        U: source controls, shape (3, M).
        s: increasing arc lengths, shape (M,); on [0, L) if periodic.

    Returns:
        Array of shape (veh.nx + 1, M), ordered as veh.names + ["n"].

    States shared with the source are copied. Missing wishbone arm angles (ucaXX), together with
    heave, pitch and roll, are solved quasi-statically per point (Newton iteration for zero
    acceleration, other states held fixed). Their rates are then d(state)/ds * sdot.
    Raises ValueError if any other state is missing."""
    from .vehicle import OPTIONAL_STATES
    src = {nm: k for k, nm in enumerate(names)}
    out_names = list(veh.names) + ["n"]
    missing = [nm for nm in out_names if nm not in src]
    if set(missing) - OPTIONAL_STATES:
        raise ValueError(f"cannot fill states {sorted(set(missing) - OPTIONAL_STATES)} from the source")
    s, X, U = np.asarray(s, float), np.asarray(X, float), np.asarray(U, float)
    M = s.size
    Y = np.zeros((len(out_names), M))
    for k, nm in enumerate(out_names):
        if nm in src:
            Y[k] = X[src[nm]]
    corners = [w for w in WHEELS if f"uca{w}" in missing]
    if not corners:
        return Y
    i = veh.i
    ia = [i[f"uca{w}"] for w in corners] + [i["z"], i["pitch"], i["roll"]]
    rows = [i[f"wUca{w}"] for w in corners] + [i["vz"], i["q"], i["p"]]
    rates = [(i[f"uca{w}"], i[f"wUca{w}"]) for w in corners] + [(i["z"], i["vz"]), (i["pitch"], i["q"]),
                                                                  (i["roll"], i["p"])]
    import casadi as ca
    S = ca.SX if getattr(veh, "expandable", False) else ca.MX
    xs, us = S.sym("x", veh.nx), S.sym("u", veh.nu)
    res = veh.ode(xs, us)[0][rows]
    F = ca.Function("arm_balance", [xs, us], [res, ca.jacobian(res, xs)[:, ia]])
    Fm = F.map(M, "thread", threads) if threads > 1 and getattr(veh, "symbolic", False) else F.map(M)
    x = Y[:veh.nx].copy()
    x[rows] = 0.0
    for _ in range(30):
        r, J = (np.array(v) for v in Fm(x, U))
        # J is (len(rows), len(ia) * M): one square block per point
        J = J.reshape(len(rows), M, len(ia)).transpose(1, 0, 2)
        dz = -np.linalg.solve(J, r.T[:, :, None])[:, :, 0].T
        x[ia] += dz
        if np.abs(dz).max() < tol:
            break
    else:
        print(f"fill_suspension_states: quasi-static balance not converged (last step {np.abs(dz).max():.1e})")
    Y[ia] = x[ia]
    # rates from the slope of the angles / heave along s, times sdot
    th, kap = track.theta(s), track.kappa(s)
    sdot = (Y[i["VX"]] * np.cos(th) - Y[i["VY"]] * np.sin(th)) / (1 - Y[-1] * kap)
    for a, b in rates:
        if periodic:
            ss, aa = np.r_[s[-1] - track.length, s, s[0] + track.length], np.r_[Y[a, -1], Y[a], Y[a, 0]]
            slope = np.gradient(aa, ss)[1:-1]
        else:
            slope = np.gradient(Y[a], s)
        Y[b] = slope * sdot
    return Y
