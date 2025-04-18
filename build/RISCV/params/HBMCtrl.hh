/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__HBMCtrl__
#define __PARAMS__HBMCtrl__

namespace gem5 {
namespace memory {
class HBMCtrl;
} // namespace memory
} // namespace gem5
#include <cstddef>
#include "params/DRAMInterface.hh"

#include "params/MemCtrl.hh"

namespace gem5
{
struct HBMCtrlParams
    : public MemCtrlParams
{
    gem5::memory::HBMCtrl * create() const;
    gem5::memory::DRAMInterface * dram_2;
};

} // namespace gem5

#endif // __PARAMS__HBMCtrl__
