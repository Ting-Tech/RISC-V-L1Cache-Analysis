/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_BTB_HH__
#define __DEBUG_BTB_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union BTB
{
    ~BTB() {}
    SimpleFlag BTB = {
        "BTB", "", false
    };
} BTB;
} // namespace unions

inline constexpr const auto& BTB =
    ::gem5::debug::unions::BTB.BTB;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_BTB_HH__
