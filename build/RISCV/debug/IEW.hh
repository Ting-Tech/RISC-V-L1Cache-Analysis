/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_IEW_HH__
#define __DEBUG_IEW_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union IEW
{
    ~IEW() {}
    SimpleFlag IEW = {
        "IEW", "", false
    };
} IEW;
} // namespace unions

inline constexpr const auto& IEW =
    ::gem5::debug::unions::IEW.IEW;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_IEW_HH__
