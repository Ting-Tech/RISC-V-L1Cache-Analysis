/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_Fetch_HH__
#define __DEBUG_Fetch_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Fetch
{
    ~Fetch() {}
    SimpleFlag Fetch = {
        "Fetch", "", false
    };
} Fetch;
} // namespace unions

inline constexpr const auto& Fetch =
    ::gem5::debug::unions::Fetch.Fetch;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Fetch_HH__
