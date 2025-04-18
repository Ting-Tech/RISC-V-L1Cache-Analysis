/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__PciVirtIO__
#define __PARAMS__PciVirtIO__

namespace gem5 {
class PciVirtIO;
} // namespace gem5
#include <cstddef>
#include "params/VirtIODeviceBase.hh"

#include "params/PciDevice.hh"

namespace gem5
{
struct PciVirtIOParams
    : public PciDeviceParams
{
    gem5::PciVirtIO * create() const;
    gem5::VirtIODeviceBase * vio;
};

} // namespace gem5

#endif // __PARAMS__PciVirtIO__
