// Phase 2 in C++: the dense Bunch-Kaufman kernel and the structured sweep.
//
// Built by linsolver/cppsolver.py (g++, static, loaded with ctypes). The
// algorithms are exactly those of the Python prototype -- linsolver/ldlt.py
// for the kernel, linsolver/structured.py for the sweep -- so every C++
// change has two references: the Python code and the dumped systems.
//
// DENSE KERNEL. A symmetric n x n block, column-major, only the lower
// triangle read. Right-looking Bunch-Kaufman as in LAPACK's dsytf2 (lower):
// on exit the strict lower triangle holds L (unit diagonal implied), the
// diagonal holds D, and a 2x2 block starting at k keeps D(k+1,k) at (k+1,k)
// (L(k+1,k) is 0 there). bsize[k] = 2 marks such a block (bsize[k+1] = 0).
// perm maps new -> old: A[perm][:, perm] = L D L'.
//
// SWEEP. The symbolic analysis stays in Python for now (StageStructure) and
// is handed over once: the flat block layout, the scatter map from the CSC
// values into it, and the interface index sets. Only the numeric
// factorisation and the solve -- what IPOPT calls every iteration -- run
// here. Block conventions match structured.py: D and G full symmetric, E
// and F row-major.
//
// SCHEME: structured.py's "interface". Each stage block is stored with its
// interface unknowns C (those the next stage and the border see) LAST --
// the scatter map puts the values there, so no factorisation reorders --
// and Bunch-Kaufman then pivots freely over the whole block (the order is a
// hint, never a restriction). The updates only need (S^{-1})_CC =
// W' D^{-1} W with W = L^{-1} P' I_C, a forward solve that starts where the
// first interface pivot landed: on the lap dumps 2-8% of the flops of
// solving S against the interface columns in full. The back-substitution
// pays for it with one more stage solve per stage.

#include <algorithm>
#include <atomic>
#include <condition_variable>
#include <memory>
#include <mutex>
#include <thread>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <limits>
#include <new>
#include <vector>
#ifdef __AVX2__
#include <immintrin.h>
#include <iterator>
#endif

