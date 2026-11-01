// The structured solver behind the MA27 calling sequence, so IPOPT can load it
// at run time (linear_solver ma27, hsllib <this dll>). Our own code: only the
// routine names and argument lists follow HSL's MA27 (Fortran, by reference,
// 32-bit integers, 1-based indices), which is what IPOPT's Ma27TSolverInterface
// calls:
//
//   ma27id(ICNTL, CNTL)                                       defaults
//   ma27ad(N, NZ, IRN, ICN, IW, LIW, IKEEP, IW1, NSTEPS,      the pattern
//          IFLAG, ICNTL, CNTL, INFO, OPS)
//   ma27bd(N, NZ, IRN, ICN, A, LA, IW, LIW, IKEEP, NSTEPS,    factorise the values
//          MAXFRT, IW1, ICNTL, CNTL, INFO)                    A[0..NZ) (triplets)
//   ma27cd(N, A, LA, IW, LIW, W, MAXFRT, RHS, IW1, NSTEPS,    solve, RHS in place
//          ICNTL, INFO)
//
// ma27ad reads the symbolic setup (stage layout, paired plans) that
// linsolver.hsl.writeSetup wrote, from the file named by LINSOLVER_SETUP, and
// checks that every triplet lies in its pattern. INFO(15) returns the number
// of negative eigenvalues (IPOPT's inertia test); exact zero pivots return
// INFO(1) = 3 with the rank in INFO(2), as MA27 does for a singular matrix.
//
// MA27 keeps no state of its own: everything lives in the caller's arrays.
// This solver does, so an instance handle travels in them: IKEEP (ma27ad ->
// ma27bd) and IW (written by ma27bd, the only array ma27cd receives besides A).
// Instances are kept per pattern and reused, so a process that runs IPOPT
// many times on one problem holds one solver.

#define _CRT_SECURE_NO_WARNINGS                   // fopen / getenv are what is wanted
#include <algorithm>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "symbolic.h"

extern "C" {
void* ss_create(int64_t n, int64_t N, int64_t m, const int64_t* sizes, const int64_t* perm,
                int64_t nScatter, const int64_t* pos, const int64_t* src, int64_t size,
                const int64_t* offD, const int64_t* offE, const int64_t* offF, int64_t offG,
                const int64_t* erPtr, const int64_t* eRows, const int64_t* ecPtr,
                const int64_t* eCols, const int64_t* fPtr, const int64_t* fCols);
int ss_set_plan(void* h, double tau, const int64_t* permFlat, const int64_t* nIArr,
                const int64_t* nQArr, const int64_t* unitPtr, const int64_t* unitSize,
                const int64_t* panelPtr, const int64_t* panels, const int64_t* rPtr,
                const int64_t* rIdx);
void ss_set_threads(void* h, int n);
int ss_factor(void* h, const double* data, int64_t* inertia, int64_t* n2x2, double* minPivot,
              int64_t* singular);
int ss_solve(void* h, double* b, int64_t nrhs);
int ss_set_source(void* h, int64_t nnz, int64_t nz, const int64_t* tmap);
}

