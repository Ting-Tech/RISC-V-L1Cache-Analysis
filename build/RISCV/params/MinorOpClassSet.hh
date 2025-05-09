/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__MinorOpClassSet__
#define __PARAMS__MinorOpClassSet__

namespace gem5 {
class MinorOpClassSet;
} // namespace gem5
#include <vector>
#include "params/MinorOpClass.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct MinorOpClassSetParams
    : public SimObjectParams
{
    gem5::MinorOpClassSet * create() const;
    std::vector< gem5::MinorOpClass * > opClasses;
};

} // namespace gem5

#endif // __PARAMS__MinorOpClassSet__
