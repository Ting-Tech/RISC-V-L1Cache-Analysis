/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__ExeTracer__
#define __PARAMS__ExeTracer__

namespace gem5 {
namespace trace {
class ExeTracer;
} // namespace trace
} // namespace gem5

#include "params/InstTracer.hh"

namespace gem5
{
struct ExeTracerParams
    : public InstTracerParams
{
    gem5::trace::ExeTracer * create() const;
};

} // namespace gem5

#endif // __PARAMS__ExeTracer__