namespace {

const int MAGIC = 0x5A17C0DE;

// the process environment as it is now (a static CRT's getenv sees a copy
// taken when the DLL loaded, not what Python set since)
bool envVar(const char* name, std::string& out) {
    char buf[4096];
    const DWORD n = GetEnvironmentVariableA(name, buf, sizeof buf);
    if (n == 0 || n >= sizeof buf) return false;
    out.assign(buf, n);
    return true;
}

// ---- the setup file: "LSSETUP1", int64 count, then per array: name (24
// bytes, NUL padded), int64 type (0 int64, 1 float64), int64 length, data
struct Setup {
    std::map<std::string, std::vector<int64_t>> ints;
    std::map<std::string, std::vector<double>> reals;
    const std::vector<int64_t>& i(const char* k) const { return ints.at(k); }
    int64_t scalar(const char* k) const { return ints.at(k).at(0); }
};

bool readSetup(const char* path, Setup& s, std::string& err) {
    FILE* f = std::fopen(path, "rb");
    if (!f) { err = std::string("cannot open ") + path; return false; }
    char magic[8];
    int64_t count = 0;
    bool ok = std::fread(magic, 1, 8, f) == 8 && !std::memcmp(magic, "LSSETUP1", 8) &&
              std::fread(&count, 8, 1, f) == 1;
    for (int64_t e = 0; ok && e < count; ++e) {
        char name[25] = {0};
        int64_t type = 0, len = 0;
        ok = std::fread(name, 1, 24, f) == 24 && std::fread(&type, 8, 1, f) == 1 &&
             std::fread(&len, 8, 1, f) == 1 && len >= 0;
        if (!ok) break;
        if (type == 0) {
            auto& v = s.ints[name];
            v.resize((size_t)len);
            ok = len == 0 || std::fread(v.data(), 8, (size_t)len, f) == (size_t)len;
        } else {
            auto& v = s.reals[name];
            v.resize((size_t)len);
            ok = len == 0 || std::fread(v.data(), 8, (size_t)len, f) == (size_t)len;
        }
    }
    std::fclose(f);
    if (!ok) err = std::string("malformed setup file ") + path;
    return ok;
}

struct Instance {
    void* ss = nullptr;
    int n = 0, nz = 0;
    int64_t N = 0;
    uint64_t key = 0;
    std::vector<int64_t> tmap;                     // triplet t -> position in data
    std::vector<double> data, minPivot;            // the lower triangle, CSC order
    // ---- a layout setup: the structure is built here, the plans from the
    // first factorisation's values (then kept, as the pattern is fixed)
    bool needPlan = false;
    double tau = 1e4, slack = 0.5;
    sym::Structure S;
};

using Arrays = std::map<std::string, std::vector<int64_t>>;

// the solver from the arrays ss_create takes
void* createFrom(const Arrays& A) {
    auto a = [&](const char* k) -> const std::vector<int64_t>& { return A.at(k); };
    auto x = [&](const char* k) { return A.at(k).at(0); };
    return ss_create(x("n"), x("N"), x("m"), a("sizes").data(), a("perm").data(),
                     (int64_t)a("scatterPos").size(), a("scatterPos").data(), a("scatterSrc").data(),
                     x("size"), a("offD").data(), a("offE").data(), a("offF").data(), x("offG"),
                     a("erPtr").data(), a("eRows").data(), a("ecPtr").data(), a("eCols").data(),
                     a("fPtr").data(), a("fCols").data());
}

int setPlanFrom(void* ss, double tau, const Arrays& A) {
    auto a = [&](const char* k) { return A.at(k).data(); };
    return ss_set_plan(ss, tau, a("planPerm"), a("nI"), a("nQ"), a("unitPtr"), a("unitSize"),
                       a("panelPtr"), a("panels"), a("rPtr"), a("rIdx"));
}

// the lower-triangle CSC pattern of 1-based triplets (either triangle,
// duplicates allowed), and each triplet's position in it
bool patternOf(int n, int nz, const int* IRN, const int* ICN, sym::Pattern& P,
               std::vector<int64_t>& tmap, std::string& err) {
    std::vector<std::pair<int64_t, int64_t>> e((size_t)nz);    // (col, row)
    for (int t = 0; t < nz; ++t) {
        const int64_t i = IRN[t] - 1, j = ICN[t] - 1;
        if (i < 0 || j < 0 || i >= n || j >= n) {
            err = "triplet " + std::to_string(t) + " is out of range";
            return false;
        }
        e[(size_t)t] = {std::min(i, j), std::max(i, j)};
    }
    std::vector<std::pair<int64_t, int64_t>> u = e;
    std::sort(u.begin(), u.end());
    u.erase(std::unique(u.begin(), u.end()), u.end());
    P.n = n;
    P.indptr.assign((size_t)n + 1, 0);
    P.indices.resize(u.size());
    for (size_t q = 0; q < u.size(); ++q) {
        P.indptr[(size_t)u[q].first + 1]++;
        P.indices[q] = u[q].second;
    }
    for (int64_t j = 0; j < n; ++j) P.indptr[(size_t)j + 1] += P.indptr[(size_t)j];
    tmap.resize((size_t)nz);
    for (int t = 0; t < nz; ++t)
        tmap[(size_t)t] = std::lower_bound(u.begin(), u.end(), e[(size_t)t]) - u.begin();
    return true;
}

std::mutex gMx;
std::vector<std::unique_ptr<Instance>> gInst;

// call counts and seconds since the last ma27x_stats(reset): factorisations,
// solves, and those that reported zero pivots
struct Stats { double nFactor = 0, tFactor = 0, nSolve = 0, tSolve = 0, nSingular = 0; };
Stats gStats;
double secondsSince(std::chrono::steady_clock::time_point t0) {
    return std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
}

uint64_t fnv(uint64_t h, const void* p, size_t n) {
    const unsigned char* c = static_cast<const unsigned char*>(p);
    for (size_t i = 0; i < n; ++i) { h ^= c[i]; h *= 1099511628211ull; }
    return h;
}

void fail(int* INFO, int code, const std::string& msg) {
    std::fprintf(stderr, "linsolver ma27: %s\n", msg.c_str());
    std::fflush(stderr);
    INFO[0] = code;
}

Instance* fromArray(const int* a) {
    if (!a || a[0] != MAGIC) return nullptr;
    std::lock_guard<std::mutex> lk(gMx);
    return a[1] >= 0 && a[1] < (int)gInst.size() ? gInst[(size_t)a[1]].get() : nullptr;
}

int threadsFromEnv() {
    std::string t;
    const int n = envVar("LINSOLVER_THREADS", t) ? std::atoi(t.c_str()) : 4;
    return n > 0 ? n : 1;
}

// the instance for this pattern: an existing one, or built from the setup
int instanceFor(int n, int nz, const int* IRN, const int* ICN, int* INFO) {
    uint64_t key = fnv(1469598103934665603ull, &n, sizeof n);
    key = fnv(key, &nz, sizeof nz);
    key = fnv(key, IRN, sizeof(int) * (size_t)nz);
    key = fnv(key, ICN, sizeof(int) * (size_t)nz);
    {
        std::lock_guard<std::mutex> lk(gMx);
        for (size_t i = 0; i < gInst.size(); ++i)
            if (gInst[i]->key == key && gInst[i]->n == n && gInst[i]->nz == nz) return (int)i;
    }
    std::string path;
    if (!envVar("LINSOLVER_SETUP", path)) {
        fail(INFO, -1, "LINSOLVER_SETUP is not set (the setup file to use)");
        return -1;
    }
    Setup su;
    std::string err;
    if (!readSetup(path.c_str(), su, err)) { fail(INFO, -1, err); return -1; }
    try {
        if (!su.ints.count("varStage") && su.scalar("n") != n) {   // (a layout checks its sizes)
            fail(INFO, -1, "setup is for n = " + std::to_string(su.scalar("n")) +
                           ", IPOPT's matrix has n = " + std::to_string(n));
            return -1;
        }
        auto inst = std::make_unique<Instance>();
        inst->n = n; inst->nz = nz; inst->key = key;
        if (su.reals.count("tau")) inst->tau = su.reals.at("tau").at(0);
        if (su.reals.count("slack")) inst->slack = su.reals.at("slack").at(0);
        if (su.ints.count("varStage")) {
            // ---- a layout: the symbolic setup from IPOPT's own pattern
            sym::Pattern P;
            if (!patternOf(n, nz, IRN, ICN, P, inst->tmap, err)) { fail(INFO, -1, err); return -1; }
            sym::Layout L;
            L.nx = su.scalar("nx"); L.ns = su.scalar("ns"); L.nc = su.scalar("nc");
            L.nd = su.scalar("nd"); L.N = su.scalar("N");
            L.varStage = su.i("varStage");
            L.rowBorder = su.i("rowBorder");
            std::vector<int64_t> unkStage, kind;
            if (!sym::unknownStages(P, L, unkStage, kind, err) ||
                !sym::buildStructure(P, unkStage, kind, L.N, inst->S, err)) {
                fail(INFO, -1, "layout: " + err);
                return -1;
            }
            Arrays A;
            sym::structureArrays(inst->S, A);
            inst->ss = createFrom(A);
            inst->N = L.N;
            inst->data.assign(P.indices.size(), 0.0);
            inst->needPlan = true;
        } else {
            // ---- a full setup: each triplet's place in its pattern
            const auto& ptr = su.i("indptr");
            const auto& idx = su.i("indices");
            inst->tmap.resize((size_t)nz);
            for (int t = 0; t < nz; ++t) {
                int64_t i = IRN[t] - 1, j = ICN[t] - 1;
                if (i < 0 || j < 0 || i >= n || j >= n) {
                    fail(INFO, -1, "triplet " + std::to_string(t) + " is out of range");
                    return -1;
                }
                const int64_t r = i > j ? i : j, c = i > j ? j : i;
                const int64_t* b0 = idx.data() + ptr[(size_t)c];
                const int64_t* e0 = idx.data() + ptr[(size_t)c + 1];
                const int64_t* q = std::lower_bound(b0, e0, r);
                if (q == e0 || *q != r) {
                    fail(INFO, -1, "entry (" + std::to_string(r + 1) + ", " + std::to_string(c + 1) +
                                   ") is not in the setup's pattern: the setup was written for "
                                   "a different problem or discretisation");
                    return -1;
                }
                inst->tmap[(size_t)t] = q - idx.data();
            }
            inst->data.assign(idx.size(), 0.0);
            inst->N = su.scalar("N");
            inst->ss = createFrom(su.ints);
            if (inst->ss && su.ints.count("planPerm")) {
                const int e = setPlanFrom(inst->ss, inst->tau, su.ints);
                if (e) {
                    fail(INFO, -1, "ss_set_plan: invalid plan at stage " + std::to_string(e - 1));
                    return -1;
                }
            }
        }
        if (!inst->ss) { fail(INFO, -1, "ss_create failed"); return -1; }
        inst->minPivot.assign((size_t)inst->N + 1, 0.0);
        // the solver reads IPOPT's triplet values directly (summed in its
        // parallel stage jobs, not in a serial pass here)
        if (ss_set_source(inst->ss, (int64_t)inst->data.size(), nz, inst->tmap.data())) {
            fail(INFO, -1, "ss_set_source failed");
            return -1;
        }
        ss_set_threads(inst->ss, threadsFromEnv());
        std::lock_guard<std::mutex> lk(gMx);
        gInst.push_back(std::move(inst));
        return (int)gInst.size() - 1;
    } catch (const std::exception& ex) {
        fail(INFO, -1, std::string("setup file is missing an array: ") + ex.what());
        return -1;
    }
}

}  // namespace

