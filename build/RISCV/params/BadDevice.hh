/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__BadDevice__
#define __PARAMS__BadDevice__

namespace gem5 {
class BadDevice;
} // namespace gem5
#include <cstddef>
#include <string>

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct BadDeviceParams
    : public BasicPioDeviceParams
{
    gem5::BadDevice * create() const;
    std::string devicename;
};

} // namespace gem5

#endif // __PARAMS__BadDevice__
