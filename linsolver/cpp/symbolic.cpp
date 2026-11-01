// The symbolic setup in C++: from IPOPT's sparsity pattern and a small
// layout of the problem, the stage structure (linsolver.structured.
// StageStructure, direction "backward") and, from one set of values, the
// paired kernel's plans (linsolver.paired.plan / symbolic). A port of the
// Python, step for step, so that everything checked there carries over:
// the structure is reproduced exactly; the plans exactly wherever the
// multiplier-primal matching agrees (a minimum-weight matching may break
// ties differently from scipy's -- any optimum is a valid plan).
//
// THE LAYOUT (what the pattern cannot say): the block sizes of IPOPT's
// unknowns [x | s | y_c | y_d], the mesh stage of every x, and which
// constraint rows are the periodicity rows (the border). From it
// (plotting.KKTPlots.stageLayoutFrom, rowTo "highest"): a row belongs to the
// highest stage its x's touch, a periodic row to the border, a slack to its
// inequality row's stage, and no other row may span more than two stages.

#include <algorithm>
#include <cmath>
#include <intrin.h>
#include <iterator>
#include <cstdint>
#include <cstdio>
#include <limits>
#include <map>
#include <string>
#include <vector>

#include "symbolic.h"

namespace sym {

namespace {

// ---- a fixed-width bit set (a stage has ~140 unknowns)
struct Bits {
    std::vector<uint64_t> w;
    Bits() {}
    explicit Bits(int n) : w((size_t)(n + 63) / 64, 0) {}
    void set(int i) { w[(size_t)i >> 6] |= 1ull << (i & 63); }
    void reset(int i) { w[(size_t)i >> 6] &= ~(1ull << (i & 63)); }
    bool test(int i) const { return (w[(size_t)i >> 6] >> (i & 63)) & 1; }
    void operator|=(const Bits& b) { for (size_t k = 0; k < w.size(); ++k) w[k] |= b.w[k]; }
    void andNot(const Bits& b) { for (size_t k = 0; k < w.size(); ++k) w[k] &= ~b.w[k]; }
    void clear() { std::fill(w.begin(), w.end(), 0); }
    int count() const {
        int c = 0;
        for (uint64_t v : w) c += (int)__popcnt64(v);
        return c;
    }
    int first() const {
        for (size_t k = 0; k < w.size(); ++k)
            if (w[k]) {
                unsigned long b;
                _BitScanForward64(&b, w[k]);
                return (int)(k * 64 + b);
            }
        return -1;
    }
    template <class F> void each(F f) const {
        for (size_t k = 0; k < w.size(); ++k) {
            uint64_t v = w[k];
            while (v) {
                unsigned long b;
                _BitScanForward64(&b, v);
                f((int)(k * 64 + b));
                v &= v - 1;
            }
        }
    }
};

std::vector<int64_t> sortedUnique(std::vector<int64_t> v) {
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    return v;
}

std::vector<int64_t> unite(const std::vector<int64_t>& a, const std::vector<int64_t>& b) {
    std::vector<int64_t> out;
    std::set_union(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(out));
    return out;
}

// ---- minimum-weight matching of every row (rows <= cols) on a dense cost
// matrix with forbidden entries (INF): shortest augmenting paths with
// potentials (Jonker-Volgenant / Hungarian). Returns col of each row, or an
// empty vector if no full matching exists.
std::vector<int> minWeightMatching(int nr, int nc, const std::vector<double>& cost) {
    const double INF = std::numeric_limits<double>::infinity();
    std::vector<double> u((size_t)nr + 1, 0.0), v((size_t)nc + 1, 0.0);
    std::vector<int> p((size_t)nc + 1, 0), way((size_t)nc + 1, 0);   // p[j]: row (1-based) of col j
    for (int i = 1; i <= nr; ++i) {
        p[0] = i;
        int j0 = 0;
        std::vector<double> minv((size_t)nc + 1, INF);
        std::vector<char> used((size_t)nc + 1, 0);
        do {
            used[(size_t)j0] = 1;
            const int i0 = p[(size_t)j0];
            double delta = INF;
            int j1 = -1;
            for (int j = 1; j <= nc; ++j) {
                if (used[(size_t)j]) continue;
                const double c = cost[(size_t)(i0 - 1) * nc + (j - 1)];
                if (c < INF) {
                    const double cur = c - u[(size_t)i0] - v[(size_t)j];
                    if (cur < minv[(size_t)j]) { minv[(size_t)j] = cur; way[(size_t)j] = j0; }
                }
                if (minv[(size_t)j] < delta) { delta = minv[(size_t)j]; j1 = j; }
            }
            if (j1 < 0 || delta == INF) return {};           // no augmenting path
            for (int j = 0; j <= nc; ++j) {
                if (used[(size_t)j]) { u[(size_t)p[(size_t)j]] += delta; v[(size_t)j] -= delta; }
                else minv[(size_t)j] -= delta;
            }
            j0 = j1;
        } while (p[(size_t)j0] != 0);
        do {
            const int j1 = way[(size_t)j0];
            p[(size_t)j0] = p[(size_t)j1];
            j0 = j1;
        } while (j0);
    }
    std::vector<int> colOf((size_t)nr, -1);
    for (int j = 1; j <= nc; ++j)
        if (p[(size_t)j]) colOf[(size_t)p[(size_t)j] - 1] = j - 1;
    return colOf;
}

// ---- maximum cardinality matching (rows to cols) by augmenting paths:
// which rows stay unmatched
std::vector<int> unmatchedRows(int nr, int nc, const std::vector<std::vector<int>>& adj) {
    std::vector<int> matchC((size_t)nc, -1);
    std::vector<int> lost;
    for (int r = 0; r < nr; ++r) {
        std::vector<char> seen((size_t)nc, 0);
        // iterative DFS
        std::vector<std::pair<int, size_t>> st;
        std::vector<int> pathCol;
        st.push_back({r, 0});
        bool found = false;
        while (!st.empty() && !found) {
            auto& top = st.back();
            const int row = top.first;
            if (top.second >= adj[(size_t)row].size()) {
                st.pop_back();
                if (!pathCol.empty()) pathCol.pop_back();
                continue;
            }
            const int c = adj[(size_t)row][top.second++];
            if (seen[(size_t)c]) continue;
            seen[(size_t)c] = 1;
            pathCol.push_back(c);
            if (matchC[(size_t)c] < 0) { found = true; break; }
            st.push_back({matchC[(size_t)c], 0});
        }
        if (!found) { lost.push_back(r); continue; }
        // augment along the stack: rows st[i].first, columns pathCol[i]
        for (size_t i = 0; i < st.size(); ++i) matchC[(size_t)pathCol[i]] = st[i].first;
    }
    return lost;
}

}  // namespace

// ================================================================ layout ==

bool unknownStages(const Pattern& P, const Layout& L, std::vector<int64_t>& unkStage,
                   std::vector<int64_t>& kind, std::string& err) {
    const int64_t n = P.n, nx = L.nx, ns = L.ns, nc = L.nc, nd = L.nd, N = L.N;
    if (nx + ns + nc + nd != n || ns != nd || (int64_t)L.varStage.size() != nx ||
        (int64_t)L.rowBorder.size() != nc + nd) {
        err = "layout does not fit the matrix (sizes)";
        return false;
    }
    for (int64_t s : L.varStage)
        if (s < 0 || s >= N) { err = "layout: a variable's stage is out of range"; return false; }
    const int64_t r0 = nx + ns, nr = nc + nd;
    std::vector<int64_t> lo((size_t)nr, std::numeric_limits<int64_t>::max()), hi((size_t)nr, -1);
    for (int64_t j = 0; j < nx; ++j)
        for (int64_t t = P.indptr[(size_t)j]; t < P.indptr[(size_t)j + 1]; ++t) {
            const int64_t r = P.indices[(size_t)t];
            if (r < r0) continue;
            const int64_t i = r - r0, s = L.varStage[(size_t)j];
            lo[(size_t)i] = std::min(lo[(size_t)i], s);
            hi[(size_t)i] = std::max(hi[(size_t)i], s);
        }
    for (int64_t i = 0; i < nr; ++i) {
        if (hi[(size_t)i] < 0) { err = "constraint row " + std::to_string(i) + " has no x"; return false; }
        if (!L.rowBorder[(size_t)i] && hi[(size_t)i] - lo[(size_t)i] > 1) {
            err = "constraint row " + std::to_string(i) + " spans more than two stages";
            return false;
        }
    }
    unkStage.assign((size_t)n, 0);
    kind.assign((size_t)n, 0);
    for (int64_t j = 0; j < nx; ++j) unkStage[(size_t)j] = L.varStage[(size_t)j];
    for (int64_t i = 0; i < ns; ++i) { unkStage[(size_t)(nx + i)] = hi[(size_t)(nc + i)]; kind[(size_t)(nx + i)] = 1; }
    for (int64_t i = 0; i < nr; ++i) {
        unkStage[(size_t)(r0 + i)] = L.rowBorder[(size_t)i] ? N : hi[(size_t)i];
        kind[(size_t)(r0 + i)] = i < nc ? 2 : 3;
    }
    return true;
}

// ============================================================= structure ==

bool buildStructure(const Pattern& P, const std::vector<int64_t>& unkStage,
                    const std::vector<int64_t>& kindIn, int64_t N, Structure& S, std::string& err) {
    const int64_t n = P.n;
    const size_t nnz = P.indices.size();
    std::vector<int64_t> cols(nnz);
    for (int64_t j = 0; j < n; ++j)
        for (int64_t t = P.indptr[(size_t)j]; t < P.indptr[(size_t)j + 1]; ++t) cols[(size_t)t] = j;
    const std::vector<int64_t>& rows = P.indices;
    std::vector<int64_t> stage((size_t)n);
    for (int64_t i = 0; i < n; ++i) {
        const int64_t s = std::min(unkStage[(size_t)i], N);
        stage[(size_t)i] = s < N ? N - 1 - s : N;               // backward sweep
    }
    // couplings between stages that are not neighbours: the end swept first
    // goes to the border
    std::vector<int64_t> moved;
    for (size_t t = 0; t < nnz; ++t) {
        const int64_t sr = stage[(size_t)rows[t]], sc = stage[(size_t)cols[t]];
        if (sr < N && sc < N && std::llabs(sr - sc) > 1) moved.push_back(sr < sc ? rows[t] : cols[t]);
    }
    moved = sortedUnique(moved);
    for (int64_t v : moved) stage[(size_t)v] = N;
    S.movedToBorder = moved;

    std::vector<int64_t> sizes((size_t)N + 1, 0);
    for (int64_t i = 0; i < n; ++i) sizes[(size_t)stage[(size_t)i]]++;
    for (int64_t k = 0; k < N; ++k)
        if (!sizes[(size_t)k]) { err = "stage " + std::to_string(k) + " is empty"; return false; }
    std::vector<int64_t> start((size_t)N + 2, 0);
    for (int64_t k = 0; k <= N; ++k) start[(size_t)k + 1] = start[(size_t)k] + sizes[(size_t)k];
    std::vector<int64_t> perm((size_t)n), inv((size_t)n), fill(start.begin(), start.end() - 1);
    for (int64_t i = 0; i < n; ++i) perm[(size_t)fill[(size_t)stage[(size_t)i]]++] = i;   // stable
    for (int64_t i = 0; i < n; ++i) inv[(size_t)perm[(size_t)i]] = i;
    const int64_t m = sizes[(size_t)N];

    std::vector<int64_t> nk((size_t)N), offD((size_t)N), offE((size_t)N), offF((size_t)N);
    int64_t cur = 0;
    for (int64_t k = 0; k < N; ++k) {
        nk[(size_t)k] = sizes[(size_t)k];
        const int64_t nNext = k + 1 < N ? sizes[(size_t)k + 1] : 0;
        offD[(size_t)k] = cur;
        offE[(size_t)k] = cur + nk[(size_t)k] * nk[(size_t)k];
        offF[(size_t)k] = offE[(size_t)k] + nNext * nk[(size_t)k];
        cur = offF[(size_t)k] + m * nk[(size_t)k];
    }
    const int64_t offG = N ? cur : 0;

    // every stored entry, in stage order as (row >= col), and where it lands
    std::vector<int64_t> stageOfNew((size_t)n);
    for (int64_t i = 0; i < n; ++i) stageOfNew[(size_t)i] = stage[(size_t)perm[(size_t)i]];
    std::vector<int64_t> pos(nnz), mPos, mSrc;
    std::vector<std::vector<int64_t>> eR((size_t)N), eC((size_t)N), oF((size_t)N);
    for (size_t t = 0; t < nnz; ++t) {
        int64_t pr = inv[(size_t)rows[t]], pc = inv[(size_t)cols[t]];
        if (pr < pc) std::swap(pr, pc);
        const int64_t sR = stageOfNew[(size_t)pr], sC = stageOfNew[(size_t)pc];
        const int64_t lr = pr - start[(size_t)sR], lc = pc - start[(size_t)sC];
        if (sR == sC && sR < N) {
            pos[t] = offD[(size_t)sC] + lr * nk[(size_t)sC] + lc;
            if (lr != lc) { mPos.push_back(offD[(size_t)sC] + lc * nk[(size_t)sC] + lr); mSrc.push_back((int64_t)t); }
        } else if (sR == sC + 1 && sR < N) {
            pos[t] = offE[(size_t)sC] + lr * nk[(size_t)sC] + lc;
            eR[(size_t)sC].push_back(lr);
            eC[(size_t)sC].push_back(lc);
        } else if (sR == N && sC < N) {
            pos[t] = offF[(size_t)sC] + lr * nk[(size_t)sC] + lc;
            oF[(size_t)sC].push_back(lc);
        } else if (sR == N && sC == N) {
            pos[t] = offG + lr * m + lc;
            if (lr != lc) { mPos.push_back(offG + lc * m + lr); mSrc.push_back((int64_t)t); }
        } else {
            err = "entry (" + std::to_string(rows[t]) + ", " + std::to_string(cols[t]) + ") couples stages " +
                  std::to_string(sR) + " and " + std::to_string(sC) + ": not block tridiagonal plus border";
            return false;
        }
    }
    S.scatterPos = pos;
    S.scatterPos.insert(S.scatterPos.end(), mPos.begin(), mPos.end());
    S.scatterSrc.resize(nnz);
    for (size_t t = 0; t < nnz; ++t) S.scatterSrc[t] = (int64_t)t;
    S.scatterSrc.insert(S.scatterSrc.end(), mSrc.begin(), mSrc.end());

    S.eRows.resize((size_t)N); S.eCols.resize((size_t)N); S.fCols.resize((size_t)N); S.cCols.resize((size_t)N);
    for (int64_t k = 0; k < N; ++k) {
        S.eRows[(size_t)k] = sortedUnique(eR[(size_t)k]);
        S.eCols[(size_t)k] = sortedUnique(eC[(size_t)k]);
    }
    bool carry = false;
    for (int64_t k = 0; k < N; ++k) {
        std::vector<int64_t> fk = sortedUnique(oF[(size_t)k]);
        if (carry && k) fk = unite(fk, S.eRows[(size_t)k - 1]);
        S.fCols[(size_t)k] = fk;
        carry = m && !fk.empty();
    }
    for (int64_t k = 0; k < N; ++k) {
        std::vector<int64_t> c = k < N - 1 ? S.eCols[(size_t)k] : std::vector<int64_t>();
        c = unite(c, S.fCols[(size_t)k]);
        if (k) c = unite(c, S.eRows[(size_t)k - 1]);
        S.cCols[(size_t)k] = c;
    }
    S.stageKind.resize((size_t)N);
    for (int64_t k = 0; k < N; ++k)
        for (int64_t i = start[(size_t)k]; i < start[(size_t)k + 1]; ++i)
            S.stageKind[(size_t)k].push_back(kindIn[(size_t)perm[(size_t)i]]);

    S.n = n; S.N = N; S.m = m; S.size = offG + m * m; S.offG = offG;
    S.sizes = sizes; S.perm = perm; S.start = start;
    S.offD = offD; S.offE = offE; S.offF = offF;
    S.pattern = P;
    return true;
}

// ================================================================= plans ==

namespace {

// structural pattern of stage block k: stored entries, the previous stage's
// update clique, the diagonal; symmetric. Row-major n x n.
std::vector<char> stagePattern(const Structure& S, int64_t k) {
    const int64_t n = S.sizes[(size_t)k], o = S.offD[(size_t)k];
    std::vector<char> pat((size_t)(n * n), 0);
    for (int64_t i = 0; i < n; ++i) pat[(size_t)(i * n + i)] = 1;
    for (int64_t p : S.scatterPos)
        if (p >= o && p < o + n * n) {
            const int64_t rel = p - o;
            pat[(size_t)rel] = 1;
            pat[(size_t)((rel % n) * n + rel / n)] = 1;
        }
    if (k > 0) {
        const auto& e = S.eRows[(size_t)k - 1];
        for (int64_t a : e)
            for (int64_t b : e) pat[(size_t)(a * n + b)] = 1;
    }
    return pat;
}

using Unit = std::vector<int>;

bool units(const std::vector<double>& Sv, const std::vector<char>& pat, int n,
           const std::vector<int64_t>& kind, const std::vector<int64_t>& C,
           const std::vector<int64_t>& pinned, std::vector<Unit>& interior,
           std::vector<int>& tail, int& nQ, std::string& err) {
    auto Sx = [&](int i, int j) { return Sv[(size_t)i * n + j]; };
    std::vector<int> ix, is, ic, id;
    for (int i = 0; i < n; ++i) {
        const int64_t t = kind[(size_t)i];
        (t == 0 ? ix : t == 1 ? is : t == 2 ? ic : id).push_back(i);
    }
    std::vector<Unit> out;
    for (int r : id) {                                    // slack <-> inequality multiplier
        int found = -1, cnt = 0;
        for (int s : is) if (Sx(r, s) != 0.0) { found = s; ++cnt; }
        if (cnt != 1) { err = "y_d row " + std::to_string(r) + " does not pair with one slack"; return false; }
        out.push_back({found, r});
    }
    // equality multiplier <-> primal: minimum weight 1 - log(|J| / row max)
    if (!ic.empty()) {
        const int nr = (int)ic.size(), ncx = (int)ix.size();
        std::vector<double> cost((size_t)nr * ncx, std::numeric_limits<double>::infinity());
        for (int a = 0; a < nr; ++a) {
            double mx = 0.0;
            for (int b = 0; b < ncx; ++b) mx = std::max(mx, std::fabs(Sx(ic[(size_t)a], ix[(size_t)b])));
            mx = std::max(mx, 1e-300);
            for (int b = 0; b < ncx; ++b) {
                const double J = std::fabs(Sx(ic[(size_t)a], ix[(size_t)b]));
                if (J > 0) cost[(size_t)a * ncx + b] = 1.0 - std::log(std::max(J / mx, 1e-300));
            }
        }
        std::vector<int> colOf = minWeightMatching(nr, ncx, cost);
        if (colOf.empty()) { err = "no full matching of equality multipliers to primals"; return false; }
        std::vector<char> used((size_t)ncx, 0);
        for (int a = 0; a < nr; ++a) {
            out.push_back({ix[(size_t)colOf[(size_t)a]], ic[(size_t)a]});
            used[(size_t)colOf[(size_t)a]] = 1;
        }
        for (int b = 0; b < ncx; ++b) if (!used[(size_t)b]) out.push_back({ix[(size_t)b]});
    } else {
        for (int b : ix) out.push_back({b});
    }
    std::vector<char> inT((size_t)n, 0), inC((size_t)n, 0), inPin((size_t)n, 0);
    for (int64_t c : C) { inT[(size_t)c] = 1; inC[(size_t)c] = 1; }
    for (int64_t p : pinned) inT[(size_t)p] = 1;
    std::vector<char> inTailUnit((size_t)n, 0);
    for (const Unit& u : out) {
        bool t = false;
        for (int v : u) t = t || inT[(size_t)v];
        if (t) for (int v : u) inTailUnit[(size_t)v] = 1;
        else interior.push_back(u);
    }
    std::vector<int> Cs, pin, rest;
    for (int64_t c : C) Cs.push_back((int)c);
    std::sort(Cs.begin(), Cs.end());
    for (int64_t p : pinned) if (!inC[(size_t)p]) inPin[(size_t)p] = 1;
    for (int i = 0; i < n; ++i) if (inPin[(size_t)i]) pin.push_back(i);
    for (int i = 0; i < n; ++i) if (inTailUnit[(size_t)i] && !inC[(size_t)i] && !inPin[(size_t)i]) rest.push_back(i);
    // partners must be structurally nonsingular among themselves: an
    // unmatched multiplier moves into Q
    std::vector<int> mult, prim;
    for (int v : rest) (kind[(size_t)v] >= 2 ? mult : prim).push_back(v);
    if (!mult.empty()) {
        std::vector<std::vector<int>> adj(mult.size());
        for (size_t a = 0; a < mult.size(); ++a)
            for (size_t b = 0; b < prim.size(); ++b)
                if (pat[(size_t)mult[a] * n + prim[b]]) adj[a].push_back((int)b);
        std::vector<int> lost = unmatchedRows((int)mult.size(), (int)prim.size(), adj);
        if (!lost.empty()) {
            std::vector<char> isLost((size_t)n, 0);
            for (int a : lost) { isLost[(size_t)mult[(size_t)a]] = 1; inPin[(size_t)mult[(size_t)a]] = 1; }
            pin.clear();
            for (int i = 0; i < n; ++i) if (inPin[(size_t)i]) pin.push_back(i);
            std::vector<int> keep;
            for (int v : rest) if (!isLost[(size_t)v]) keep.push_back(v);
            rest = keep;
        }
    }
    tail = rest;
    tail.insert(tail.end(), pin.begin(), pin.end());
    tail.insert(tail.end(), Cs.begin(), Cs.end());
    nQ = (int)(pin.size() + Cs.size());
    return true;
}

std::vector<Unit> minimumDegree(const std::vector<Unit>& interior, const std::vector<char>& pat, int n) {
    std::vector<Bits> adj((size_t)n, Bits(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (j != i && pat[(size_t)i * n + j]) adj[(size_t)i].set(j);
    const int U = (int)interior.size();
    std::vector<char> alive((size_t)U, 1);
    std::vector<Unit> order;
    Bits nb(n), vs(n);
    for (int step = 0; step < U; ++step) {
        int best = -1, bestDeg = 0;
        for (int u = 0; u < U; ++u) {
            if (!alive[(size_t)u]) continue;
            nb.clear(); vs.clear();
            for (int v : interior[(size_t)u]) { nb |= adj[(size_t)v]; vs.set(v); }
            nb.andNot(vs);
            const int d = nb.count();
            if (best < 0 || d < bestDeg) { best = u; bestDeg = d; }
        }
        order.push_back(interior[(size_t)best]);
        alive[(size_t)best] = 0;
        nb.clear(); vs.clear();
        for (int v : interior[(size_t)best]) { nb |= adj[(size_t)v]; vs.set(v); }
        nb.andNot(vs);
        nb.each([&](int a) {                              // clique on the neighbours
            adj[(size_t)a] |= nb;
            adj[(size_t)a].reset(a);
            adj[(size_t)a].andNot(vs);
        });
        for (int v : interior[(size_t)best]) adj[(size_t)v].clear();
    }
    return order;
}

void symbolic(const std::vector<Unit>& order, const std::vector<int>& tail, const std::vector<char>& patIn,
              int n, double slack, int nQ, StagePlan& out) {
    std::vector<int> perm;
    for (const Unit& u : order) perm.insert(perm.end(), u.begin(), u.end());
    perm.insert(perm.end(), tail.begin(), tail.end());
    const int nI = n - (int)tail.size();
    auto pat = [&](int i, int j) { return patIn[(size_t)perm[(size_t)i] * n + perm[(size_t)j]] != 0; };
    std::vector<Bits> base((size_t)nI, Bits(n)), colR((size_t)nI, Bits(n));
    for (int j = 0; j < nI; ++j)
        for (int i = j + 1; i < n; ++i) if (pat(i, j)) base[(size_t)j].set(i);
    std::vector<Bits> st = base;                          // exact column structures
    for (int j = 0; j < nI; ++j) {
        colR[(size_t)j] = st[(size_t)j];
        const int p = st[(size_t)j].first();
        if (p >= 0 && p < nI) {
            Bits add = st[(size_t)j];
            add.reset(p);
            st[(size_t)p] |= add;
        }
    }
    std::vector<int> bounds(1, 0);
    for (const Unit& u : order) bounds.push_back(bounds.back() + (int)u.size());
    std::vector<std::pair<int, int>> groups;
    const int NU = (int)order.size();
    Bits U(n), cols(n), tmp(n);
    for (int ui = 0; ui < NU;) {
        int uj = ui + 1;
        while (uj < NU) {
            const int c0 = bounds[(size_t)ui], c1 = bounds[(size_t)uj + 1];
            cols.clear();
            for (int c = c0; c < c1; ++c) cols.set(c);
            U.clear();
            int exact = 0;
            for (int c = c0; c < c1; ++c) {
                U |= colR[(size_t)c];
                tmp = colR[(size_t)c];
                tmp.andNot(cols);
                exact += tmp.count();
            }
            U.andNot(cols);
            if ((double)(c1 - c0) * U.count() > (1.0 + slack) * std::max(exact, 1)) break;
            ++uj;
        }
        groups.push_back({ui, uj});
        ui = uj;
    }
    std::vector<Bits> recv((size_t)nI, Bits(n));
    out.perm.assign(perm.begin(), perm.end());
    out.nI = nI;
    out.nQ = nQ;
    out.unitSize.clear();
    for (const Unit& u : order) out.unitSize.push_back((int64_t)u.size());
    out.panels.clear();
    out.R.clear();
    Bits R(n);
    for (const auto& gr : groups) {
        const int c0 = bounds[(size_t)gr.first], c1 = bounds[(size_t)gr.second];
        R.clear();
        for (int c = c0; c < c1; ++c) { R |= base[(size_t)c]; R |= recv[(size_t)c]; }
        std::vector<int64_t> r;
        R.each([&](int i) { if (i >= c1) r.push_back(i); });
        out.panels.push_back({gr.first, gr.second, c0, c1});
        out.R.push_back(r);
        if (!r.empty() && r[0] < nI)
            for (size_t t = 1; t < r.size(); ++t) recv[(size_t)r[0]].set((int)r[t]);
    }
}

}  // namespace

bool buildPlans(const Structure& S, const double* data, double slack, std::vector<StagePlan>& plans,
                std::string& err, std::vector<std::string>* failures) {
    std::vector<double> buf((size_t)S.size, 0.0);
    for (size_t t = 0; t < S.scatterPos.size(); ++t)
        buf[(size_t)S.scatterPos[t]] += data[(size_t)S.scatterSrc[t]];
    plans.assign((size_t)S.N, StagePlan());
    for (int64_t k = 0; k < S.N; ++k) {
        const int n = (int)S.sizes[(size_t)k];
        std::vector<char> pat = stagePattern(S, k);
        std::vector<double> Sv((size_t)n * n);
        for (size_t i = 0; i < Sv.size(); ++i) Sv[i] = pat[i] ? buf[(size_t)S.offD[(size_t)k] + i] : 0.0;
        std::vector<Unit> interior;
        std::vector<int> tail;
        int nQ = 0;
        const std::vector<int64_t> none;
        if (!units(Sv, pat, n, S.stageKind[(size_t)k], S.cCols[(size_t)k],
                   k > 0 ? S.eRows[(size_t)k - 1] : none, interior, tail, nQ, err)) {
            // no paired plan: the trivial one, the whole stage in Q (dense on
            // the chain -- correct, slower), as linsolver.structured does
            if (failures) failures->push_back("stage " + std::to_string(k) + ": " + err);
            err.clear();
            interior.clear();
            tail.clear();
            std::vector<char> inC((size_t)n, 0);
            for (int64_t c : S.cCols[(size_t)k]) inC[(size_t)c] = 1;
            for (int v = 0; v < n; ++v) if (!inC[(size_t)v]) tail.push_back(v);
            for (int v = 0; v < n; ++v) if (inC[(size_t)v]) tail.push_back(v);
            nQ = n;
        }
        symbolic(minimumDegree(interior, pat, n), tail, pat, n, slack, nQ, plans[(size_t)k]);
    }
    return true;
}

// ---- the arrays ss_create / ss_set_plan take (cppsolver.createArrays /
// planArrays), by name
void structureArrays(const Structure& S, std::map<std::string, std::vector<int64_t>>& a) {
    const int64_t N = S.N;
    auto flat = [&](const std::vector<std::vector<int64_t>>& v, bool keepLast, const char* p, const char* x) {
        std::vector<int64_t> ptr(1, 0), val;
        for (int64_t k = 0; k < N; ++k) {
            if (keepLast || k < N - 1) val.insert(val.end(), v[(size_t)k].begin(), v[(size_t)k].end());
            ptr.push_back((int64_t)val.size());
        }
        a[p] = ptr;
        a[x] = val;
    };
    a["n"] = {S.n}; a["N"] = {N}; a["m"] = {S.m}; a["size"] = {S.size}; a["offG"] = {S.offG};
    a["sizes"] = S.sizes; a["perm"] = S.perm; a["scatterPos"] = S.scatterPos; a["scatterSrc"] = S.scatterSrc;
    a["offD"] = S.offD; a["offE"] = S.offE; a["offF"] = S.offF;
    flat(S.eRows, false, "erPtr", "eRows");
    flat(S.eCols, false, "ecPtr", "eCols");
    if (S.m) flat(S.fCols, true, "fPtr", "fCols");
    else flat(std::vector<std::vector<int64_t>>((size_t)N), true, "fPtr", "fCols");
    a["indptr"] = S.pattern.indptr;
    a["indices"] = S.pattern.indices;
}

void planArrays(const std::vector<StagePlan>& plans, std::map<std::string, std::vector<int64_t>>& a) {
    std::vector<int64_t> perm, nI, nQ, unitPtr(1, 0), unitSize, panelPtr(1, 0), panels, rPtr(1, 0), rIdx;
    for (const StagePlan& p : plans) {
        perm.insert(perm.end(), p.perm.begin(), p.perm.end());
        nI.push_back(p.nI);
        nQ.push_back(p.nQ);
        unitSize.insert(unitSize.end(), p.unitSize.begin(), p.unitSize.end());
        unitPtr.push_back((int64_t)unitSize.size());
        for (const auto& q : p.panels) panels.insert(panels.end(), q.begin(), q.end());
        panelPtr.push_back(panelPtr.back() + (int64_t)p.panels.size());
        for (const auto& R : p.R) {
            rIdx.insert(rIdx.end(), R.begin(), R.end());
            rPtr.push_back((int64_t)rIdx.size());
        }
    }
    a["planPerm"] = perm; a["nI"] = nI; a["nQ"] = nQ; a["unitPtr"] = unitPtr; a["unitSize"] = unitSize;
    a["panelPtr"] = panelPtr; a["panels"] = panels; a["rPtr"] = rPtr; a["rIdx"] = rIdx;
}

}  // namespace sym
