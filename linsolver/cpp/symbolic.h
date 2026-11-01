// The symbolic setup in C++ (symbolic.cpp): stage structure from a pattern and
// a layout, and the paired kernel's plans from one set of values.
#pragma once

#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace sym {

struct Pattern {                      // the LOWER triangle, CSC, sorted, no duplicates
    int64_t n = 0;
    std::vector<int64_t> indptr, indices;
};

struct Layout {                       // what the pattern cannot say
    int64_t nx = 0, ns = 0, nc = 0, nd = 0, N = 0;
    std::vector<int64_t> varStage;    // mesh stage of every IPOPT x (0..N-1)
    std::vector<int64_t> rowBorder;   // per constraint row [c | d]: 1 = periodicity row
};

struct Structure {                    // linsolver.structured.StageStructure, backward
    int64_t n = 0, N = 0, m = 0, size = 0, offG = 0;
    std::vector<int64_t> sizes, perm, start, scatterPos, scatterSrc, offD, offE, offF;
    std::vector<int64_t> movedToBorder;
    std::vector<std::vector<int64_t>> eRows, eCols, fCols, cCols, stageKind;
    Pattern pattern;
};

struct StagePlan {                    // linsolver.paired.symbolic
    std::vector<int64_t> perm, unitSize;
    int64_t nI = 0, nQ = 0;
    std::vector<std::array<int64_t, 4>> panels;
    std::vector<std::vector<int64_t>> R;
};

bool unknownStages(const Pattern& P, const Layout& L, std::vector<int64_t>& unkStage,
                   std::vector<int64_t>& kind, std::string& err);
bool buildStructure(const Pattern& P, const std::vector<int64_t>& unkStage,
                    const std::vector<int64_t>& kind, int64_t N, Structure& S, std::string& err);
// a stage whose units cannot be formed gets the trivial plan (whole stage
// in Q, dense); its reason goes to *failures
bool buildPlans(const Structure& S, const double* data, double slack, std::vector<StagePlan>& plans,
                std::string& err, std::vector<std::string>* failures = nullptr);
void structureArrays(const Structure& S, std::map<std::string, std::vector<int64_t>>& a);
void planArrays(const std::vector<StagePlan>& plans, std::map<std::string, std::vector<int64_t>>& a);

}  // namespace sym
