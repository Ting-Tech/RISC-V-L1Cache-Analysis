/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_Cache_HH__
#define __DEBUG_Cache_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Cache
{
    ~Cache() {}
    SimpleFlag Cache = {
        "Cache", "", false
    };
} Cache;
} // namespace unions

inline constexpr const auto& Cache =
    ::gem5::debug::unions::Cache.Cache;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Cache_HH__