namespace {

const double ALPHA = (1.0 + std::sqrt(17.0)) / 8.0;   // Bunch-Kaufman, ~0.6404

// max |x[i]|. std::max/fabs in a loop is not vectorised under /fp:precise
// (NaN ordering), so it is written with AVX2 max: identical for finite input.
double absMax(const double* x, int64_t n) {
    int64_t i = 0;
    double m = 0.0;
#ifdef __AVX2__
    const __m256d sign = _mm256_set1_pd(-0.0);
    __m256d a0 = _mm256_setzero_pd(), a1 = _mm256_setzero_pd();
    for (; i + 8 <= n; i += 8) {
        a0 = _mm256_max_pd(a0, _mm256_andnot_pd(sign, _mm256_loadu_pd(x + i)));
        a1 = _mm256_max_pd(a1, _mm256_andnot_pd(sign, _mm256_loadu_pd(x + i + 4)));
    }
    alignas(32) double r[4];
    _mm256_store_pd(r, _mm256_max_pd(a0, a1));
    m = std::max(std::max(r[0], r[1]), std::max(r[2], r[3]));
#endif
    for (; i < n; ++i) m = std::max(m, std::fabs(x[i]));
    return m;
}

// y[i] -= x[i] a for i < n, returning max |y[i]| over the new values (the
// growth check fused into the update: one pass instead of two)
inline double axpyMax(double* y, const double* x, double a, int n) {
    int i = 0;
    const __m256d sign = _mm256_set1_pd(-0.0), va = _mm256_set1_pd(a);
    __m256d mx = _mm256_setzero_pd();
    for (; i + 4 <= n; i += 4) {
        const __m256d v = _mm256_fnmadd_pd(_mm256_loadu_pd(x + i), va, _mm256_loadu_pd(y + i));
        _mm256_storeu_pd(y + i, v);
        mx = _mm256_max_pd(mx, _mm256_andnot_pd(sign, v));
    }
    alignas(32) double t[4];
    _mm256_store_pd(t, mx);
    double m = std::max(std::max(t[0], t[1]), std::max(t[2], t[3]));
    for (; i < n; ++i) {
        y[i] = std::fma(-x[i], a, y[i]);
        m = std::max(m, std::fabs(y[i]));
    }
    return m;
}

// y[i] -= x0[i] a0 + x1[i] a1, returning max |y[i]| over the new values
inline double axpy2Max(double* y, const double* x0, double a0, const double* x1, double a1,
                       int n) {
    int i = 0;
    const __m256d sign = _mm256_set1_pd(-0.0);
    const __m256d v0 = _mm256_set1_pd(a0), v1 = _mm256_set1_pd(a1);
    __m256d mx = _mm256_setzero_pd();
    for (; i + 4 <= n; i += 4) {
        const __m256d t = _mm256_fmadd_pd(_mm256_loadu_pd(x1 + i), v1,
                                          _mm256_mul_pd(_mm256_loadu_pd(x0 + i), v0));
        const __m256d v = _mm256_sub_pd(_mm256_loadu_pd(y + i), t);
        _mm256_storeu_pd(y + i, v);
        mx = _mm256_max_pd(mx, _mm256_andnot_pd(sign, v));
    }
    alignas(32) double t[4];
    _mm256_store_pd(t, mx);
    double m = std::max(std::max(t[0], t[1]), std::max(t[2], t[3]));
    for (; i < n; ++i) {
        y[i] -= std::fma(x1[i], a1, x0[i] * a0);
        m = std::max(m, std::fabs(y[i]));
    }
    return m;
}

struct Inertia {
    int64_t pos = 0, neg = 0, zero = 0, n2x2 = 0;
    double minPivot = std::numeric_limits<double>::infinity();   // absolute
};

inline void addBlock(Inertia& in, double p, double b, double s) {
    // a 2x2 block of D: the determinant decides, not the diagonal
    double det = p * s - b * b;
    if (det < 0) { in.pos++; in.neg++; }
    else if (det > 0) { if (p + s > 0) in.pos += 2; else in.neg += 2; }
    else { in.zero++; if (p + s > 0) in.pos++; else if (p + s < 0) in.neg++; }
    double big = std::fabs(0.5 * (p + s)) + std::hypot(0.5 * (p - s), b);
    in.minPivot = std::min(in.minPivot, big > 0 ? std::fabs(det) / big : 0.0);
    in.n2x2++;
}

inline void addPivot(Inertia& in, double d) {
    if (d > 0) in.pos++; else if (d < 0) in.neg++; else in.zero++;
    in.minPivot = std::min(in.minPivot, std::fabs(d));
}

// work: at least 2n doubles
Inertia bkFactor(int n, double* a, int* perm, int8_t* bsize, double* work) {
    auto A = [a, n](int i, int j) -> double& { return a[(size_t)j * n + i]; };
    for (int i = 0; i < n; ++i) { perm[i] = i; bsize[i] = 1; }
    Inertia in;
    int k = 0;
    while (k < n) {
        int kstep = 1, kp = k;
        double absakk = std::fabs(A(k, k));
        int r = k;
        double colmax = 0.0;
        for (int i = k + 1; i < n; ++i) {
            double v = std::fabs(A(i, k));
            if (v > colmax) { colmax = v; r = i; }
        }
        if (std::max(absakk, colmax) == 0.0 || absakk >= ALPHA * colmax) {
            kp = k;                                   // 1x1 at k (or a zero column)
        } else {
            double rowmax = 0.0;                      // row r, off the diagonal
            for (int j = k; j < r; ++j) rowmax = std::max(rowmax, std::fabs(A(r, j)));
            for (int i = r + 1; i < n; ++i) rowmax = std::max(rowmax, std::fabs(A(i, r)));
            if (absakk * rowmax >= ALPHA * colmax * colmax) kp = k;
            else if (std::fabs(A(r, r)) >= ALPHA * rowmax) kp = r;
            else { kp = r; kstep = 2; }
        }

        int kk = k + kstep - 1;
        if (kp != kk) {                               // symmetric interchange kk <-> kp
            for (int j = 0; j < k; ++j) std::swap(A(kk, j), A(kp, j));   // finished L rows
            for (int i = kp + 1; i < n; ++i) std::swap(A(i, kk), A(i, kp));
            for (int j = kk + 1; j < kp; ++j) std::swap(A(j, kk), A(kp, j));
            std::swap(A(kk, kk), A(kp, kp));
            if (kstep == 2) std::swap(A(kk, k), A(kp, k));
            std::swap(perm[kk], perm[kp]);
        }

        if (kstep == 1) {
            double d = A(k, k);
            addPivot(in, d);
            if (d != 0.0) {                           // d == 0 only for a zero column
                double rd = 1.0 / d;
                for (int j = k + 1; j < n; ++j) {
                    double t = A(j, k) * rd;
                    if (t == 0.0) continue;
                    double* cj = &A(0, j);
                    const double* ck = &A(0, k);
                    for (int i = j; i < n; ++i) cj[i] -= ck[i] * t;
                }
                for (int i = k + 1; i < n; ++i) A(i, k) *= rd;
            }
            k += 1;
        } else {
            // D block [[p, b], [b, s]], inverse by cofactors scaled by b
            double p = A(k, k), b = A(k + 1, k), s = A(k + 1, k + 1);
            addBlock(in, p, b, s);
            double P = p / b, S = s / b, t = 1.0 / (P * S - 1.0);
            double* l1 = work;
            double* l2 = work + n;
            for (int i = k + 2; i < n; ++i) {
                double w1 = A(i, k), w2 = A(i, k + 1);
                l1[i] = t * (S * w1 - w2) / b;
                l2[i] = t * (P * w2 - w1) / b;
            }
            for (int j = k + 2; j < n; ++j) {         // A -= L_i (D L_j') = l_i . w_j
                double w1 = A(j, k), w2 = A(j, k + 1);
                double* cj = &A(0, j);
                for (int i = j; i < n; ++i) cj[i] -= l1[i] * w1 + l2[i] * w2;
            }
            for (int i = k + 2; i < n; ++i) { A(i, k) = l1[i]; A(i, k + 1) = l2[i]; }
            bsize[k] = 2;
            bsize[k + 1] = 0;
            k += 2;
        }
    }
    return in;
}

// Solve with the factors; x holds b on entry (original order), x on exit.
// y: n doubles of workspace.
void bkSolve(int n, const double* a, const int* perm, const int8_t* bsize,
             double* x, double* y) {
    auto A = [a, n](int i, int j) { return a[(size_t)j * n + i]; };
    for (int i = 0; i < n; ++i) y[i] = x[perm[i]];
    for (int k = 0; k < n;) {                         // L z = P b
        if (bsize[k] == 2) {
            double y0 = y[k], y1 = y[k + 1];
            const double* c0 = a + (size_t)k * n;
            const double* c1 = c0 + n;
            if (y0 != 0.0 || y1 != 0.0)
                for (int i = k + 2; i < n; ++i) y[i] -= c0[i] * y0 + c1[i] * y1;
            k += 2;
        } else {
            double yk = y[k];
            const double* ck = a + (size_t)k * n;
            if (yk != 0.0)
                for (int i = k + 1; i < n; ++i) y[i] -= ck[i] * yk;
            k += 1;
        }
    }
    for (int k = 0; k < n;) {                         // D w = z
        if (bsize[k] == 2) {
            double p = A(k, k), b = A(k + 1, k), s = A(k + 1, k + 1);
            double P = p / b, S = s / b, t = 1.0 / (P * S - 1.0);
            double y0 = y[k], y1 = y[k + 1];
            y[k] = t * (S * y0 - y1) / b;
            y[k + 1] = t * (P * y1 - y0) / b;
            k += 2;
        } else {
            double d = A(k, k);
            y[k] = d != 0.0 ? y[k] / d : 0.0;         // zero pivot: free, take 0
            k += 1;
        }
    }
    for (int k = n - 1; k >= 0;) {                    // L' y = w
        if (k > 0 && bsize[k] == 0) {                 // second row of a 2x2 block
            const double* c0 = a + (size_t)(k - 1) * n;
            const double* c1 = c0 + n;
            double s0 = 0.0, s1 = 0.0;
            for (int i = k + 1; i < n; ++i) { s0 += c0[i] * y[i]; s1 += c1[i] * y[i]; }
            y[k - 1] -= s0;
            y[k] -= s1;
            k -= 2;
        } else {
            const double* ck = a + (size_t)k * n;
            double s = 0.0;
            for (int i = k + 1; i < n; ++i) s += ck[i] * y[i];
            y[k] -= s;
            k -= 1;
        }
    }
    for (int i = 0; i < n; ++i) x[perm[i]] = y[i];
}

// This solver's own block layout (built by ss_create from the Python one):
// per stage, contiguous, [ D (n x n, in factor order q) | E (|eR| x |eC|,
// only the coupling entries that exist) | F (m x n) ], then G (m x m).
void gemmTN(const double* A, int lda, const double* B, int ldb, int m, int n, int kd,
            double* Ap, double* Bp, double* Cp, bool lowerOnly);

// Bunch-Kaufman restricted to the first p columns of the n x n block a
// (column-major, lower): pivots are chosen among 0..p-1 only, every row
// still receives the updates, so a(p:, p:) ends as the Schur complement.
// perm is identity from p on. Returns false on a zero pivot (a restricted
// search cannot step round it) or if the Schur complement grows past
// `bound`. Same decisions as linsolver.paired.TailFactor.
// Blocked: the pivots update only the panel's own columns (the search and
// the interchanges never reach past column p); the trailing block gets one
// rank-p update at the end, a(p:, p:) -= L_Q W_Q', W_Q the panel's rows
// below p as they were when eliminated (L D), through gemmTN.
// ws: WQ (n-p) x p, then gemmTN's packing Ap, Bp, Cp.
bool bkFactorPartial(int n, int p, double* a, int* perm, int8_t* bsize, double* work,
                     Inertia& in, double bound, double* WQ, double* Ap, double* Bp,
                     double* Cp) {
    auto A = [a, n](int i, int j) -> double& { return a[(size_t)j * n + i]; };
    const int nq = n - p;
    for (int i = 0; i < n; ++i) perm[i] = i;
    for (int i = 0; i < p; ++i) bsize[i] = 1;
    int k = 0;
    while (k < p) {
        int kstep = 1, kp = k;
        double absakk = std::fabs(A(k, k));
        int r = k;
        double colmax = 0.0;
        for (int i = k + 1; i < p; ++i) {
            double v = std::fabs(A(i, k));
            if (v > colmax) { colmax = v; r = i; }
        }
        if (std::max(absakk, colmax) == 0.0) return false;
        if (absakk < ALPHA * colmax) {
            double rowmax = 0.0;
            for (int j = k; j < r; ++j) rowmax = std::max(rowmax, std::fabs(A(r, j)));
            for (int i = r + 1; i < p; ++i) rowmax = std::max(rowmax, std::fabs(A(i, r)));
            if (absakk * rowmax >= ALPHA * colmax * colmax) kp = k;
            else if (std::fabs(A(r, r)) >= ALPHA * rowmax) kp = r;
            else { kp = r; kstep = 2; }
        }
        int kk = k + kstep - 1;
        if (kp != kk) {
            for (int j = 0; j < k; ++j) std::swap(A(kk, j), A(kp, j));
            for (int i = kp + 1; i < n; ++i) std::swap(A(i, kk), A(i, kp));
            for (int j = kk + 1; j < kp; ++j) std::swap(A(j, kk), A(kp, j));
            std::swap(A(kk, kk), A(kp, kp));
            if (kstep == 2) std::swap(A(kk, k), A(kp, k));
            std::swap(perm[kk], perm[kp]);
        }
        if (kstep == 1) {
            double d = A(k, k);
            if (d == 0.0) return false;
            addPivot(in, d);
            double rd = 1.0 / d;
            for (int j = k + 1; j < p; ++j) {           // the panel's own columns
                double t = A(j, k) * rd;
                if (t == 0.0) continue;
                double* cj = &A(0, j);
                const double* ck = &A(0, k);
                for (int i = j; i < n; ++i) cj[i] -= ck[i] * t;
            }
            std::memcpy(WQ + (size_t)k * nq, &A(p, k), sizeof(double) * nq);   // W_Q: L D
            for (int i = k + 1; i < n; ++i) A(i, k) *= rd;
            k += 1;
        } else {
            double pp = A(k, k), b = A(k + 1, k), ss = A(k + 1, k + 1);
            if (pp * ss - b * b == 0.0) return false;
            addBlock(in, pp, b, ss);
            double P = pp / b, S = ss / b, t = 1.0 / (P * S - 1.0);
            double* l1 = work;
            double* l2 = work + n;
            for (int i = k + 2; i < n; ++i) {
                double w1 = A(i, k), w2 = A(i, k + 1);
                l1[i] = t * (S * w1 - w2) / b;
                l2[i] = t * (P * w2 - w1) / b;
            }
            for (int j = k + 2; j < p; ++j) {           // the panel's own columns
                double w1 = A(j, k), w2 = A(j, k + 1);
                double* cj = &A(0, j);
                for (int i = j; i < n; ++i) cj[i] -= l1[i] * w1 + l2[i] * w2;
            }
            std::memcpy(WQ + (size_t)k * nq, &A(p, k), sizeof(double) * nq);
            std::memcpy(WQ + (size_t)(k + 1) * nq, &A(p, k + 1), sizeof(double) * nq);
            for (int i = k + 2; i < n; ++i) { A(i, k) = l1[i]; A(i, k + 1) = l2[i]; }
            bsize[k] = 2;
            bsize[k + 1] = 0;
            k += 2;
        }
    }
    if (nq == 0) return true;
    // ---- the trailing block: a(p:, p:) -= L_Q W_Q' (lower), with the growth
    // check on the result (the Schur complement)
    gemmTN(&A(p, 0), n, WQ, nq, nq, nq, p, Ap, Bp, Cp, true);
    const int m8 = (nq + 7) & ~7;
    double big = 0.0;
    for (int j = 0; j < nq; ++j) {
        double* cj = &A(p, p + j);
        const double* u = Cp + (size_t)j * m8;
        for (int i = j; i < nq; ++i) {
            cj[i] -= u[i];
            big = std::max(big, std::fabs(cj[i]));
        }
    }
    return !(big > bound);
}

struct Stage {
    int n = 0;
    int64_t inPos = 0, inNeg = 0, inZero = 0;      // this stage's inertia, last ss_factor
    int64_t offD = 0, offE = 0, offF = 0;
    std::vector<int> eR, eC, fC, C, idxE, idxF;   // idxE/idxF: positions of eC/fC in C
    std::vector<int> q, qinv;                      // factor order, and its inverse
    // ---- reloading the block: a paired factorisation writes, outside the
    // pattern, only zeroPos (interior fill, F's fill columns); dirty: the
    // last factorisation (dense) may have written anywhere -- clear it all
    std::vector<int64_t> zeroPos, dUniq;           // dUniq: the D pattern's positions
    bool dirty = true;
    std::vector<int> idxP;                         // positions in C of the rows the
                                                   // previous stage updates (P = eR_{k-1})
    std::vector<int> Cq;                           // C in factor order (solveIndex)
    std::vector<double> MP;                        // (S_k^{-1})_{C,P}, nc x |P| row-major
    std::vector<double> XE;                        // Ec M_FE', ne x nf: F's fill, per unit F
    std::vector<double> MFF;                       // M_FF, nf x nf
    mutable double tPost = 0.0, flI = 0.0;         // post job: seconds, flops
    std::vector<double> Fc;                        // F on fC, m x nf row-major
    // ---- solve, per stage: w_k on C, the incoming update, the correction
    // on C, and x_k on P (what the stage before needs)
    std::vector<double> wC, incS, tC, xP;
    std::vector<int> perm;                         // dense path: Bunch-Kaufman's, over q
    std::vector<int8_t> bsize;
    // ---- paired kernel (ss_set_plan); q is then the plan's order
    bool hasPlan = false;
    int nI = 0;                                    // interior; tail = q[nI:], C last
    std::vector<int> unitSize;                     // 1 or 2, interior units in order
    std::vector<int> pu0, pu1, pc0, pc1;           // panels: units [pu0,pu1), cols [pc0,pc1)
    std::vector<int> rPtr, rIdx;                   // panel p's rows below it: rIdx[rPtr[p]..]
    std::vector<double> piv;                       // per unit: d, or p, b, s of a 2x2
    // the tail T = [partners | Q]: the job factorises the partners (pivots
    // among them only) into T; the chain factorises Q (its last nQ) into Qf
    int nQ = 0;
    std::vector<double> T;                         // nT x nT: partners' L and D, Q's Schur
    std::vector<int> tperm;                        // over the tail (identity on Q)
    std::vector<int8_t> tbsize;                    // over the partners
    std::vector<double> Qf;                        // nQ x nQ, factorised on the chain
    std::vector<int> qperm;
    std::vector<int8_t> qbsize;
    bool paired = false;                           // this factorisation: paired or dense
    // ---- written by the stage job, read by the chain after `ready`
    double normS = 0.0;                            // max |raw block| (growth bound, stats)
    bool refused = false;                          // the interior refused a pivot
    int tailMode = 0;                              // 0: partners done, Q on the chain;
                                                   // 1: partners refused, whole tail on it
    Inertia inIn;                                  // inertia of the interior units
    mutable double tJob = 0.0;                     // seconds the job took
    double tParts[4] = {0, 0, 0, 0};               // stage job: scatter, max, interior, partners
};

// per-thread workspace of the interior job
struct Scratch {
    std::vector<double> front, wv, U, Ap, Bt, WQ, work;
    std::vector<int> rows;
    std::vector<double> sz, sy, h;                 // solve jobs: tail, bkSolve, correction
    std::vector<double> W, DW, M, MS, BT;          // post jobs: interface block
    std::vector<int> inv, bpos;
};

struct Solver {
    int64_t n = 0, N = 0, m = 0, size = 0, offG = 0;
    std::vector<int64_t> perm, start;
    // scatter buf[dst[t]] += data[src[t]], grouped: group k < N is stage k's
    // D, E and F, group N the border block; each group sorted by src.
    // dR/dC: for a D entry its (row, column) in stage order, else -1 (a
    // plan changes q, and a fallback re-scatters D alone)
    std::vector<int64_t> dst, src, grp;
    std::vector<int> dR, dC;
    // the ACTIVE scatter (buildActive): the same entries minus each D
    // entry's upper-triangle copy in the current factor order -- every
    // kernel reads the lower triangle only -- as (aDst, aSrc), grouped by
    // aGrp; aIsD marks D entries (a fallback re-scatters those alone)
    std::vector<int64_t> aDst, aSrc, aGrp;
    std::vector<char> aIsD, aFirst;                // aFirst: the first write to its dst
    // the same, packed for the per-factorisation loads: offset from the
    // group's region start (32-bit), source index (32-bit), flags (bit 0
    // first write, bit 1 D entry) -- 9 bytes an entry instead of 18
    std::vector<int32_t> pDst, pSrc;
    std::vector<uint8_t> pFlag;
    // optional (ss_set_source): ss_factor's data is a TRIPLET array, entry c
    // of the pattern being the sum of triplets srcIdx[srcPtr[c]..srcPtr[c+1]]
    // -- the active scatter then reads the triplets directly
    std::vector<int64_t> srcPtr, srcIdx;
    std::vector<Stage> st;
    std::vector<double> buf, W, DW, X, work, y, Gf, delta, EB, Yu, BT;
    std::vector<int> bpos;                         // chain: positions of E's rows in the factor
    std::vector<double> gAp, gBp, gCp;             // chain: gemmTN packing
    double tBorder = 0.0;                          // border steps, seconds (summed)
    // ---- the border recurrence runs as steps 0..N-1 in order, each after
    // its stage's post job, by whichever thread holds the token (bTok)
    std::atomic<int> bTok{0};
    std::atomic<int64_t> bNext{0};                 // the next border step
    int bNePrev = 0;                               // dF's width (guarded by the token)
    std::vector<int> inv, gperm;
    std::vector<int8_t> gbsize;
    std::vector<double> dF;                        // border fill for the next stage (m x ne)
    std::vector<double> tz;                        // tail solve buffer
    int nmax = 1, wmax = 1;                        // widest stage; widest of C, E, border
    double tau = 1e4;                              // paired kernel: growth bound
    // ---- the stage jobs (scatter + block max + paired interior) run on a
    // pool; stages are independent (a plan pins every row the previous
    // stage updates in the tail), so only the chain of tails is sequential.
    // Each job writes only its own stage's memory: results are identical
    // for any thread count.
    std::vector<Scratch> scr;                      // [0] main thread, [i] worker i
    std::vector<std::thread> pool;
    std::mutex mx;
    std::condition_variable cv;
    int64_t gen = 0;
    bool stop = false;
    std::atomic<int64_t> next{0};
    std::atomic<int64_t> limit{0};                 // jobs below this may be taken
    // the factorisation (mode 0): post jobs have their own counter, and a
    // worker takes a released one before the next stage job, so the border
    // steps behind them keep pace with the chain instead of piling up at the end
    std::atomic<int64_t> nextPost{0}, released{0};
    int64_t nJobs = 0;                             // jobs in this round
    std::atomic<int> active{0};
    int mode = 0;                                  // 0 factor jobs, 1/2 solve fwd/bwd jobs
    std::unique_ptr<std::atomic<char>[]> ready;
    const double* curData = nullptr;
    double* curB = nullptr;                        // the right-hand side being solved
    // ---- solve: Ys holds x in each stage's factor order (stage k at
    // start[k]), gidx maps a position there to its index in b
    std::vector<int64_t> gidx;
    std::vector<double> Ys, yG, inc;
    bool solveIdxOk = false;
    // last ss_solve, seconds: [0] forward jobs (CPU, summed), [1] forward
    // chain (incl. waiting), [2] border, [3] backward chain, [4] backward
    // jobs (CPU, summed), [5] waiting for them at the end, [6] wall
    double sprof[7] = {0, 0, 0, 0, 0, 0, 0};
    bool factored = false;
    bool alwaysDirty = false;                      // debug/benchmark: always clear whole blocks
    int64_t fallbacks = 0;                         // last ss_factor
    // last ss_factor, seconds: [0] stage jobs (scatter, block max, paired
    // interior), summed over stages -- CPU time, spread over the threads;
    // on the chain: [1] waiting for (or doing) jobs, [2] tail or dense
    // kernel, [3] interface (S^{-1})_CC, [4] updates, [5] border, [6]
    // applying the incoming update; [7] wall time of the whole ss_factor
    double prof[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    double flops[2] = {0, 0};      // nominal: kernel n^3/3; interface forward solve

    // a, c: positions in eR, eC (compact E)
    double& E(const Stage& s, int a, int c) {
        return buf[s.offE + (int64_t)a * (int64_t)s.eC.size() + c]; }
    double& F(const Stage& s, int g, int c) { return buf[s.offF + (int64_t)g * s.n + c]; }
    double& G(int g1, int g2) { return buf[offG + (int64_t)g1 * m + g2]; }
    int64_t regionEnd(int64_t k) const { return k + 1 < N ? st[k + 1].offD : offG; }
    void load(int64_t g, const double* data) {      // reset a group's region, scatter into it
        if (g < N && !st[g].dirty) {
            for (int64_t z : st[g].zeroPos) buf[z] = 0.0;
        } else if (g < N) {
            std::fill(buf.begin() + st[g].offD, buf.begin() + regionEnd(g), 0.0);
            st[g].dirty = false;
        } else {
            std::fill(buf.begin() + offG, buf.end(), 0.0);
        }
        double* base = &buf[g < N ? st[g].offD : offG];
        const int32_t* pd = pDst.data();
        const int32_t* ps = pSrc.data();
        const uint8_t* pf = pFlag.data();
        for (int64_t i = aGrp[g]; i < aGrp[g + 1]; ++i) {
            if (pf[i] & 1) base[pd[i]] = data[ps[i]];
            else base[pd[i]] += data[ps[i]];
        }
    }
    void loadD(int64_t k, const double* data) {     // stage k's D block alone
        const Stage& g = st[k];
        std::fill(buf.begin() + g.offD, buf.begin() + g.offD + (int64_t)g.n * g.n, 0.0);
        double* base = &buf[g.offD];
        for (int64_t i = aGrp[k]; i < aGrp[k + 1]; ++i)
            if (pFlag[i] & 2) base[pDst[i]] += data[pSrc[i]];
    }
};

// C = sum_t A_t B_t' for t < kd: A_t = A + t*lda (m values), B_t = B + t*ldb
// (n values); C column-major m x n, leading dimension ldc. From packed
// copies zero-padded to 8 rows / 4 columns (Ap: kd x m8, Bp: kd x n4), in
// 8 x 4 register blocks, the sum over t in order for every entry. lowerOnly:
// only the blocks that hold entries with row >= column (the others are
// left unset). Ap, Bp, Cp: workspace, Cp m8 x n4 when C cannot take it.
void gemmTN(const double* A, int lda, const double* B, int ldb, int m, int n, int kd,
            double* Ap, double* Bp, double* Cp, bool lowerOnly) {
    const int m8 = (m + 7) & ~7, n4 = (n + 3) & ~3;
    for (int t = 0; t < kd; ++t) {
        const double* a = A + (size_t)t * lda;
        const double* b = B + (size_t)t * ldb;
        double* ap = Ap + (size_t)t * m8;
        double* bp = Bp + (size_t)t * n4;
        std::memcpy(ap, a, sizeof(double) * m);
        std::memcpy(bp, b, sizeof(double) * n);
        for (int i = m; i < m8; ++i) ap[i] = 0.0;
        for (int i = n; i < n4; ++i) bp[i] = 0.0;
    }
    for (int cb = 0; cb < n4; cb += 4) {
        for (int rb = lowerOnly ? (cb & ~7) : 0; rb < m8; rb += 8) {
            __m256d c00 = _mm256_setzero_pd(), c01 = _mm256_setzero_pd();
            __m256d c10 = _mm256_setzero_pd(), c11 = _mm256_setzero_pd();
            __m256d c20 = _mm256_setzero_pd(), c21 = _mm256_setzero_pd();
            __m256d c30 = _mm256_setzero_pd(), c31 = _mm256_setzero_pd();
            const double* ap = Ap + rb;
            const double* bp = Bp + cb;
            for (int t = 0; t < kd; ++t) {
                const __m256d a0 = _mm256_loadu_pd(ap), a1 = _mm256_loadu_pd(ap + 4);
                __m256d b = _mm256_broadcast_sd(bp);
                c00 = _mm256_fmadd_pd(a0, b, c00); c01 = _mm256_fmadd_pd(a1, b, c01);
                b = _mm256_broadcast_sd(bp + 1);
                c10 = _mm256_fmadd_pd(a0, b, c10); c11 = _mm256_fmadd_pd(a1, b, c11);
                b = _mm256_broadcast_sd(bp + 2);
                c20 = _mm256_fmadd_pd(a0, b, c20); c21 = _mm256_fmadd_pd(a1, b, c21);
                b = _mm256_broadcast_sd(bp + 3);
                c30 = _mm256_fmadd_pd(a0, b, c30); c31 = _mm256_fmadd_pd(a1, b, c31);
                ap += m8;
                bp += n4;
            }
            double* u = Cp + (size_t)cb * m8 + rb;
            _mm256_storeu_pd(u, c00);          _mm256_storeu_pd(u + 4, c01);
            _mm256_storeu_pd(u + m8, c10);     _mm256_storeu_pd(u + m8 + 4, c11);
            _mm256_storeu_pd(u + 2 * m8, c20); _mm256_storeu_pd(u + 2 * m8 + 4, c21);
            _mm256_storeu_pd(u + 3 * m8, c30); _mm256_storeu_pd(u + 3 * m8 + 4, c31);
        }
    }
}

// out = W' D^{-1} W (ncol x ncol, row-major) with W = L^{-1} P' B, from a
// Bunch-Kaufman factor A (n x n, column-major). B has nb nonzero rows: row
// b sits at position bpos[b] (before pivoting) and holds bval[b*ncol ..],
// or the identity when bval is null. The forward solve starts at the first
// factor row B reaches. W, DW: nr x ncol workspace; inv: n. Returns flops.
//   B = I_C  (C the last nc positions):  out = (S^{-1})_CC
//   B = I_E Ec':                          out = Ec (S^{-1})_EE Ec'
double wdw(const double* A_, int n, const int* perm, const int8_t* bsize, int nb,
           const int* bpos, const double* bval, int ncol, double* W, double* DW, int* inv,
           double* out, double* Ap, double* Bp, double* Cp) {
    auto A = [A_, n](int i, int j) { return A_[(size_t)j * n + i]; };
    double fl = 0.0;
    for (int t = 0; t < n; ++t) inv[perm[t]] = t;
    int lead = n;
    for (int b = 0; b < nb; ++b) lead = std::min(lead, inv[bpos[b]]);
    const int r0 = (lead > 0 && lead < n && bsize[lead] == 0) ? lead - 1 : lead;
    const int nr = n - r0;
    std::fill(W, W + (size_t)nr * ncol, 0.0);      // row-major nr x ncol; row i = factor row r0+i
    for (int b = 0; b < nb; ++b) {
        const int row = inv[bpos[b]];
        double* wr = W + (size_t)(row - r0) * ncol;
        if (bval) std::memcpy(wr, bval + (size_t)b * ncol, sizeof(double) * ncol);
        else wr[b] = 1.0;
    }
    fl += (double)nr * nr * ncol;
    auto wr = [W, ncol, r0](int i) { return W + (size_t)(i - r0) * ncol; };
    for (int kk = r0; kk < n;) {                   // L W = P' B
        if (bsize[kk] == 2) {
            const double* w0 = wr(kk);
            const double* w1 = wr(kk + 1);
            for (int i = kk + 2; i < n; ++i) {
                double l0 = A(i, kk), l1 = A(i, kk + 1);
                if (l0 == 0.0 && l1 == 0.0) continue;
                double* wi = wr(i);
                for (int c = 0; c < ncol; ++c) wi[c] -= l0 * w0[c] + l1 * w1[c];
            }
            kk += 2;
        } else {
            const double* wk = wr(kk);
            for (int i = kk + 1; i < n; ++i) {
                double l = A(i, kk);
                if (l == 0.0) continue;
                double* wi = wr(i);
                for (int c = 0; c < ncol; ++c) wi[c] -= l * wk[c];
            }
            kk += 1;
        }
    }
    for (int kk = r0; kk < n;) {                   // DW = D^{-1} W, same layout
        if (bsize[kk] == 2) {
            double p = A(kk, kk), b = A(kk + 1, kk), q = A(kk + 1, kk + 1);
            double P = p / b, S = q / b, t = 1.0 / (P * S - 1.0);
            const double* w0 = wr(kk);
            const double* w1 = wr(kk + 1);
            double* d0 = DW + (size_t)(kk - r0) * ncol;
            double* d1 = d0 + ncol;
            for (int c = 0; c < ncol; ++c) {
                d0[c] = t * (S * w0[c] - w1[c]) / b;
                d1[c] = t * (P * w1[c] - w0[c]) / b;
            }
            kk += 2;
        } else {
            double d = A(kk, kk);
            const double* wk = wr(kk);
            double* dk = DW + (size_t)(kk - r0) * ncol;
            for (int c = 0; c < ncol; ++c) dk[c] = d != 0.0 ? wk[c] / d : 0.0;
            kk += 1;
        }
    }
    // out = W' DW, symmetric: the lower blocks, then mirrored (out[a][b]
    // for a >= b from the product, its transpose above)
    if (nr == 0) {
        std::fill(out, out + (size_t)ncol * ncol, 0.0);
        return fl;
    }
    const int m8 = (ncol + 7) & ~7;
    gemmTN(DW, ncol, W, ncol, ncol, ncol, nr, Ap, Bp, Cp, true);   // Cp[b*m8 + a]
    for (int a = 0; a < ncol; ++a)
        for (int b = 0; b <= a; ++b) {
            const double v = Cp[(size_t)b * m8 + a];   // sum_i DW[i,a] W[i,b]
            out[(size_t)a * ncol + b] = v;
            out[(size_t)b * ncol + a] = v;
        }
    return fl;
}

// Dk[R[i], R[j]] -= (A B')_{ij} for i >= j (the lower triangle, in R's
// order; Dk column-major, R ascending), A and B r x w column-major with
// leading dimension ld. Packed into 8-row / 4-column panels (zero padded)
// for an AVX2 register-blocked product: per 8 x 4 block, w rank-1 steps of
// 8 FMAs from two row vectors and four broadcasts. The sum over t runs in
// order for every entry. Returns false if an updated entry exceeds bound.
bool rankUpdate(Scratch& ws, const double* A, const double* B, int ld, int r, int w,
                double* Dk, int nk, const int* R, double bound) {
    const int r8 = (r + 7) & ~7;
    double* U = ws.U.data();                       // r8 x r4, column-major, ld r8
    gemmTN(A, ld, B, ld, r, r, w, ws.Ap.data(), ws.Bt.data(), U, true);
    double big = 0.0;
    for (int c2 = 0; c2 < r; ++c2) {
        double* dcol = Dk + (size_t)R[c2] * nk;
        const double* uc = U + (size_t)c2 * r8;
        for (int i2 = c2; i2 < r; ++i2) {
            const double v = dcol[R[i2]] - uc[i2];
            dcol[R[i2]] = v;
            big = std::max(big, std::fabs(v));
        }
    }
    return !(big > bound);
}

// The paired kernel on stage g, whose block Dk is in plan order: interior
// panels with fixed 1x1/2x2 pivots, then the tail with Bunch-Kaufman.
// On exit L sits in Dk's interior columns (rows: the panel's own and R),
// the pivots in g.piv, the tail factor in g.T. Returns false if a pivot is
// singular or an update grows an entry past tau * normS (the caller then
// restores the block and uses the dense kernel).
bool pairedInterior(const Solver& s, Scratch& w_, Stage& g, double* Dk, double normS,
                    Inertia& in) {
    const int nk = g.n;
    const double bound = s.tau * normS;
    in = Inertia();
    int* rows = w_.rows.data();
    for (size_t p = 0; p < g.pc0.size(); ++p) {
        const int c0 = g.pc0[p], c1 = g.pc1[p], w = c1 - c0;
        const int r = g.rPtr[p + 1] - g.rPtr[p];
        const int* R = g.rIdx.data() + g.rPtr[p];
        const int f = w + r;
        for (int i = 0; i < w; ++i) rows[i] = c0 + i;
        for (int i = 0; i < r; ++i) rows[w + i] = R[i];
        double* Fp = w_.front.data();              // f x w, column-major, lower part
        double* WV = w_.wv.data();                 // f x w: columns at elimination time
        for (int jj = 0; jj < w; ++jj) {
            const double* col = Dk + (size_t)(c0 + jj) * nk;
            double* fc = Fp + (size_t)jj * f;
            for (int i = jj; i < f; ++i) fc[i] = col[rows[i]];
        }
        // ---- the panel's units, in its own front
        int jj = 0;
        for (int u = g.pu0[p]; u < g.pu1[p]; ++u) {
            const int b = g.unitSize[u];
            double* c0p = Fp + (size_t)jj * f;
            double* w0 = WV + (size_t)jj * f;
            if (b == 1) {
                double d = c0p[jj];
                if (d == 0.0) return false;
                g.piv[3 * u] = d;
                addPivot(in, d);
                double rd = 1.0 / d;
                for (int i = jj + 1; i < f; ++i) { w0[i] = c0p[i]; c0p[i] *= rd; }
                for (int jc = jj + 1; jc < w; ++jc) {          // update later panel columns
                    double wc = w0[jc];
                    if (wc == 0.0) continue;
                    double* fc = Fp + (size_t)jc * f;
                    if (axpyMax(fc + jc, c0p + jc, wc, f - jc) > bound) return false;   // growth
                }
            } else {
                double* c1p = c0p + f;
                double* w1 = w0 + f;
                double pp = c0p[jj], bb = c0p[jj + 1], ss = c1p[jj + 1];
                double det = pp * ss - bb * bb;
                if (det == 0.0) return false;
                g.piv[3 * u] = pp; g.piv[3 * u + 1] = bb; g.piv[3 * u + 2] = ss;
                addBlock(in, pp, bb, ss);
                double i00 = ss / det, i01 = -bb / det, i11 = pp / det;
                for (int i = jj + 2; i < f; ++i) {
                    double a0 = c0p[i], a1 = c1p[i];
                    w0[i] = a0; w1[i] = a1;
                    c0p[i] = a0 * i00 + a1 * i01;
                    c1p[i] = a0 * i01 + a1 * i11;
                }
                for (int jc = jj + 2; jc < w; ++jc) {
                    double wc0 = w0[jc], wc1 = w1[jc];
                    if (wc0 == 0.0 && wc1 == 0.0) continue;
                    double* fc = Fp + (size_t)jc * f;
                    if (axpy2Max(fc + jc, c0p + jc, wc0, c1p + jc, wc1, f - jc) > bound)
                        return false;                                        // growth
                }
            }
            jj += b;
        }
        // ---- R x R update, U = L_R WV_R' (rank w), subtracted in Dk
        if (r) {
            if (!rankUpdate(w_, Fp + w, WV + w, f, r, w, Dk, nk, R, bound)) return false;
        }
        // ---- L back into the block's columns (rows below each unit)
        jj = 0;
        for (int u = g.pu0[p]; u < g.pu1[p]; ++u) {
            const int b = g.unitSize[u];
            for (int t = 0; t < b; ++t) {
                const double* fc = Fp + (size_t)(jj + t) * f;
                double* col = Dk + (size_t)(c0 + jj + t) * nk;
                for (int i = jj + b; i < f; ++i) col[rows[i]] = fc[i];
            }
            jj += b;
        }
    }
    return true;
}

// One stage's independent work: scatter its values, the block max, and --
// with a plan -- the paired interior. Then marks the stage ready.
void stageJob(Solver& s, Scratch& w, int64_t k) {
    using clk = std::chrono::steady_clock;
    auto sec = [](clk::time_point a, clk::time_point b) {
        return std::chrono::duration<double>(b - a).count(); };
    const auto t0 = clk::now();
    Stage& g = s.st[k];
    for (double& v : g.tParts) v = 0.0;
    s.load(k, s.curData);
    const auto t1 = clk::now();
    g.tParts[0] = sec(t0, t1);
    double* Dk = &s.buf[g.offD];
    double mx = 0.0;                                // the block's max: on its pattern
    for (int64_t d : g.dUniq) mx = std::max(mx, std::fabs(s.buf[d]));
    g.normS = mx;
    const auto t2 = clk::now();
    g.tParts[1] = sec(t1, t2);
    g.refused = false;
    g.inIn = Inertia();
    if (g.hasPlan) {
        g.refused = !pairedInterior(s, w, g, Dk, g.normS, g.inIn);
        const auto t3 = clk::now();
        g.tParts[2] = sec(t2, t3);
        if (!g.refused) {                           // the tail's partners, here
            const int nk = g.n, nI = g.nI, nT = nk - nI, pT = nT - g.nQ;
            double* T = g.T.data();
            for (int j = 0; j < nT; ++j) {
                const double* col = Dk + (size_t)(nI + j) * nk + nI;
                for (int i = j; i < nT; ++i) T[(size_t)j * nT + i] = col[i];
            }
            Inertia pin;
            const bool ok = bkFactorPartial(nT, pT, T, g.tperm.data(), g.tbsize.data(),
                                            w.work.data(), pin, s.tau * g.normS, w.WQ.data(),
                                            w.Ap.data(), w.Bt.data(), w.U.data());
            g.tailMode = ok ? 0 : 1;                // refused: the chain does the whole tail
            if (ok) {
                g.inIn.pos += pin.pos; g.inIn.neg += pin.neg; g.inIn.zero += pin.zero;
                g.inIn.n2x2 += pin.n2x2;
                g.inIn.minPivot = std::min(g.inIn.minPivot, pin.minPivot);
            }
            g.tParts[3] = sec(t3, clk::now());
        }
    }
    g.tJob = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
    s.ready[k].store(1, std::memory_order_release);
}

// ---- the solve. With u_k = S_k^{-1} r_k (stage k's own right-hand side),
//     x_k = u_k - S_k^{-1} g_k,   g_k = [incoming update on P] + [E_k' x_{k+1}
//                                        + F_k' x_G on C],
// and g_k lives on C (P is in C by construction). So the chain needs S_k^{-1}
// only on C x P -- MP, kept by the factorisation -- and runs on small
// vectors: forward, w_k = u_k - MP inc on C, and the couplings from it;
// backward, x_k on P = w_k - MP' t_C. Everything of stage size is a
// parallel job: before, u_k (interior forward, tail solve; the interior
// backward pass is linear, so it is left for after); after, the tail solve
// of g_k (on Q only: C and P are in Q), x_T = u_T - that, and the one
// interior backward pass over [u_I ; x_T].

// forward substitution through the interior panels, then the interior pivots
void interiorForward(const Stage& g, const double* Dk, double* y) {
    const int nk = g.n;
    auto L = [Dk, nk](int i, int j) { return Dk[(size_t)j * nk + i]; };
    const int np = (int)g.pc0.size();
    for (int p = 0; p < np; ++p) {
        const int c1 = g.pc1[p];
        const int* R = g.rIdx.data() + g.rPtr[p];
        const int nr = g.rPtr[p + 1] - g.rPtr[p];
        int jj = g.pc0[p];
        for (int u = g.pu0[p]; u < g.pu1[p]; ++u) {
            const int b = g.unitSize[u];
            for (int t = 0; t < b; ++t) {
                const double v = y[jj + t];
                if (v == 0.0) continue;
                const double* col = Dk + (size_t)(jj + t) * nk;
                for (int i = jj + b; i < c1; ++i) y[i] -= col[i] * v;
                for (int i = 0; i < nr; ++i) y[R[i]] -= L(R[i], jj + t) * v;
            }
            jj += b;
        }
    }
    int u = 0;
    for (int j = 0; j < g.nI; ++u) {
        if (g.unitSize[u] == 1) {
            y[j] /= g.piv[3 * u];
            j += 1;
        } else {
            double pp = g.piv[3 * u], bb = g.piv[3 * u + 1], ss = g.piv[3 * u + 2];
            double det = pp * ss - bb * bb, y0 = y[j], y1 = y[j + 1];
            y[j] = (ss * y0 - bb * y1) / det;
            y[j + 1] = (pp * y1 - bb * y0) / det;
            j += 2;
        }
    }
}

// backward substitution through the interior panels (the tail is final)
void interiorBackward(const Stage& g, const double* Dk, double* y) {
    const int nk = g.n;
    auto L = [Dk, nk](int i, int j) { return Dk[(size_t)j * nk + i]; };
    for (int p = (int)g.pc0.size() - 1; p >= 0; --p) {
        const int c1 = g.pc1[p];
        const int* R = g.rIdx.data() + g.rPtr[p];
        const int nr = g.rPtr[p + 1] - g.rPtr[p];
        int jj = c1;
        for (int u2 = g.pu1[p] - 1; u2 >= g.pu0[p]; --u2) {
            const int b = g.unitSize[u2];
            jj -= b;
            for (int t = 0; t < b; ++t) {
                const double* col = Dk + (size_t)(jj + t) * nk;
                double acc = 0.0;
                for (int i = jj + b; i < c1; ++i) acc += col[i] * y[i];
                for (int i = 0; i < nr; ++i) acc += L(R[i], jj + t) * y[R[i]];
                y[jj + t] -= acc;
            }
        }
    }
}

// the paired tail's solve, in place on yt (the tail, nk - nI, factor order).
// qOnly: yt is zero outside Q (a correction, nonzero on C only), so the
// partners' forward pass and pivots are skipped -- they would act on zeros.
void tailSolve(const Stage& g, double* yt, bool qOnly, double* z, double* ywork) {
    const int nT = g.n - g.nI;
    if (g.tailMode == 1) {                          // one factor
        bkSolve(nT, g.T.data(), g.tperm.data(), g.tbsize.data(), yt, ywork);
        return;
    }
    const int pT = nT - g.nQ;
    const double* T = g.T.data();
    auto Tl = [T, nT](int i, int j) { return T[(size_t)j * nT + i]; };
    for (int i = 0; i < nT; ++i) z[i] = yt[g.tperm[i]];
    if (!qOnly) {
        for (int k = 0; k < pT;) {                  // partners: L z = P b
            if (g.tbsize[k] == 2) {
                const double z0 = z[k], z1 = z[k + 1];
                const double* c0 = T + (size_t)k * nT;
                const double* c1 = c0 + nT;
                for (int i = k + 2; i < nT; ++i) z[i] -= c0[i] * z0 + c1[i] * z1;
                k += 2;
            } else {
                const double zk = z[k];
                const double* ck = T + (size_t)k * nT;
                for (int i = k + 1; i < nT; ++i) z[i] -= ck[i] * zk;
                k += 1;
            }
        }
        for (int k = 0; k < pT;) {                  // partners: D
            if (g.tbsize[k] == 2) {
                double pp = Tl(k, k), b = Tl(k + 1, k), qq = Tl(k + 1, k + 1);
                double P = pp / b, S = qq / b, t = 1.0 / (P * S - 1.0);
                double z0 = z[k], z1 = z[k + 1];
                z[k] = t * (S * z0 - z1) / b;
                z[k + 1] = t * (P * z1 - z0) / b;
                k += 2;
            } else {
                z[k] /= Tl(k, k);
                k += 1;
            }
        }
    }
    if (g.nQ) bkSolve(g.nQ, g.Qf.data(), g.qperm.data(), g.qbsize.data(), z + pT, ywork);
    for (int k = pT - 1; k >= 0;) {                 // partners: L' y = w
        if (k > 0 && g.tbsize[k] == 0) {
            const double* c0 = T + (size_t)(k - 1) * nT;
            const double* c1 = c0 + nT;
            double s0 = 0.0, s1 = 0.0;
            for (int i = k + 1; i < nT; ++i) { s0 += c0[i] * z[i]; s1 += c1[i] * z[i]; }
            z[k - 1] -= s0;
            z[k] -= s1;
            k -= 2;
        } else {
            const double* ck = T + (size_t)k * nT;
            double acc = 0.0;
            for (int i = k + 1; i < nT; ++i) acc += ck[i] * z[i];
            z[k] -= acc;
            k -= 1;
        }
    }
    for (int i = 0; i < nT; ++i) yt[g.tperm[i]] = z[i];
}

// solve job, forward: gather stage k's right-hand side into factor order,
// then u_k -- except the interior backward pass
void solveFwdJob(Solver& s, Scratch& w, int64_t k) {
    const auto t0 = std::chrono::steady_clock::now();
    const Stage& g = s.st[k];
    double* y = s.Ys.data() + s.start[k];
    const int64_t* gi = s.gidx.data() + s.start[k];
    const double* b = s.curB;
    for (int i = 0; i < g.n; ++i) y[i] = b[gi[i]];
    const double* Dk = &s.buf[g.offD];
    if (g.paired) {
        interiorForward(g, Dk, y);
        tailSolve(g, y + g.nI, false, w.sz.data(), w.sy.data());
    } else {
        bkSolve(g.n, Dk, g.perm.data(), g.bsize.data(), y, w.sy.data());
    }
    g.tJob = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
    s.ready[k].store(1, std::memory_order_release);
}

// solve job, backward: x_k = u_k - S_k^{-1} g_k (g_k on C: the correction
// t_C plus the incoming update on P), the interior backward pass, then
// scatter stage k's solution into b
void solveBwdJob(Solver& s, Scratch& w, int64_t k) {
    const auto t0 = std::chrono::steady_clock::now();
    const Stage& g = s.st[k];
    double* y = s.Ys.data() + s.start[k];
    const double* Dk = &s.buf[g.offD];
    const int off = g.paired ? g.nI : 0, len = g.n - off;
    double* h = w.h.data();
    std::fill(h, h + len, 0.0);
    bool any = false;
    const int nc = (int)g.C.size(), np = (int)g.idxP.size();
    for (int c = 0; c < nc; ++c)
        if (g.tC[c] != 0.0) { h[g.Cq[c] - off] += g.tC[c]; any = true; }
    for (int a = 0; a < np; ++a)
        if (g.incS[a] != 0.0) { h[g.Cq[g.idxP[a]] - off] += g.incS[a]; any = true; }
    if (any) {
        if (g.paired) tailSolve(g, h, true, w.sz.data(), w.sy.data());
        else bkSolve(g.n, Dk, g.perm.data(), g.bsize.data(), h, w.sy.data());
        double* yt = y + off;
        for (int i = 0; i < len; ++i) yt[i] -= h[i];
    }
    if (g.paired) interiorBackward(g, Dk, y);
    const int64_t* gi = s.gidx.data() + s.start[k];
    double* b = s.curB;
    for (int i = 0; i < g.n; ++i) b[gi[i]] = y[i];
    g.tJob = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
    s.ready[k].store(1, std::memory_order_release);
}

// the next job below both `limit` and maxJ: >= 0 its number, -1 none left
// (below maxJ), -2 none released yet
int64_t takeJob(Solver& s, int64_t maxJ) {
    if (s.mode == 0) {                              // stage jobs 0..N-1, post jobs N..2N-1
        const int64_t N = s.N;
        if (maxJ > N) {                             // workers (and the finish): post jobs first
            int64_t p = s.nextPost.load();
            const int64_t rel = s.released.load(std::memory_order_acquire);
            while (p < rel)
                if (s.nextPost.compare_exchange_weak(p, p + 1)) return N + p;
        }
        int64_t j = s.next.load();
        while (j < N)
            if (s.next.compare_exchange_weak(j, j + 1)) return j;
        if (maxJ <= N) return -1;                   // the chain: no stage job left
        return s.nextPost.load() >= N ? -1 : -2;
    }
    int64_t j = s.next.load();
    for (;;) {
        if (j >= maxJ) return -1;
        if (j >= s.limit.load(std::memory_order_acquire)) return -2;
        if (s.next.compare_exchange_weak(j, j + 1)) return j;
    }
}

void runJob(Solver& s, Scratch& w, int64_t j);

// wait until job j is done, doing jobs below maxJ meanwhile
void awaitReady(Solver& s, int64_t j, int64_t maxJ, Scratch& w) {
    while (!s.ready[j].load(std::memory_order_acquire)) {
        const int64_t i = takeJob(s, maxJ);
        if (i >= 0) runJob(s, w, i);
        else std::this_thread::yield();
    }
}

// ---- the factorisation's jobs besides the stage jobs (0..N-1):
// job N+k, stage k's post job, released once the chain has factorised the
// stage: (S_k^{-1})_CC from the stored factor, and what the solve and the
// border need from it. The border's own recurrence (F's fill, G's updates)
// follows the post jobs step by step (driveBorder). The chain itself only
// passes the update for the next stage on.

// the factor that holds C as its last nc positions
void stageFactor(Solver& s, const Stage& g, const double*& A, int& n, const int*& perm,
                 const int8_t*& bsize) {
    if (g.paired && g.tailMode == 1) {
        A = g.T.data(); n = g.n - g.nI; perm = g.tperm.data(); bsize = g.tbsize.data();
    } else if (g.paired) {
        A = g.Qf.data(); n = g.nQ; perm = g.qperm.data(); bsize = g.qbsize.data();
    } else {
        A = &s.buf[g.offD]; n = g.n; perm = g.perm.data(); bsize = g.bsize.data();
    }
}

void mulABt(const double* a, int na, const double* b, int nb, int k, double* out, double* bt);
void driveBorder(Solver& s);

void postJob(Solver& s, Scratch& w, int64_t k) {
    const auto t0 = std::chrono::steady_clock::now();
    const Stage& g = s.st[k];
    Stage& gm = s.st[k];
    const int nc = (int)g.C.size(), np = (int)g.idxP.size();
    const int ne = (int)g.eR.size(), nce = (int)g.eC.size(), nf = (int)g.fC.size();
    const int64_t m = s.m;
    double* M = w.M.data();
    gm.flI = 0.0;
    if (nc) {
        const double* A; int n; const int* perm; const int8_t* bsize;
        stageFactor(s, g, A, n, perm, bsize);
        int* bpos = w.bpos.data();
        for (int c = 0; c < nc; ++c) bpos[c] = n - nc + c;
        gm.flI = wdw(A, n, perm, bsize, nc, bpos, nullptr, nc, w.W.data(), w.DW.data(),
                     w.inv.data(), M, w.Ap.data(), w.Bt.data(), w.U.data());
    }
    double* MPk = gm.MP.data();                    // (S^{-1})_{C,P}, for the solve
    for (int c = 0; c < nc; ++c)
        for (int a = 0; a < np; ++a) MPk[(size_t)c * np + a] = M[(size_t)c * nc + g.idxP[a]];
    if (m && nf) {
        if (ne) {                                  // XE = Ec M_FE'   (ne x nf)
            double* MS = w.MS.data();
            for (int c = 0; c < nf; ++c)
                for (int c2 = 0; c2 < nce; ++c2)
                    MS[(size_t)c * nce + c2] = M[(size_t)g.idxF[c] * nc + g.idxE[c2]];
            mulABt(&s.buf[g.offE], ne, MS, nf, nce, gm.XE.data(), w.BT.data());
        }
        double* MFF = gm.MFF.data();               // M_FF
        for (int c = 0; c < nf; ++c)
            for (int c2 = 0; c2 < nf; ++c2)
                MFF[(size_t)c * nf + c2] = M[(size_t)g.idxF[c] * nc + g.idxF[c2]];
    }
    g.tPost = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
    s.ready[s.N + k].store(1);
    driveBorder(s);
}

// border step k: F's fill from stage k-1, then stage k's F on fC (kept for
// the solve), the fill for stage k+1, and G -= Fc M_FF Fc'
void borderStep(Solver& s, int64_t k) {
    const int64_t m = s.m;
    Stage& g = s.st[k];
    const int nk = g.n, ne = (int)g.eR.size(), nf = (int)g.fC.size();
    const int nePrev = s.bNePrev;
    if (nePrev)
        for (int64_t gg = 0; gg < m; ++gg) {
            double* fk = &s.buf[g.offF + gg * nk];
            const double* dr = s.dF.data() + (size_t)gg * nePrev;
            for (int b = 0; b < nePrev; ++b) fk[s.st[k - 1].eR[b]] -= dr[b];
        }
    s.bNePrev = 0;
    if (!m || !nf) return;
    double* Fc = g.Fc.data();
    for (int64_t gg = 0; gg < m; ++gg)
        for (int c = 0; c < nf; ++c) Fc[(size_t)gg * nf + c] = s.F(g, (int)gg, g.fC[c]);
    if (ne) {
        mulABt(Fc, (int)m, g.XE.data(), ne, nf, s.dF.data(), s.BT.data());   // dF = Fc XE'
        s.bNePrev = ne;
    }
    double* X = s.X.data();
    double* Y = s.Yu.data();
    mulABt(Fc, (int)m, g.MFF.data(), nf, nf, X, s.BT.data());   // X = Fc M_FF'  (m x nf)
    mulABt(Fc, (int)m, X, (int)m, nf, Y, s.BT.data());          // Y = Fc X'     (m x m)
    double* Gb = &s.buf[s.offG];
    for (int64_t i = 0; i < m * m; ++i) Gb[i] -= Y[i];
}

// run every border step whose post job is done, in order, if no other
// thread is. Releasing the token and re-checking (both seq_cst, as is the
// post job's ready store before its call here) means a step that became
// ready meanwhile is never left: either this thread sees it, or the thread
// that readied it sees the token free.
void driveBorder(Solver& s) {
    const int64_t N = s.N;
    auto readyNext = [&] {
        const int64_t k = s.bNext.load();
        return k < N && s.ready[N + k].load();
    };
    while (readyNext()) {
        int free_ = 0;
        if (!s.bTok.compare_exchange_strong(free_, 1)) return;   // another thread has it
        const auto t0 = std::chrono::steady_clock::now();
        for (int64_t k = s.bNext.load(); k < N && s.ready[N + k].load(); ++k) {
            borderStep(s, k);
            s.bNext.store(k + 1);
        }
        s.tBorder += std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
        s.bTok.store(0);
    }
}

// job j of the current mode; backward solve jobs run from the last stage
void runJob(Solver& s, Scratch& w, int64_t j) {
    if (s.mode == 0) {
        if (j < s.N) stageJob(s, w, j);
        else postJob(s, w, j - s.N);
    } else if (s.mode == 1) {
        solveFwdJob(s, w, j);
    } else {
        solveBwdJob(s, w, s.N - 1 - j);
    }
}

// a new round of nJobs jobs. Everything a job reads is set before `next`
// is reset, so a worker still finishing the last round's bookkeeping that
// takes one of these runs it correctly.
void startJobs(Solver& s, int mode, int64_t nJobs, int64_t limit) {
    for (int64_t k = 0; k < nJobs; ++k) s.ready[k].store(0, std::memory_order_relaxed);
    s.mode = mode;
    s.nJobs = nJobs;
    s.limit.store(limit);
    s.nextPost.store(0);
    s.released.store(0);
    s.next.store(0);
    {
        std::lock_guard<std::mutex> lk(s.mx);
        s.gen++;
    }
    s.cv.notify_all();
}

// the chain waits for job k, doing jobs below maxJ itself meanwhile
void awaitJob(Solver& s, int64_t k, int64_t maxJ) { awaitReady(s, k, maxJ, s.scr[0]); }

// after the chain: every job done, and the pool idle
void finishJobs(Solver& s) {
    for (int64_t k = 0; k < s.nJobs; ++k) awaitReady(s, k, s.nJobs, s.scr[0]);
    while (s.active.load() > 0) std::this_thread::yield();
}

void workerLoop(Solver* s, int id) {
    int64_t seen = 0;
    for (;;) {
        {
            std::unique_lock<std::mutex> lk(s->mx);
            s->cv.wait(lk, [&] { return s->stop || s->gen != seen; });
            if (s->stop) return;
            seen = s->gen;
            s->active.fetch_add(1);
        }
        for (;;) {
            const int64_t j = takeJob(*s, s->nJobs);
            if (j == -1) break;
            if (j == -2) { std::this_thread::yield(); continue; }
            runJob(*s, s->scr[id], j);
        }
        s->active.fetch_sub(1);
    }
}

// the solve's index maps (after ss_create, and again after ss_set_plan
// changes the factor orders). Returns false if the last stage couples
// forward (it never does: E blocks are sub-diagonal).
bool solveIndex(Solver& s) {
    const int64_t N = s.N, m = s.m;
    s.gidx.resize(s.n);
    size_t emax = 1;
    for (int64_t k = 0; k < N; ++k) {
        Stage& g = s.st[k];
        for (int i = 0; i < g.n; ++i) s.gidx[s.start[k] + i] = s.perm[s.start[k] + g.q[i]];
        g.Cq.resize(g.C.size());
        for (size_t c = 0; c < g.C.size(); ++c) g.Cq[c] = g.qinv[g.C[c]];
        if (k + 1 == N && !g.eR.empty()) return false;
        emax = std::max(emax, g.eR.size());
    }
    for (int64_t i = 0; i < m; ++i) s.gidx[s.start[N] + i] = s.perm[s.start[N] + i];
    s.Ys.resize(s.n);
    s.yG.resize(std::max<int64_t>(m, 1));
    s.inc.resize(emax);
    s.solveIdxOk = true;
    return true;
}

void stopPool(Solver& s) {
    {
        std::lock_guard<std::mutex> lk(s.mx);
        s.stop = true;
    }
    s.cv.notify_all();
    for (auto& t : s.pool) t.join();
    s.pool.clear();
    s.stop = false;
}

void makeScratch(Solver& s, int nThreads) {
    s.scr.resize(nThreads);
    for (auto& w : s.scr) {
        w.front.resize((size_t)s.nmax * s.nmax);
        w.wv.resize((size_t)s.nmax * s.nmax);
        w.U.resize((size_t)(s.nmax + 8) * (s.nmax + 8));   // padded to 8 x 4 blocks
        w.Ap.resize((size_t)(s.nmax + 8) * (s.nmax + 8));
        w.WQ.resize((size_t)s.nmax * s.nmax);
        w.Bt.resize((size_t)(s.nmax + 8) * (s.nmax + 8));
        w.rows.resize(s.nmax);
        w.work.resize(2 * (size_t)s.nmax);
        w.sz.resize(s.nmax);
        w.sy.resize(s.nmax);
        w.h.resize(s.nmax);
        w.W.resize((size_t)s.nmax * s.wmax);
        w.DW.resize((size_t)s.nmax * s.wmax);
        w.M.resize((size_t)s.wmax * s.wmax);
        w.MS.resize((size_t)s.wmax * s.wmax);
        w.BT.resize((size_t)s.wmax * s.wmax);
        w.inv.resize(s.nmax);
        w.bpos.resize(s.wmax);
    }
}

// out (na x nb) = a (na x k) b' with b (nb x k); all row-major. The inner
// loop runs over a row of b' (bt, a transposed copy of b), a contiguous
// axpy: vectorised without reordering any sum.
void mulABt(const double* a, int na, const double* b, int nb, int k, double* out,
            double* bt) {
    for (int t = 0; t < k; ++t)
        for (int j = 0; j < nb; ++j) bt[(size_t)t * nb + j] = b[(size_t)j * k + t];
    std::fill(out, out + (size_t)na * nb, 0.0);
    for (int i = 0; i < na; ++i) {
        double* oi = out + (size_t)i * nb;
        const double* ai = a + (size_t)i * k;
        for (int t = 0; t < k; ++t) {
            const double v = ai[t];
            if (v == 0.0) continue;
            const double* bj = bt + (size_t)t * nb;
            for (int j = 0; j < nb; ++j) oi[j] += v * bj[j];
        }
    }
}

// stage-local indices arrive as int64 from Python; they are < stage size
std::vector<int> localIdx(const int64_t* b, const int64_t* e) {
    std::vector<int> out;
    out.reserve(e - b);
    for (; b != e; ++b) out.push_back(static_cast<int>(*b));
    return out;
}

std::vector<int> positionsIn(const std::vector<int>& sub, const std::vector<int>& all) {
    std::vector<int> out(sub.size());
    for (size_t i = 0; i < sub.size(); ++i)
        out[i] = (int)(std::lower_bound(all.begin(), all.end(), sub[i]) - all.begin());
    return out;
}

// position of v in the sorted vector a, or -1
int find(const std::vector<int>& a, int64_t v) {
    auto it = std::lower_bound(a.begin(), a.end(), (int)v);
    return it != a.end() && *it == v ? (int)(it - a.begin()) : -1;
}

// The active scatter for the current factor orders: D entries placed at
// (row qinv[c], column qinv[r]) column-major, kept only in the lower
// triangle; E, F and G entries as they are.
void buildActive(Solver& s) {
    s.aDst.clear(); s.aSrc.clear(); s.aIsD.clear();
    s.aGrp.assign(s.N + 2, 0);
    for (int64_t k = 0; k <= s.N; ++k) {
        for (int64_t i = s.grp[k]; i < s.grp[k + 1]; ++i) {
            int64_t d = s.dst[i];
            const bool isD = k < s.N && s.dR[i] >= 0;
            if (isD) {
                const Stage& g = s.st[k];
                const int col = g.qinv[s.dR[i]], row = g.qinv[s.dC[i]];
                if (row < col) continue;                  // the upper copy
                d = g.offD + (int64_t)col * g.n + row;
            }
            if (s.srcPtr.empty()) {
                s.aDst.push_back(d);
                s.aSrc.push_back(s.src[i]);
                s.aIsD.push_back(isD ? 1 : 0);
            } else {                                  // one entry per triplet of it
                const int64_t c = s.src[i];
                for (int64_t q = s.srcPtr[(size_t)c]; q < s.srcPtr[(size_t)c + 1]; ++q) {
                    s.aDst.push_back(d);
                    s.aSrc.push_back(s.srcIdx[(size_t)q]);
                    s.aIsD.push_back(isD ? 1 : 0);
                }
            }
        }
        s.aGrp[k + 1] = (int64_t)s.aDst.size();
        if (!s.srcPtr.empty()) {                      // read the triplets in order
            const int64_t a = s.aGrp[k], b = s.aGrp[k + 1];
            std::vector<int64_t> ord((size_t)(b - a));
            for (int64_t i = 0; i < b - a; ++i) ord[(size_t)i] = a + i;
            std::stable_sort(ord.begin(), ord.end(),
                             [&](int64_t x, int64_t y) { return s.aSrc[(size_t)x] < s.aSrc[(size_t)y]; });
            std::vector<int64_t> d2, s2;
            std::vector<char> i2;
            for (int64_t i : ord) {
                d2.push_back(s.aDst[(size_t)i]);
                s2.push_back(s.aSrc[(size_t)i]);
                i2.push_back(s.aIsD[(size_t)i]);
            }
            std::copy(d2.begin(), d2.end(), s.aDst.begin() + a);
            std::copy(s2.begin(), s2.end(), s.aSrc.begin() + a);
            std::copy(i2.begin(), i2.end(), s.aIsD.begin() + a);
        }
    }
    // the first write to each destination assigns, the others add
    s.aFirst.assign(s.aDst.size(), 0);
    std::vector<std::pair<int64_t, int64_t>> di;
    for (int64_t k = 0; k <= s.N; ++k) {
        di.clear();
        for (int64_t i = s.aGrp[k]; i < s.aGrp[k + 1]; ++i) di.push_back({s.aDst[i], i});
        std::sort(di.begin(), di.end());
        for (size_t t = 0; t < di.size(); ++t)
            if (t == 0 || di[t].first != di[t - 1].first) s.aFirst[(size_t)di[t].second] = 1;
        if (k == s.N) break;
        Stage& g = s.st[k];
        g.dirty = true;                             // the layout may have changed
        g.dUniq.clear();
        std::vector<int64_t> dsts;
        for (size_t t = 0; t < di.size(); ++t) {
            if (t && di[t].first == di[t - 1].first) continue;
            dsts.push_back(di[t].first);
            if (s.aIsD[(size_t)di[t].second]) g.dUniq.push_back(di[t].first);
        }
        // what a paired factorisation writes besides the pattern: each
        // panel's columns (rows below, in the panel and R), R x R (lower),
        // and the border fill into F's columns eR_{k-1}
        std::vector<int64_t> z;
        const int64_t nk = g.n;
        if (g.hasPlan) {
            for (size_t p = 0; p < g.pc0.size(); ++p) {
                const int c0 = g.pc0[p], c1 = g.pc1[p];
                const int* R = g.rIdx.data() + g.rPtr[p];
                const int nr = g.rPtr[p + 1] - g.rPtr[p];
                for (int j = c0; j < c1; ++j) {
                    for (int i = j + 1; i < c1; ++i) z.push_back(g.offD + j * nk + i);
                    for (int i = 0; i < nr; ++i) z.push_back(g.offD + j * nk + R[i]);
                }
                for (int c2 = 0; c2 < nr; ++c2)
                    for (int i2 = c2; i2 < nr; ++i2) z.push_back(g.offD + R[c2] * nk + R[i2]);
            }
        }
        if (k > 0)
            for (int64_t gg = 0; gg < s.m; ++gg)
                for (int r : s.st[k - 1].eR) z.push_back(g.offF + gg * nk + r);
        std::sort(z.begin(), z.end());
        z.erase(std::unique(z.begin(), z.end()), z.end());
        g.zeroPos.clear();
        std::set_difference(z.begin(), z.end(), dsts.begin(), dsts.end(),
                            std::back_inserter(g.zeroPos));
    }
    // the packed copy the loads use
    const size_t na = s.aDst.size();
    s.pDst.resize(na); s.pSrc.resize(na); s.pFlag.resize(na);
    for (int64_t k = 0; k <= s.N; ++k) {
        const int64_t base = k < s.N ? s.st[k].offD : s.offG;
        for (int64_t i = s.aGrp[k]; i < s.aGrp[k + 1]; ++i) {
            s.pDst[(size_t)i] = (int32_t)(s.aDst[(size_t)i] - base);
            s.pSrc[(size_t)i] = (int32_t)s.aSrc[(size_t)i];
            s.pFlag[(size_t)i] = (uint8_t)((s.aFirst[(size_t)i] ? 1 : 0) | (s.aIsD[(size_t)i] ? 2 : 0));
        }
    }
}

}  // namespace

extern "C" {

// ---------------------------------------------------------------- dense --

__declspec(dllexport) int bk_factor(int n, double* a, int* perm, int8_t* bsize,
                                    int64_t* inertia, int64_t* n2x2, double* minPivot) {
    std::vector<double> work(2 * (size_t)std::max(n, 1));
    Inertia in = bkFactor(n, a, perm, bsize, work.data());
    inertia[0] = in.pos; inertia[1] = in.neg; inertia[2] = in.zero;
    *n2x2 = in.n2x2;
    *minPivot = n ? in.minPivot : 0.0;
    return 0;
}

// b: nrhs right-hand sides, each contiguous (row-major nrhs x n); in place
__declspec(dllexport) void bk_solve(int n, const double* a, const int* perm,
                                    const int8_t* bsize, double* b, int64_t nrhs) {
    std::vector<double> y((size_t)std::max(n, 1));
    for (int64_t r = 0; r < nrhs; ++r) bkSolve(n, a, perm, bsize, b + r * n, y.data());
}

// --------------------------------------------------------------- sweep --

// The arguments describe structured.py's StageStructure: its block layout
// (offD/offE/offF/offG, E stored full) and the scatter map into it. This
// solver builds its own compact layout from them and remaps the scatter.
// Returns nullptr if the map has an entry the layout cannot place.
__declspec(dllexport) void* ss_create(
        int64_t n, int64_t N, int64_t m, const int64_t* sizes, const int64_t* perm,
        int64_t nScatter, const int64_t* pos, const int64_t* src, int64_t size,
        const int64_t* offD, const int64_t* offE, const int64_t* offF, int64_t offG,
        const int64_t* erPtr, const int64_t* eRows, const int64_t* ecPtr,
        const int64_t* eCols, const int64_t* fPtr, const int64_t* fCols) {
    (void)size;
    Solver* s = new (std::nothrow) Solver;
    if (!s) return nullptr;
    s->n = n; s->N = N; s->m = m;
    s->perm.assign(perm, perm + n);
    s->start.assign(N + 2, 0);
    for (int64_t k = 0; k <= N; ++k) s->start[k + 1] = s->start[k] + sizes[k];
    s->st.resize(N);
    int nmax = (int)std::max<int64_t>(m, 1), cmax = 1, emax = 1;
    int64_t cur = 0;
    for (int64_t k = 0; k < N; ++k) {
        Stage& g = s->st[k];
        g.n = (int)sizes[k];
        nmax = std::max(nmax, g.n);
        g.eR = localIdx(eRows + erPtr[k], eRows + erPtr[k + 1]);
        g.eC = localIdx(eCols + ecPtr[k], eCols + ecPtr[k + 1]);
        g.fC = localIdx(fCols + fPtr[k], fCols + fPtr[k + 1]);
        g.C = g.eC;
        g.C.insert(g.C.end(), g.fC.begin(), g.fC.end());
        if (k > 0) {                                    // P: the solve reads S^{-1} there
            const std::vector<int>& P = s->st[k - 1].eR;
            g.C.insert(g.C.end(), P.begin(), P.end());
        }
        std::sort(g.C.begin(), g.C.end());
        g.C.erase(std::unique(g.C.begin(), g.C.end()), g.C.end());
        g.idxE = positionsIn(g.eC, g.C);
        g.idxF = positionsIn(g.fC, g.C);
        g.idxP = k > 0 ? positionsIn(s->st[k - 1].eR, g.C) : std::vector<int>();
        {
            const size_t nc = g.C.size(), np = g.idxP.size();
            g.MP.assign(nc * np, 0.0);
            g.XE.assign(g.eR.size() * g.fC.size(), 0.0);
            g.MFF.assign(g.fC.size() * g.fC.size(), 0.0);
            g.Fc.assign((size_t)m * g.fC.size(), 0.0);
            g.wC.assign(nc, 0.0);
            g.tC.assign(nc, 0.0);
            g.incS.assign(np, 0.0);
            g.xP.assign(np, 0.0);
        }
        std::vector<char> inC(g.n, 0);                 // default order: interior, then C
        for (int c : g.C) inC[c] = 1;
        for (int i = 0; i < g.n; ++i) if (!inC[i]) g.q.push_back(i);
        g.q.insert(g.q.end(), g.C.begin(), g.C.end());
        g.qinv.resize(g.n);
        for (int i = 0; i < g.n; ++i) g.qinv[g.q[i]] = i;
        g.perm.resize(g.n);
        g.bsize.resize(g.n);
        cmax = std::max(cmax, (int)g.C.size());
        emax = std::max(emax, (int)std::max(g.eR.size(), g.eC.size()));
        g.offD = cur; cur += (int64_t)g.n * g.n;
        g.offE = cur; cur += (int64_t)g.eR.size() * g.eC.size();
        g.offF = cur; cur += m * g.n;
    }
    s->offG = cur; cur += m * m;
    s->size = cur;

    // remap the scatter map into this layout, grouped by stage, sorted by src
    struct Ent { int64_t grp, dst, src; int r, c; };
    std::vector<Ent> ents((size_t)nScatter);
    for (int64_t t = 0; t < nScatter; ++t) {
        const int64_t p = pos[t];
        Ent e{N, 0, src[t], -1, -1};
        if (p >= offG) {
            e.dst = s->offG + (p - offG);
        } else {
            int64_t k = std::upper_bound(offD, offD + N, p) - offD - 1;
            const Stage& g = s->st[k];
            const int64_t nk = g.n, rel = p - offD[k], lenD = nk * nk, lenE = offF[k] - offE[k];
            e.grp = k;
            if (rel < lenD) {
                e.r = (int)(rel / nk);
                e.c = (int)(rel % nk);
                e.dst = g.offD + (int64_t)g.qinv[e.r] * nk + g.qinv[e.c];
            } else if (rel < lenD + lenE) {
                int a = find(g.eR, (rel - lenD) / nk), c = find(g.eC, (rel - lenD) % nk);
                if (a < 0 || c < 0) { delete s; return nullptr; }
                e.dst = g.offE + (int64_t)a * (int64_t)g.eC.size() + c;
            } else {
                e.dst = g.offF + (rel - lenD - lenE);    // F keeps the Python layout: m x n
            }
        }
        ents[(size_t)t] = e;
    }
    std::sort(ents.begin(), ents.end(), [](const Ent& a, const Ent& b) {
        return a.grp != b.grp ? a.grp < b.grp : a.src < b.src; });
    s->dst.resize(ents.size());
    s->src.resize(ents.size());
    s->dR.resize(ents.size());
    s->dC.resize(ents.size());
    s->grp.assign(N + 2, 0);
    for (size_t t = 0; t < ents.size(); ++t) {
        s->dst[t] = ents[t].dst;
        s->src[t] = ents[t].src;
        s->dR[t] = ents[t].r;
        s->dC[t] = ents[t].c;
        s->grp[ents[t].grp + 1]++;
    }
    for (int64_t g = 0; g <= N; ++g) s->grp[g + 1] += s->grp[g];

    buildActive(*s);
    s->buf.assign(s->size, 0.0);
    s->work.resize(2 * (size_t)nmax);
    s->inv.resize(nmax);
    s->y.resize(std::max<int64_t>(n, nmax));
    s->nmax = nmax;
    s->tz.resize(nmax);
    {
        const size_t w = (size_t)std::max<int64_t>(std::max(cmax, emax), m);
        s->wmax = (int)w;
        s->W.resize((size_t)nmax * w);
        s->DW.resize((size_t)nmax * w);
        s->dF.resize(w * w);
        s->delta.resize(w * w);
        s->EB.resize(w * w);
        s->Yu.resize(w * w);
        s->BT.resize(w * w);
        s->X.resize(w * w);
        s->bpos.resize(w);
        const size_t pw = (size_t)(nmax + 8) * (nmax + 8);
        s->gAp.resize(pw);
        s->gBp.resize(pw);
        s->gCp.resize(pw);
    }
    makeScratch(*s, 1);
    s->ready.reset(new std::atomic<char>[2 * N + 1]);
    s->Gf.resize((size_t)m * m);
    s->gperm.resize(m);
    s->gbsize.resize(m);
    if (!solveIndex(*s)) { delete s; return nullptr; }
    return s;
}

// The paired kernel's plans (linsolver.paired.symbolic), per stage:
// perm (stage-local, interior units then the tail, C last in sorted
// order), nI, the unit sizes, the panels (u0, u1, c0, c1) and each panel's
// rows R. Returns 0, or k+1 for the first stage whose plan is invalid.
__declspec(dllexport) int ss_set_plan(void* h, double tau, const int64_t* permFlat,
        const int64_t* nIArr, const int64_t* nQArr, const int64_t* unitPtr,
        const int64_t* unitSize,
        const int64_t* panelPtr, const int64_t* panels, const int64_t* rPtr,
        const int64_t* rIdx) {
    Solver& s = *static_cast<Solver*>(h);
    s.tau = tau;
    int64_t off = 0;
    for (int64_t k = 0; k < s.N; ++k) {
        Stage& g = s.st[k];
        const int nk = g.n;
        std::vector<int> q = localIdx(permFlat + off, permFlat + off + nk);
        off += nk;
        std::vector<int> seen(nk, 0);
        for (int v : q) { if (v < 0 || v >= nk || seen[v]++) return (int)k + 1; }
        const int nc = (int)g.C.size();
        for (int c = 0; c < nc; ++c) if (q[nk - nc + c] != g.C[c]) return (int)k + 1;
        g.q = q;
        for (int i = 0; i < nk; ++i) g.qinv[g.q[i]] = i;
        g.nI = (int)nIArr[k];
        if (g.nI > nk - nc) return (int)k + 1;
        g.unitSize = localIdx(unitSize + unitPtr[k], unitSize + unitPtr[k + 1]);
        int cols = 0;
        for (int b : g.unitSize) cols += b;
        if (cols != g.nI) return (int)k + 1;
        g.pu0.clear(); g.pu1.clear(); g.pc0.clear(); g.pc1.clear();
        g.rPtr.assign(1, 0); g.rIdx.clear();
        for (int64_t p = panelPtr[k]; p < panelPtr[k + 1]; ++p) {
            g.pu0.push_back((int)panels[4 * p]);
            g.pu1.push_back((int)panels[4 * p + 1]);
            g.pc0.push_back((int)panels[4 * p + 2]);
            g.pc1.push_back((int)panels[4 * p + 3]);
            for (int64_t i = rPtr[p]; i < rPtr[p + 1]; ++i) g.rIdx.push_back((int)rIdx[i]);
            g.rPtr.push_back((int)g.rIdx.size());
        }
        const int nT = nk - g.nI;
        g.nQ = (int)nQArr[k];
        if (g.nQ < nc || g.nQ > nT) return (int)k + 1;
        g.piv.assign(3 * g.unitSize.size(), 0.0);
        g.T.assign((size_t)nT * nT, 0.0);
        g.tperm.resize(nT);
        g.tbsize.resize(std::max(nT, 1));          // the whole tail, if partners refuse
        g.Qf.assign((size_t)g.nQ * g.nQ, 0.0);
        g.qperm.resize(g.nQ);
        g.qbsize.resize(std::max(g.nQ, 1));
        g.hasPlan = true;
    }
    for (int64_t k = 1; k < s.N; ++k) {             // incoming rows must land in Q
        const Stage& g = s.st[k];
        for (int r : s.st[k - 1].eR)
            if (g.qinv[r] < g.n - g.nQ) return (int)k + 1;
    }
    buildActive(s);
    if (!solveIndex(s)) return (int)s.N;
    return 0;
}

// out[8] seconds per phase of the last ss_factor (the 6 phases, then the
// paired kernel's interior and tail, both inside "stage kernels"), fl[2]
// nominal flops,
// fb[1] stages that fell back from the paired kernel to the dense one
// debug/benchmark: 1 clears every stage block in full on each load
__declspec(dllexport) void ss_debug_always_dirty(void* h, int on) {
    static_cast<Solver*>(h)->alwaysDirty = on != 0;
}

// From now on ss_factor's data is nz TRIPLET values, triplet t adding to
// entry tmap[t] (0..nnz-1) of the pattern the scatter was built for: the
// stage jobs then scatter the triplets themselves (no serial pass to sum
// them into the pattern's order first). Duplicates sum.
__declspec(dllexport) int ss_set_source(void* h, int64_t nnz, int64_t nz, const int64_t* tmap) {
    Solver& s = *static_cast<Solver*>(h);
    std::vector<int64_t> ptr((size_t)nnz + 1, 0), idx((size_t)nz);
    for (int64_t t = 0; t < nz; ++t) {
        if (tmap[t] < 0 || tmap[t] >= nnz) return 1;
        ptr[(size_t)tmap[t] + 1]++;
    }
    for (int64_t c = 0; c < nnz; ++c) ptr[(size_t)c + 1] += ptr[(size_t)c];
    std::vector<int64_t> fill(ptr.begin(), ptr.end() - 1);
    for (int64_t t = 0; t < nz; ++t) idx[(size_t)fill[(size_t)tmap[t]]++] = t;
    s.srcPtr = std::move(ptr);
    s.srcIdx = std::move(idx);
    buildActive(s);
    return 0;
}

// out[3N]: each stage's (pos, neg, zero) in the last ss_factor, sweep order
__declspec(dllexport) void ss_stage_inertia(void* h, int64_t* out) {
    Solver& s = *static_cast<Solver*>(h);
    for (int64_t k = 0; k < s.N; ++k) {
        out[3 * k] = s.st[k].inPos; out[3 * k + 1] = s.st[k].inNeg; out[3 * k + 2] = s.st[k].inZero;
    }
}

// the paired kernel's growth bound alone (the plans and layout stay)
__declspec(dllexport) void ss_set_tau(void* h, double tau) {
    static_cast<Solver*>(h)->tau = tau;
}

// out[4]: the last ss_factor's stage jobs, seconds summed over stages:
// scatter, block max, paired interior, tail partners
__declspec(dllexport) void ss_job_profile(void* h, double* out) {
    Solver& s = *static_cast<Solver*>(h);
    for (int i = 0; i < 4; ++i) out[i] = 0.0;
    for (const Stage& g : s.st)
        for (int i = 0; i < 4; ++i) out[i] += g.tParts[i];
}

__declspec(dllexport) void ss_profile(void* h, double* out, double* fl, int64_t* fb) {
    Solver& s = *static_cast<Solver*>(h);
    for (int i = 0; i < 8; ++i) out[i] = s.prof[i];
    fl[0] = s.flops[0]; fl[1] = s.flops[1];
    *fb = s.fallbacks;
}

// out[N], per stage in the last ss_factor: 0 dense (no plan, or the
// interior refused), 1 paired with the partners done in the job, 2 paired
// with the partners refused and the whole tail on the chain
__declspec(dllexport) void ss_paired_flags(void* h, int8_t* out) {
    Solver& s = *static_cast<Solver*>(h);
    for (int64_t k = 0; k < s.N; ++k)
        out[k] = !s.st[k].paired ? 0 : (s.st[k].tailMode == 1 ? 2 : 1);
}

__declspec(dllexport) void ss_free(void* h) {
    Solver* s = static_cast<Solver*>(h);
    stopPool(*s);
    delete s;
}

// Threads for the stage jobs (the calling thread is one of them): n <= 1
// runs everything on the caller. Results do not depend on n.
__declspec(dllexport) void ss_set_threads(void* h, int n) {
    Solver& s = *static_cast<Solver*>(h);
    stopPool(s);
    n = std::max(n, 1);
    makeScratch(s, n);
    for (int i = 1; i < n; ++i) s.pool.emplace_back(workerLoop, &s, i);
}

// inertia[3], n2x2[1], minPivot[N+1] (per stage then the border, each
// relative to the largest entry of its block), singular[1] (stages with an
// exact zero pivot)
__declspec(dllexport) int ss_factor(void* h, const double* data, int64_t* inertia,
                                    int64_t* n2x2, double* minPivot, int64_t* singular) {
    Solver& s = *static_cast<Solver*>(h);
    using clk = std::chrono::steady_clock;
    auto sec = [](clk::time_point a, clk::time_point b) {
        return std::chrono::duration<double>(b - a).count(); };
    const auto tWall = clk::now();
    for (double& v : s.prof) v = 0.0;
    s.flops[0] = s.flops[1] = 0.0;
    s.fallbacks = 0;
    const int64_t N = s.N, m = s.m;

    // ---- start the jobs: stage jobs at once, post jobs as the chain
    // releases them; the chain takes only stage jobs itself
    s.curData = data;
    s.load(N, data);                                // the border block: the border steps'
    s.bNext.store(0);
    s.bNePrev = 0;
    s.tBorder = 0.0;
    startJobs(s, 0, 2 * N, N);

    Inertia tot;
    int64_t nsing = 0;
    int nePrev = 0;                                 // s.delta: the update from stage k-1
    for (int64_t k = 0; k < N; ++k) {
        Stage& g = s.st[k];
        const int nk = g.n, nc = (int)g.C.size();
        const int ne = (int)g.eR.size(), nce = (int)g.eC.size();
        double* Dk = &s.buf[g.offD];

        auto ta = clk::now();
        awaitJob(s, k, N);
        auto tb = clk::now();
        s.prof[1] += sec(ta, tb);

        // ---- the incoming update, from stage k-1: pinned rows only, lower
        // triangle; into the stage block (dense), or into Q inside the tail
        // (paired: the plan pins these rows in Q; position qinv - nI in T)
        auto addIncoming = [&](bool intoQ) {
            if (k == 0 || !nePrev) return;
            const Stage& h0 = s.st[k - 1];
            const int nT = nk - g.nI;
            double* base = intoQ ? g.T.data() : Dk;
            const int ld = intoQ ? nT : nk, off = intoQ ? g.nI : 0;
            for (int a = 0; a < nePrev; ++a) {
                const int qa = g.qinv[h0.eR[a]] - off;
                for (int b = 0; b < nePrev; ++b) {
                    const int qb = g.qinv[h0.eR[b]] - off;
                    if (qa >= qb) base[(int64_t)qb * ld + qa] -= s.delta[(size_t)a * nePrev + b];
                }
            }
        };
        const bool paired = g.hasPlan && !g.refused;
        if (paired && g.tailMode == 1) {            // the job's copy holds a failed partial
            const int nT = nk - g.nI;
            double* T = g.T.data();
            for (int j = 0; j < nT; ++j) {
                const double* col = Dk + (size_t)(g.nI + j) * nk + g.nI;
                for (int i = j; i < nT; ++i) T[(size_t)j * nT + i] = col[i];
            }
        }
        addIncoming(paired);
        auto tc = clk::now();
        s.prof[6] += sec(tb, tc);

        // ---- Q (paired: interior and partners are done), or the whole
        // block (dense / refused)
        Inertia in;
        g.paired = paired;
        g.dirty = !paired || s.alwaysDirty;         // dense writes the whole block
        if (g.paired && g.tailMode == 1) {
            in = g.inIn;
            const int nT = nk - g.nI;
            Inertia ti = bkFactor(nT, g.T.data(), g.tperm.data(), g.tbsize.data(), s.work.data());
            in.pos += ti.pos; in.neg += ti.neg; in.zero += ti.zero; in.n2x2 += ti.n2x2;
            in.minPivot = std::min(in.minPivot, ti.minPivot);
        } else if (g.paired) {
            in = g.inIn;
            const int nT = nk - g.nI, pT = nT - g.nQ, nQ = g.nQ;
            double* Qf = g.Qf.data();
            const double* T = g.T.data();
            for (int j = 0; j < nQ; ++j) {
                const double* col = T + (size_t)(pT + j) * nT + pT;
                for (int i = j; i < nQ; ++i) Qf[(size_t)j * nQ + i] = col[i];
            }
            Inertia qi = bkFactor(nQ, Qf, g.qperm.data(), g.qbsize.data(), s.work.data());
            in.pos += qi.pos; in.neg += qi.neg; in.zero += qi.zero; in.n2x2 += qi.n2x2;
            in.minPivot = std::min(in.minPivot, qi.minPivot);
        } else {
            if (g.hasPlan) {                        // refused: restore values + update
                s.fallbacks++;
                s.loadD(k, data);
                addIncoming(false);
            }
            in = bkFactor(nk, Dk, g.perm.data(), g.bsize.data(), s.work.data());
        }
        auto td = clk::now();
        s.prof[2] += sec(tc, td);
        s.flops[0] += (double)nk * nk * nk / 3.0;
        tot.pos += in.pos; tot.neg += in.neg; tot.zero += in.zero; tot.n2x2 += in.n2x2;
        g.inPos = in.pos; g.inNeg = in.neg; g.inZero = in.zero;
        if (in.zero) nsing++;
        minPivot[k] = g.normS > 0 ? in.minPivot / g.normS : 0.0;

        // ---- the update for stage k+1, straight from the factor:
        // delta = Ec (S^{-1})_EE Ec' = W' D^{-1} W, W = L^{-1} P' I_E Ec'
        // (ne right-hand sides, not the nc of the whole interface)
        nePrev = 0;
        if (ne) {
            const double* A; int n; const int* perm; const int8_t* bsize;
            stageFactor(s, g, A, n, perm, bsize);
            const double* Ec = &s.buf[g.offE];         // ne x nce, contiguous
            double* B = s.EB.data();                   // nce x ne: Ec'
            int* bp = s.bpos.data();
            for (int c = 0; c < nce; ++c) {
                bp[c] = n - nc + g.idxE[c];
                for (int a = 0; a < ne; ++a) B[(size_t)c * ne + a] = Ec[(size_t)a * nce + c];
            }
            s.flops[1] += wdw(A, n, perm, bsize, nce, bp, B, ne, s.W.data(), s.DW.data(),
                              s.inv.data(), s.delta.data(), s.gAp.data(), s.gBp.data(),
                              s.gCp.data());
            nePrev = ne;
        }
        s.prof[3] += sec(td, clk::now());
        s.released.store(k + 1, std::memory_order_release);    // stage k's post job
    }
    auto tw = clk::now();
    finishJobs(s);                                  // the post jobs
    while (s.bNext.load() < N || s.bTok.load()) {   // the border steps left
        driveBorder(s);
        if (s.bNext.load() < N) std::this_thread::yield();
    }
    double jobs = 0.0;
    for (int64_t k = 0; k < N; ++k) {
        jobs += s.st[k].tJob + s.st[k].tPost;
        s.flops[1] += s.st[k].flI;
    }
    s.prof[0] = jobs;
    s.prof[4] = s.tBorder;

    auto tf = clk::now();
    if (m) {
        std::memcpy(s.Gf.data(), &s.buf[s.offG], sizeof(double) * m * m);
        double big = 0.0;
        for (double v : s.Gf) big = std::max(big, std::fabs(v));
        Inertia in = bkFactor((int)m, s.Gf.data(), s.gperm.data(), s.gbsize.data(), s.work.data());
        tot.pos += in.pos; tot.neg += in.neg; tot.zero += in.zero; tot.n2x2 += in.n2x2;
        minPivot[N] = big > 0 ? in.minPivot / big : 0.0;
    } else {
        minPivot[N] = 1.0;
    }
    inertia[0] = tot.pos; inertia[1] = tot.neg; inertia[2] = tot.zero;
    *n2x2 = tot.n2x2;
    *singular = nsing;
    s.prof[5] = sec(tw, clk::now());
    s.prof[7] = sec(tWall, clk::now());
    s.factored = true;
    return 0;
}

// b: nrhs right-hand sides, each contiguous (row-major nrhs x n); in place
__declspec(dllexport) int ss_solve(void* h, double* b, int64_t nrhs) {
    Solver& s = *static_cast<Solver*>(h);
    if (!s.factored) return 1;
    if (!s.solveIdxOk) return 2;
    using clk = std::chrono::steady_clock;
    auto sec = [](clk::time_point a, clk::time_point b2) {
        return std::chrono::duration<double>(b2 - a).count(); };
    const auto tWall = clk::now();
    for (double& v : s.sprof) v = 0.0;
    const int64_t N = s.N, m = s.m, n = s.n;
    double* yG = s.yG.data();
    std::fill(s.inc.begin(), s.inc.end(), 0.0);
    for (int64_t r = 0; r < nrhs; ++r) {
        double* br = b + r * n;
        s.curB = br;
        auto t0 = clk::now();
        startJobs(s, 1, N, N);
        for (int64_t i = 0; i < m; ++i) yG[i] = br[s.gidx[s.start[N] + i]];

        // ---- forward chain: w_k on C, then its couplings to the next
        // stage (inc) and the border
        for (int64_t k = 0; k < N; ++k) {
            Stage& g = s.st[k];
            const double* y = s.Ys.data() + s.start[k];
            awaitJob(s, k, N);
            const int nc = (int)g.C.size(), np = (int)g.idxP.size();
            const int ne = (int)g.eR.size(), nce = (int)g.eC.size(), nf = (int)g.fC.size();
            double* wC = g.wC.data();
            for (int c = 0; c < nc; ++c) wC[c] = y[g.Cq[c]];
            if (np) {
                std::copy(s.inc.begin(), s.inc.begin() + np, g.incS.begin());
                const double* MPk = g.MP.data();
                for (int c = 0; c < nc; ++c) {
                    const double* mc = MPk + (size_t)c * np;
                    double acc = 0.0;
                    for (int a = 0; a < np; ++a) acc += mc[a] * g.incS[a];
                    wC[c] -= acc;
                }
            }
            for (int a = 0; a < ne; ++a) {
                const double* ea = &s.buf[g.offE + (int64_t)a * nce];
                double acc = 0.0;
                for (int c = 0; c < nce; ++c) acc += ea[c] * wC[g.idxE[c]];
                s.inc[a] = acc;
            }
            const double* Fc = g.Fc.data();
            for (int64_t gg = 0; gg < m; ++gg) {
                const double* fr = Fc + (size_t)gg * nf;
                double acc = 0.0;
                for (int c = 0; c < nf; ++c) acc += fr[c] * wC[g.idxF[c]];
                yG[gg] -= acc;
            }
        }
        auto t1 = clk::now();
        s.sprof[1] += sec(t0, t1);
        for (int64_t k = 0; k < N; ++k) s.sprof[0] += s.st[k].tJob;
        while (s.active.load() > 0) std::this_thread::yield();   // all forward jobs done

        if (m) bkSolve((int)m, s.Gf.data(), s.gperm.data(), s.gbsize.data(), yG, s.y.data());
        auto t2 = clk::now();
        s.sprof[2] += sec(t1, t2);

        // ---- backward chain: t_C = E_k' x_{k+1} + F_k' x_G, x_k on P =
        // w_k - MP' t_C; then stage k's job is released
        startJobs(s, 2, N, 0);
        for (int64_t k = N - 1; k >= 0; --k) {
            Stage& g = s.st[k];
            const int nc = (int)g.C.size(), np = (int)g.idxP.size();
            const int nce = (int)g.eC.size(), nf = (int)g.fC.size();
            double* tC = g.tC.data();
            std::fill(tC, tC + nc, 0.0);
            if (k + 1 < N) {
                const double* xn = s.st[k + 1].xP.data();
                for (size_t a = 0; a < g.eR.size(); ++a) {
                    const double v = xn[a];
                    if (v == 0.0) continue;
                    const double* ea = &s.buf[g.offE + (int64_t)a * nce];
                    for (int c = 0; c < nce; ++c) tC[g.idxE[c]] += ea[c] * v;
                }
            }
            const double* Fc = g.Fc.data();
            for (int64_t gg = 0; gg < m; ++gg) {
                const double v = yG[gg];
                if (v == 0.0) continue;
                const double* fr = Fc + (size_t)gg * nf;
                for (int c = 0; c < nf; ++c) tC[g.idxF[c]] += fr[c] * v;
            }
            if (np) {
                double* xP = g.xP.data();
                for (int a = 0; a < np; ++a) xP[a] = 0.0;
                const double* MPk = g.MP.data();
                for (int c = 0; c < nc; ++c) {
                    const double tc = tC[c];
                    if (tc == 0.0) continue;
                    const double* mc = MPk + (size_t)c * np;
                    for (int a = 0; a < np; ++a) xP[a] += mc[a] * tc;
                }
                for (int a = 0; a < np; ++a) xP[a] = g.wC[g.idxP[a]] - xP[a];
            }
            s.limit.store(N - k, std::memory_order_release);
        }
        auto t3 = clk::now();
        s.sprof[3] += sec(t2, t3);
        finishJobs(s);
        for (int64_t i = 0; i < m; ++i) br[s.gidx[s.start[N] + i]] = yG[i];
        s.sprof[5] += sec(t3, clk::now());
        for (int64_t k = 0; k < N; ++k) s.sprof[4] += s.st[k].tJob;
    }
    s.curB = nullptr;
    s.sprof[6] = sec(tWall, clk::now());
    return 0;
}

// out[7] seconds of the last ss_solve (see Solver::sprof)
__declspec(dllexport) void ss_solve_profile(void* h, double* out) {
    Solver& s = *static_cast<Solver*>(h);
    for (int i = 0; i < 7; ++i) out[i] = s.sprof[i];
}

}  // extern "C"
