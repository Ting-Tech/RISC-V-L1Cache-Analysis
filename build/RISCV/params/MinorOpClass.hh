/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__MinorOpClass__
#define __PARAMS__MinorOpClass__

namespace gem5 {
class MinorOpClass;
} // namespace gem5
#include <cstddef>
#include "enums/OpClass.hh"

#include "params/SimObject.hh"

#include "enums/OpClass.hh"

namespace gem5
{
struct MinorOpClassParams
    : public SimObjectParams
{
    gem5::MinorOpClass * create() const;
    enums::OpClass opClass;
};

} // namespace gem5

#endif // __PARAMS__MinorOpClass__
