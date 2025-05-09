/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_VIO9PData_HH__
#define __DEBUG_VIO9PData_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union VIO9PData
{
    ~VIO9PData() {}
    SimpleFlag VIO9PData = {
        "VIO9PData", "Dump data in VirtIO 9p connections", false
    };
} VIO9PData;
} // namespace unions

inline constexpr const auto& VIO9PData =
    ::gem5::debug::unions::VIO9PData.VIO9PData;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VIO9PData_HH__