extern "C" {

void ma27id(int* ICNTL, double* CNTL) {
    for (int i = 0; i < 30; ++i) ICNTL[i] = 0;
    ICNTL[0] = 6; ICNTL[1] = 6; ICNTL[2] = 0;       // message units, verbosity (unused)
    ICNTL[3] = 2139062143;
    ICNTL[4] = 1; ICNTL[5] = 32639; ICNTL[6] = 32639; ICNTL[7] = 32639; ICNTL[8] = 14;
    ICNTL[9] = 9; ICNTL[10] = 8; ICNTL[11] = 8; ICNTL[12] = 9; ICNTL[13] = 10;
    ICNTL[14] = 32639; ICNTL[15] = 32639; ICNTL[16] = 32639; ICNTL[17] = 32689;
    ICNTL[18] = 24; ICNTL[19] = 11; ICNTL[20] = 9; ICNTL[21] = 8; ICNTL[22] = 9;
    ICNTL[23] = 10; ICNTL[24] = 0; ICNTL[25] = 0; ICNTL[26] = 0; ICNTL[27] = 0;
    ICNTL[28] = 0; ICNTL[29] = 0;
    CNTL[0] = 0.1; CNTL[1] = 1.0; CNTL[2] = 0.0;   // pivot threshold etc. (unused)
    CNTL[3] = 0.0; CNTL[4] = 0.0;
}

void ma27ad(int* N, int* NZ, const int* IRN, const int* ICN, int* IW, int* LIW, int* IKEEP,
            int* IW1, int* NSTEPS, int* IFLAG, int* ICNTL, double* CNTL, int* INFO,
            double* OPS) {
    (void)IW; (void)LIW; (void)IW1; (void)IFLAG; (void)ICNTL; (void)CNTL;
    for (int i = 0; i < 20; ++i) INFO[i] = 0;
    *OPS = 0.0;
    *NSTEPS = 1;
    std::string dumpPath;                           // debug: IPOPT's pattern as handed over
    if (envVar("LINSOLVER_DUMP_PATTERN", dumpPath)) {
        if (FILE* f = std::fopen(dumpPath.c_str(), "wb")) {
            std::fwrite(N, sizeof(int), 1, f);
            std::fwrite(NZ, sizeof(int), 1, f);
            std::fwrite(IRN, sizeof(int), (size_t)*NZ, f);
            std::fwrite(ICN, sizeof(int), (size_t)*NZ, f);
            std::fclose(f);
        }
    }
    const int h = instanceFor(*N, *NZ, IRN, ICN, INFO);
    if (h < 0) return;
    IKEEP[0] = MAGIC;
    IKEEP[1] = h;
    INFO[4] = *NZ > 0 ? *NZ : 1;                    // NRLNEC: A need only hold the values
    INFO[5] = 4;                                    // NIRNEC: IW carries the handle
}

void ma27bd(int* N, int* NZ, const int* IRN, const int* ICN, double* A, int* LA, int* IW,
            int* LIW, int* IKEEP, int* NSTEPS, int* MAXFRT, int* IW1, int* ICNTL, double* CNTL,
            int* INFO) {
    (void)N; (void)IRN; (void)ICN; (void)LA; (void)IW1; (void)ICNTL; (void)CNTL;
    const auto t0 = std::chrono::steady_clock::now();
    for (int i = 0; i < 20; ++i) INFO[i] = 0;
    Instance* in = fromArray(IKEEP);
    if (!in) { fail(INFO, -1, "ma27bd: IKEEP does not come from ma27ad"); return; }
    if (*LIW < 2) { fail(INFO, -3, "ma27bd: LIW < 2"); return; }
    const int nz = *NZ;
    if (in->needPlan) {                             // the plans, from these values
        in->needPlan = false;                       // (their pattern-ordered sum, once)
        std::fill(in->data.begin(), in->data.end(), 0.0);
        for (int t = 0; t < nz; ++t) in->data[(size_t)in->tmap[(size_t)t]] += A[t];
        std::vector<sym::StagePlan> plans;
        std::string err;
        Arrays A2;
        std::vector<std::string> failures;
        if (sym::buildPlans(in->S, in->data.data(), in->slack, plans, err, &failures)) {
            if (!failures.empty())
                std::fprintf(stderr, "linsolver ma27: %zu stages without a paired plan, factorised "
                             "densely (first: %s)\n", failures.size(), failures[0].c_str());
            sym::planArrays(plans, A2);
            if (const int e = setPlanFrom(in->ss, in->tau, A2))
                err = "invalid plan at stage " + std::to_string(e - 1);
        }
        if (!err.empty())                           // still correct: every stage dense
            std::fprintf(stderr, "linsolver ma27: no paired plans (%s); dense stage kernels\n",
                         err.c_str());
    }
    int64_t inertia[3] = {0, 0, 0}, n2x2 = 0, singular = 0;
    ss_factor(in->ss, A, inertia, &n2x2, in->minPivot.data(), &singular);   // the triplets
    INFO[14] = (int)inertia[1];                     // negative eigenvalues
    if (inertia[2] > 0) {                           // exact zero pivots: rank deficient
        INFO[0] = 3;
        INFO[1] = (int)(in->n - inertia[2]);
        gStats.nSingular += 1;
    }
    *MAXFRT = 1;
    *NSTEPS = 1;
    IW[0] = MAGIC;
    IW[1] = IKEEP[1];
    gStats.nFactor += 1;
    gStats.tFactor += secondsSince(t0);
}

void ma27cd(int* N, double* A, int* LA, int* IW, int* LIW, double* W, int* MAXFRT,
            double* RHS, int* IW1, int* NSTEPS, int* ICNTL, int* INFO) {
    (void)N; (void)A; (void)LA; (void)LIW; (void)W; (void)MAXFRT; (void)IW1; (void)NSTEPS;
    (void)ICNTL;
    const auto t0 = std::chrono::steady_clock::now();
    Instance* in = fromArray(IW);
    if (!in) { fail(INFO, -1, "ma27cd: IW does not come from ma27bd"); return; }
    INFO[0] = ss_solve(in->ss, RHS, 1) ? -1 : 0;
    gStats.nSolve += 1;
    gStats.tSolve += secondsSince(t0);
}

// The symbolic setup computed here, written as a full setup file (as
// linsolver.hsl.writeSetup does from the Python): for tests against the
// Python. Pattern: lower CSC, sorted; data: its values. Returns 0, or 1 with
// the reason on stderr.
__declspec(dllexport) int sym_setup(int64_t n, const int64_t* indptr, const int64_t* indices,
                                    int64_t nx, int64_t ns, int64_t nc, int64_t nd, int64_t N,
                                    const int64_t* varStage, const int64_t* rowBorder,
                                    const double* data, double slack, double tau,
                                    const char* outPath) {
    sym::Pattern P;
    P.n = n;
    P.indptr.assign(indptr, indptr + n + 1);
    P.indices.assign(indices, indices + indptr[n]);
    sym::Layout L;
    L.nx = nx; L.ns = ns; L.nc = nc; L.nd = nd; L.N = N;
    L.varStage.assign(varStage, varStage + nx);
    L.rowBorder.assign(rowBorder, rowBorder + nc + nd);
    std::vector<int64_t> unkStage, kind;
    sym::Structure S;
    std::vector<sym::StagePlan> plans;
    std::string err;
    if (!sym::unknownStages(P, L, unkStage, kind, err) ||
        !sym::buildStructure(P, unkStage, kind, N, S, err) ||
        !sym::buildPlans(S, data, slack, plans, err)) {
        std::fprintf(stderr, "sym_setup: %s\n", err.c_str());
        return 1;
    }
    Arrays A;
    sym::structureArrays(S, A);
    sym::planArrays(plans, A);
    FILE* f = std::fopen(outPath, "wb");
    if (!f) return 1;
    const int64_t count = (int64_t)A.size() + 1;
    std::fwrite("LSSETUP1", 1, 8, f);
    std::fwrite(&count, 8, 1, f);
    auto header = [&](const char* nm, int64_t type, int64_t len) {
        char name[24] = {0};
        std::strncpy(name, nm, 23);
        std::fwrite(name, 1, 24, f);
        std::fwrite(&type, 8, 1, f);
        std::fwrite(&len, 8, 1, f);
    };
    for (const auto& kv : A) {
        header(kv.first.c_str(), 0, (int64_t)kv.second.size());
        if (!kv.second.empty()) std::fwrite(kv.second.data(), 8, kv.second.size(), f);
    }
    header("tau", 1, 1);
    std::fwrite(&tau, 8, 1, f);
    std::fclose(f);
    return 0;
}

// out[5]: factorisations, their seconds, solves, their seconds, singular
// factorisations -- since the last call with reset != 0
__declspec(dllexport) void ma27x_stats(double* out, int reset) {
    out[0] = gStats.nFactor; out[1] = gStats.tFactor;
    out[2] = gStats.nSolve; out[3] = gStats.tSolve; out[4] = gStats.nSingular;
    if (reset) gStats = Stats();
}

}  // extern "C"

