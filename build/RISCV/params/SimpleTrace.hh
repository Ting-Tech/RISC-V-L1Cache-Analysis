/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__SimpleTrace__
#define __PARAMS__SimpleTrace__

namespace gem5 {
namespace o3 {
class SimpleTrace;
} // namespace o3
} // namespace gem5

#include "params/ProbeListenerObject.hh"

namespace gem5
{
struct SimpleTraceParams
    : public ProbeListenerObjectParams
{
    gem5::o3::SimpleTrace * create() const;
};

} // namespace gem5

#endif // __PARAMS__SimpleTrace__
