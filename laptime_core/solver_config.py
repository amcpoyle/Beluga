"""Solver settings from configs/base/solverConfig.json. See the file's "_doc" entries.

    cfg = load_solver_config()                 # configs/base/solverConfig.json
    cfg = load_solver_config("other.json")
    ocp.solve(w0, cfg)
"""
import json
import os

from .paths import REPO

DEFAULT_PATH = os.path.join(REPO, "configs", "base", "solverConfig.json")
_KEYS = {"linearSolver", "ipopt", "lbfgs", "newton"}


def _strip_comments(d):
    return {k: (_strip_comments(v) if isinstance(v, dict) else v) for k, v in d.items() if not k.startswith("_")}


def load_solver_config(path=None):
    path = path or DEFAULT_PATH
    with open(path, encoding="utf-8") as fh:
        cfg = _strip_comments(json.load(fh))
    unknown = set(cfg) - _KEYS
    if unknown:
        raise ValueError(f"{path}: unknown top-level keys {sorted(unknown)} (allowed: {sorted(_KEYS)})")
    if cfg.get("linearSolver", "mumps") not in ("mumps", "structured"):
        raise ValueError(f"{path}: linearSolver must be 'mumps' or 'structured'")
    for k in ("ipopt", "lbfgs", "newton"):
        cfg.setdefault(k, {})
    cfg.setdefault("linearSolver", "mumps")
    cfg["path"] = os.path.abspath(path)
    return cfg
