/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__ThermalCapacitor__
#define __PARAMS__ThermalCapacitor__

namespace gem5 {
class ThermalCapacitor;
} // namespace gem5
#include <cstddef>

#include "params/SimObject.hh"

namespace gem5
{
struct ThermalCapacitorParams
    : public SimObjectParams
{
    gem5::ThermalCapacitor * create() const;
    double capacitance;
};

} // namespace gem5

#endif // __PARAMS__ThermalCapacitor__
