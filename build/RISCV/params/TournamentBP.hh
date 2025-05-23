/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__TournamentBP__
#define __PARAMS__TournamentBP__

namespace gem5 {
namespace branch_prediction {
class TournamentBP;
} // namespace branch_prediction
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BranchPredictor.hh"

namespace gem5
{
struct TournamentBPParams
    : public BranchPredictorParams
{
    gem5::branch_prediction::TournamentBP * create() const;
    unsigned choiceCtrBits;
    unsigned choicePredictorSize;
    unsigned globalCtrBits;
    unsigned globalPredictorSize;
    unsigned localCtrBits;
    unsigned localHistoryTableSize;
    unsigned localPredictorSize;
};

} // namespace gem5

#endif // __PARAMS__TournamentBP__
