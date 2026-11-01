"""The structured solver behind the MA27 calling sequence, for IPOPT.

IPOPT (3.14, as bundled with CasADi) loads HSL routines from a library at run time. cpp/stagesolver.dll
exports ma27id/ad/bd/cd backed by the structured solver (cpp/ma27.cpp), so the IPOPT options

    linear_solver           ma27
    hsllib                  <path of stagesolver.dll>
    linear_system_scaling   none

run IPOPT on it. ma27ad sees only the sparsity pattern, so what it cannot see -- IPOPT's block sizes,
the mesh stage of every variable and the periodicity rows -- comes from a layout file named by the
environment variable LINSOLVER_SETUP. The DLL builds the stage structure from it (cpp/symbolic.cpp).
Threads: LINSOLVER_THREADS (default 4); results are identical for any count.
"""
import os
import tempfile

import numpy as np

from .build import build

MAGIC = b"LSSETUP1"


def useStructured(ocp, path=None, tau=1e4, threads=None):
    """Switch an OCP's IPOPT solve to this solver: write its layout (to path, or the temp directory),
    point LINSOLVER_SETUP at it, and return the IPOPT options to merge."""
    path = path or os.path.join(tempfile.gettempdir(), "linsolver_layout_%d.lss" % os.getpid())
    writeLayout(path, layoutFromOcp(ocp), tau=tau)
    os.environ["LINSOLVER_SETUP"] = path
    if threads is not None:
        os.environ["LINSOLVER_THREADS"] = str(int(threads))
    return {"linear_solver": "ma27", "hsllib": build(), "linear_system_scaling": "none"}


def layoutFromOcp(ocp):
    """The layout of a built OCP (needs Xidx, periodicRows, lbw, ubw, lbg, ubg), before it is solved."""
    return layoutFromProblem(np.asarray(ocp.Xidx), np.asarray(getattr(ocp, "periodicRows", []), dtype=np.int64),
                             ocp.lbw, ocp.ubw, ocp.lbg, ocp.ubg)


def layoutFromProblem(Xidx, periodicRows, lbw, ubw, lbg, ubg):
    """The layout, in IPOPT's order: x = the NLP variables that are not fixed (fixed_variable_treatment
    make_parameter, IPOPT's default), c = rows with lbg == ubg, d = the others, each in NLP order; one
    slack per d row. Xidx[k, 0]: the first NLP variable of stage k."""
    lbw, ubw, lbg, ubg = (np.asarray(v, dtype=float) for v in (lbw, ubw, lbg, ubg))
    xVar = np.flatnonzero(lbw != ubw)
    eq = lbg == ubg
    cRows, dRows = np.flatnonzero(eq), np.flatnonzero(~eq)
    starts = np.asarray(Xidx)[:, 0]
    varStage = np.searchsorted(starts, xVar, side="right") - 1
    if (varStage < 0).any():
        raise ValueError("%d variables come before stage 0" % int((varStage < 0).sum()))
    rows = np.concatenate([cRows, dRows])
    rowBorder = np.isin(rows, np.asarray(periodicRows)).astype(np.int64)
    return dict(nx=xVar.size, ns=dRows.size, nc=cRows.size, nd=dRows.size, N=int(starts.size),
                varStage=varStage.astype(np.int64), rowBorder=rowBorder)


def writeLayout(path, layout, tau=1e4, slack=0.5):
    """A layout file for ma27ad (the DLL does the rest)."""
    arrays = {k: np.atleast_1d(np.asarray(layout[k], dtype=np.int64))
              for k in ("nx", "ns", "nc", "nd", "N", "varStage", "rowBorder")}
    arrays["tau"] = np.array([float(tau)])
    arrays["slack"] = np.array([float(slack)])
    return _writeArrays(path, arrays)


def _writeArrays(path, arrays):
    """The container ma27ad reads: "LSSETUP1", a count, then per array its name (24 bytes),
    type (0 int64, 1 float64), length and data."""
    with open(path, "wb") as fh:
        fh.write(MAGIC)
        fh.write(np.int64(len(arrays)).tobytes())
        for name, v in arrays.items():
            v = np.ascontiguousarray(v)
            real = v.dtype.kind == "f"
            v = v.astype(np.float64 if real else np.int64)
            fh.write(name.encode().ljust(24, b"\0"))
            fh.write(np.int64(1 if real else 0).tobytes())
            fh.write(np.int64(v.size).tobytes())
            fh.write(v.tobytes())
    return path
