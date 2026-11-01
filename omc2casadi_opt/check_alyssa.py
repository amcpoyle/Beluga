"""Compare the converted AlyssaVehicle model with the FMU at lap-solution states; timing of both.

    python -m omc2casadi_opt.check_alyssa [--symbolic] [results/<run>.npz ...]

Like omc2casadi.check, but the states come from the saved lap solutions (mapped to the full FMU state) plus
random perturbations of them, controls random in [-1, 1], and the FMU parameter overrides are VehicleFMU's.

The FMU has no exact Jacobian, so the Jacobian test differences BOTH functions with the same central steps
(TOL_SAME_STEP): that compares the conversion, not finite-difference error. The FMU's finite-difference
Jacobian against the converted model's exact one is printed for information only: it is off by ~3e-5
everywhere, and by ~4e-4 where the tire model has a kink (e.g. d fy / d pitch), even for a correct conversion.
"""
import glob
import os
import sys
import time

import casadi as ca
import numpy as np

from fmu_opt.vehicle_fmu import VehicleFMU
from laptime_core.paths import FMU_PATH, REPO
from omc2casadi.check import TOL, compare, load

# same-step central differences of FMU and converted model: the value differences (~1e-12) over the step (1e-6)
TOL_SAME_STEP = 1e-6


def same_step_jacobian_diff(f_a, f_b, x, u, rel=1e-6):
    """max |FD Jacobian of f_a - FD Jacobian of f_b| / max |FD Jacobian of f_a|, both with the same central steps."""
    nx = len(x)
    z = np.r_[x, u]

    def val(f, zz):
        return np.concatenate([np.array(v).ravel() for v in f(zz[:nx], zz[nx:])])

    Ja, Jb = [], []
    for j in range(len(z)):
        h = rel * max(1.0, abs(z[j]))
        zp, zm = z.copy(), z.copy()
        zp[j] += h
        zm[j] -= h
        Ja.append((val(f_a, zp) - val(f_a, zm)) / (2 * h))
        Jb.append((val(f_b, zp) - val(f_b, zm)) / (2 * h))
    Ja, Jb = np.array(Ja), np.array(Jb)
    return float(np.abs(Ja - Jb).max() / max(np.abs(Ja).max(), 1e-12))


def sample_points(veh, files, n_random=400, seed=0):
    rng = np.random.default_rng(seed)
    X = []
    for f in files:
        d = np.load(f, allow_pickle=True)
        names = list(d["state_names"])
        x = np.asarray(d["x"], float)
        # states the solution's model did not have (e.g. suspension added later): design position, 0
        X.append(np.array([x[names.index(n)] if n in names else np.zeros(x.shape[1]) for n in veh.names]).T)
    X = np.vstack(X)
    base = X[rng.choice(len(X), size=min(len(X), n_random), replace=False)]
    pert = base + rng.normal(size=base.shape) * veh.nominal * 0.2
    pts = np.vstack([base, pert])
    U = rng.uniform(-1, 1, size=(len(pts), veh.nu))
    return np.array([veh.full_state(x) for x in pts]), U[:, veh._u_perm]


def _per_point(fun, X, U, n):
    fun(X[0], U[0])
    t = time.perf_counter()
    for k in range(n):
        fun(X[k], U[k])
    return (time.perf_counter() - t) / n


def main(files=None, linear_solver="lapacklu"):
    """linear_solver: as the lap-time runs (VehicleCasadi, numeric solves of >= 20 unknowns); None checks the
    all-symbolic conversion (no pivoting, ~1e-5 on this model)."""
    files = files or [f for f in sorted(glob.glob(os.path.join(REPO, "results", "*.npz")))
                      if "state_names" in np.load(f, allow_pickle=True)]
    veh = VehicleFMU()
    t = time.perf_counter()
    m, unz = load(FMU_PATH)
    # same argument order as the FMU function: states as dae.x(), inputs as dae.u(), outputs as dae.y()
    f = m.function(outputs=veh.y_names, states=veh.fmu_x, inputs=veh.fmu_u, overrides=veh.params,
                   linear_solver=linear_solver, min_size=20)
    print(f"converted in {time.perf_counter() - t:.2f} s: {f}, {f.n_nodes()} nodes, "
          f"{len(m.used_blocks)} of {len(m.blocks)} equation blocks used, linear solver {linear_solver}")

    X, U = sample_points(veh, files)
    print(f"{len(X)} points ({len(files)} lap solutions + perturbations)")
    # reference with CasADi's default central differences: veh.f_fmu uses forward differences (fast enough for
    # the NLP, FMU_FUNCTION_OPTS), whose Jacobian is only ~1e-4 accurate, at the edge of TOL_FD_JACOBIAN
    f_ref = veh.dae.create("fmu_ref", ["x", "u"], ["ode", "y"])
    res = compare(f_ref, f, X, U, [["der(" + s + ")" for s in veh.fmu_x], veh.y_names], n_jac=20)
    print("  (jacobian above: the FMU's finite differences against exact AD; information only, see the docstring)")
    jac_pts = np.linspace(0, len(X) - 1, 20).astype(int)
    jac_same = max(same_step_jacobian_diff(f_ref, f, X[k], U[k]) for k in jac_pts)
    print(f"  jacobian  same-step central differences, FMU vs converted: max relative difference {jac_same:.1e} "
          f"over {len(jac_pts)} points")
    ok = res["ode"] <= TOL and res["y"] <= TOL and jac_same <= TOL_SAME_STEP
    print(f"  {'PASS' if ok else 'FAIL'} (ode, y tolerance {TOL:g}; same-step Jacobian tolerance {TOL_SAME_STEP:g})")

    S = ca.MX if m.numeric_solves else ca.SX  # numeric solves make the function MX
    xs, us = S.sym("x", X.shape[1]), S.sym("u", U.shape[1])
    Jc = ca.Function("Jc", [xs, us], [ca.jacobian(ca.vertcat(*f(xs, us)), ca.vertcat(xs, us))])
    xm, um = ca.MX.sym("x", X.shape[1]), ca.MX.sym("u", U.shape[1])
    Jf = ca.Function("Jf", [xm, um], [ca.jacobian(ca.vertcat(*veh.f_fmu(xm, um)), ca.vertcat(xm, um))])
    print(f"\ntiming per point (single calls, not compiled): eval FMU {_per_point(veh.f_fmu, X, U, 200) * 1e3:.3f} ms, "
          f"converted {_per_point(f, X, U, 200) * 1e3:.4f} ms; Jacobian FMU {_per_point(Jf, X, U, 50) * 1e3:.3f} ms, "
          f"converted {_per_point(Jc, X, U, 200) * 1e3:.4f} ms")
    return ok


if __name__ == "__main__":
    args = sys.argv[1:]
    symbolic = "--symbolic" in args
    files = [a for a in args if a != "--symbolic"]
    raise SystemExit(0 if main(files or None, linear_solver=None if symbolic else "lapacklu") else 1)
