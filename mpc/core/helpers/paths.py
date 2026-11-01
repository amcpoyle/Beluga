"""Stable repository and source locations for run provenance after reorganization."""

from pathlib import Path


ROOT = Path(__file__).resolve().parents[3]  # the repository (Beluga); this file is mpc/core/helpers/paths.py
PACKAGE = ROOT/"mpc"
RUNS = PACKAGE/"results"/"runs"  # closed-loop MPC runs (workflows/run_mpc.py, run_mpc_parallel.py)


def in_repo(path):
    """A path as saved records name it: relative to the repository, so a record survives a clone."""
    path = Path(path).resolve()
    return path.relative_to(ROOT) if path.is_relative_to(ROOT) else path


def from_record(path):
    """A path from a saved record or a setting, absolute: relative paths are in the repository. A record saved
    with another checkout's absolute path falls back to the file of that name in results/."""
    path = ROOT/path
    return path if path.exists() or not (ROOT/"results"/path.name).exists() else ROOT/"results"/path.name


def source_path(filename):
    """Find one source by basename, rejecting missing or ambiguous provenance."""
    if Path(filename).name != filename:
        raise ValueError("source_path expects a filename, not a path")
    matches = [directory / filename for directory in
               (PACKAGE/"core", PACKAGE/"core"/"helpers", PACKAGE/"core"/"plant", PACKAGE/"core"/"predictor",
                PACKAGE/"workflows", PACKAGE/"diagnostics")
               if (directory / filename).is_file()]
    if len(matches) != 1:
        raise ValueError(f"expected one source for {filename}, found {len(matches)}")
    return matches[0]
