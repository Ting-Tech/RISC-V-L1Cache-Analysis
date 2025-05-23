/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__MemCtrl__
#define __PARAMS__MemCtrl__

namespace gem5 {
namespace memory {
class MemCtrl;
} // namespace memory
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "params/MemInterface.hh"
#include <cstddef>
#include "enums/MemSched.hh"
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

#include "params/QoSMemCtrl.hh"

#include "enums/MemSched.hh"

namespace gem5
{
struct MemCtrlParams
    : public QoSMemCtrlParams
{
    gem5::memory::MemCtrl * create() const;
    Tick command_window;
    bool disable_sanity_check;
    gem5::memory::MemInterface * dram;
    enums::MemSched mem_sched_policy;
    unsigned min_reads_per_switch;
    unsigned min_writes_per_switch;
    Tick static_backend_latency;
    Tick static_frontend_latency;
    int write_high_thresh_perc;
    int write_low_thresh_perc;
    unsigned int port_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__MemCtrl__
