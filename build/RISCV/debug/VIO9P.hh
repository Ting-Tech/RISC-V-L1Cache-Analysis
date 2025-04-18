/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_VIO9P_HH__
#define __DEBUG_VIO9P_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union VIO9P
{
    ~VIO9P() {}
    SimpleFlag VIO9P = {
        "VIO9P", "General 9p over VirtIO debugging", false
    };
} VIO9P;
} // namespace unions

inline constexpr const auto& VIO9P =
    ::gem5::debug::unions::VIO9P.VIO9P;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VIO9P_HH__
