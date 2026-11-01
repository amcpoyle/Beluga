"""Compile the solver (cpp/*.cpp) into cpp/stagesolver.dll.

    python -m linsolver.build            compile if the sources are newer than the DLL
    python -m linsolver.build --force    always recompile

Uses MSVC when Visual Studio is installed (found through vswhere), otherwise g++ (e.g. MSYS2 MinGW).
Both build for this CPU (AVX2 / -march=native), so the DLL is not committed: each machine builds its own.
"""
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
CPP = os.path.join(HERE, "cpp")
SRCS = [os.path.join(CPP, f) for f in ("stagesolver.cpp", "ma27.cpp", "symbolic.cpp")]
DEPS = SRCS + [os.path.join(CPP, "symbolic.h")]
DLL = os.path.join(CPP, "stagesolver.dll")
OBJDIR = os.path.join(CPP, "build")
MSVC_FLAGS = ["/nologo", "/O2", "/arch:AVX2", "/fp:precise", "/fp:contract",
              "/std:c++17", "/EHsc", "/W4", "/MT", "/LD"]
GXX_FLAGS = ["-O3", "-march=native", "-ffp-contract=fast", "-std=c++17", "-shared",
             "-static", "-static-libgcc", "-static-libstdc++", "-Wall", "-Wextra"]


def _vcvars():
    """vcvars64.bat of the newest Visual Studio with the C++ tools, or None."""
    vswhere = os.path.join(os.environ.get("ProgramFiles(x86)", r"C:\Program Files (x86)"),
                           "Microsoft Visual Studio", "Installer", "vswhere.exe")
    if not os.path.exists(vswhere):
        return None
    r = subprocess.run([vswhere, "-latest", "-products", "*", "-requires",
                        "Microsoft.VisualStudio.Component.VC.Tools.x86.x64",
                        "-property", "installationPath"], capture_output=True, text=True)
    path = os.path.join(r.stdout.strip(), "VC", "Auxiliary", "Build", "vcvars64.bat")
    return path if r.stdout.strip() and os.path.exists(path) else None


def build(force=False):
    """Path of stagesolver.dll, compiled first if missing or older than the sources."""
    newest = max(os.path.getmtime(f) for f in DEPS)
    if not force and os.path.exists(DLL) and os.path.getmtime(DLL) >= newest:
        return DLL
    vc = _vcvars()
    if vc:
        os.makedirs(OBJDIR, exist_ok=True)  # cl drops its .obj in cwd
        cmd = ('call "%s" >nul && cl %s %s /Fe"%s" /link /NOIMPLIB /NOEXP'
               % (vc, " ".join(MSVC_FLAGS), " ".join('"%s"' % f for f in SRCS), DLL))
        r = subprocess.run(cmd, shell=True, cwd=OBJDIR, capture_output=True, text=True)
    else:
        args = ["g++", *GXX_FLAGS, *SRCS, "-o", DLL]
        cmd = " ".join(args)
        try:
            r = subprocess.run(args, capture_output=True, text=True)
        except FileNotFoundError:
            raise RuntimeError("no C++ compiler: install Visual Studio (C++ tools) or MinGW g++, "
                               "or set linearSolver to mumps in configs/base/solverConfig.json") from None
    if r.returncode or not os.path.exists(DLL):
        raise RuntimeError("build failed (exit %#x):\n%s\n%s%s"
                           % (r.returncode & 0xffffffff, cmd, r.stdout, r.stderr))
    print(f"built {DLL}")
    return DLL


if __name__ == "__main__":
    build(force="--force" in sys.argv[1:])
