/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__HiFiveBase__
#define __PARAMS__HiFiveBase__

namespace gem5 {
class HiFiveBase;
} // namespace gem5
#include <cstddef>
#include "params/Clint.hh"
#include <cstddef>
#include "params/PlicBase.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/Platform.hh"

namespace gem5
{
struct HiFiveBaseParams
    : public PlatformParams
{
    gem5::HiFiveBase * create() const;
    gem5::Clint * clint;
    gem5::PlicBase * plic;
    int uart_int_id;
};

} // namespace gem5

#endif // __PARAMS__HiFiveBase__