// ---- the spellings a run-time loader may look for (Fortran name mangling)
#define ALIASES(lo, UP, ARGS, CALL)                                              \
    extern "C" __declspec(dllexport) void lo##_ ARGS { lo CALL; }                \
    extern "C" __declspec(dllexport) void lo##__ ARGS { lo CALL; }               \
    extern "C" __declspec(dllexport) void UP ARGS { lo CALL; }                   \
    extern "C" __declspec(dllexport) void UP##_ ARGS { lo CALL; }

ALIASES(ma27id, MA27ID, (int* a, double* b), (a, b))
ALIASES(ma27ad, MA27AD,
        (int* a, int* b, const int* c, const int* d, int* e, int* f, int* g, int* h, int* i,
         int* j, int* k, double* l, int* m, double* n),
        (a, b, c, d, e, f, g, h, i, j, k, l, m, n))
ALIASES(ma27bd, MA27BD,
        (int* a, int* b, const int* c, const int* d, double* e, int* f, int* g, int* h, int* i,
         int* j, int* k, int* l, int* m, double* n, int* o),
        (a, b, c, d, e, f, g, h, i, j, k, l, m, n, o))
ALIASES(ma27cd, MA27CD,
        (int* a, double* b, int* c, int* d, int* e, double* f, int* g, double* h, int* i,
         int* j, int* k, int* l),
        (a, b, c, d, e, f, g, h, i, j, k, l))

// and the plain lowercase names themselves
#pragma comment(linker, "/EXPORT:ma27id")
#pragma comment(linker, "/EXPORT:ma27ad")
#pragma comment(linker, "/EXPORT:ma27bd")
#pragma comment(linker, "/EXPORT:ma27cd")
