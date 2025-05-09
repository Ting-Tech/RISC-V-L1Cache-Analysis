/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__TAGE_SC_L_TAGE__
#define __PARAMS__TAGE_SC_L_TAGE__

namespace gem5 {
namespace branch_prediction {
class TAGE_SC_L_TAGE;
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

#include "params/TAGEBase.hh"

namespace gem5
{
struct TAGE_SC_L_TAGEParams
    : public TAGEBaseParams
{
    unsigned firstLongTagTable;
    unsigned logTagTableSize;
    unsigned longTagsSize;
    unsigned longTagsTageFactor;
    unsigned shortTagsSize;
    unsigned shortTagsTageFactor;
    bool truncatePathHist;
};

} // namespace gem5

#endif // __PARAMS__TAGE_SC_L_TAGE__
