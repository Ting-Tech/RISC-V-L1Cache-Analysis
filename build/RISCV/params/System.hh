/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__System__
#define __PARAMS__System__

namespace gem5 {
class System;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/MemoryMode.hh"
#include <vector>
#include "base/types.hh"
#include "base/addr_range.hh"
#include <vector>
#include "params/AbstractMemory.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <vector>
#include "params/RedirectPath.hh"
#include <vector>
#include "base/types.hh"
#include "base/addr_range.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include <string>
#include <vector>
#include "params/SimObject.hh"
#include <cstddef>
#include "params/ThermalModel.hh"
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
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/Workload.hh"

#include "params/SimObject.hh"

#include "enums/MemoryMode.hh"

namespace gem5
{
struct SystemParams
    : public SimObjectParams
{
    gem5::System * create() const;
    bool auto_unlink_shared_backstore;
    unsigned cache_line_size;
    bool exit_on_work_items;
    uint64_t init_param;
    Addr m5ops_base;
    enums::MemoryMode mem_mode;
    std::vector< AddrRange > mem_ranges;
    std::vector< gem5::memory::AbstractMemory * > memories;
    bool mmap_using_noreserve;
    bool multi_thread;
    int num_work_ids;
    std::string readfile;
    std::vector< gem5::RedirectPath * > redirect_paths;
    std::vector< AddrRange > shadow_rom_ranges;
    std::string shared_backstore;
    std::string symbolfile;
    std::vector< gem5::SimObject * > thermal_components;
    gem5::ThermalModel * thermal_model;
    Counter work_begin_ckpt_count;
    int work_begin_cpu_id_exit;
    Counter work_begin_exit_count;
    Counter work_cpus_ckpt_count;
    Counter work_end_ckpt_count;
    Counter work_end_exit_count;
    int work_item_id;
    gem5::Workload * workload;
    unsigned int port_system_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__System__
