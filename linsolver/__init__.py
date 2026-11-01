"""Stage-structured KKT solver for IPOPT, from optipySolverFast (github.com/amcpoyle/optipy, linsolver/).

    hsl.useStructured(ocp)    write the OCP's layout, return the IPOPT options that load the solver
    build.build()             compile cpp/ into cpp/stagesolver.dll (done on first use)

Only the runtime path is here: the C++ solver (cpp/, unchanged) and the Python that hands it to IPOPT.
The Python reference kernels, benchmarks and checks stay in optipySolverFast.
"""
