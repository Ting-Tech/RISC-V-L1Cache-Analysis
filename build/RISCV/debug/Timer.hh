/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_Timer_HH__
#define __DEBUG_Timer_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Timer
{
    ~Timer() {}
    SimpleFlag Timer = {
        "Timer", "", false
    };
} Timer;
} // namespace unions

inline constexpr const auto& Timer =
    ::gem5::debug::unions::Timer.Timer;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Timer_HH__
