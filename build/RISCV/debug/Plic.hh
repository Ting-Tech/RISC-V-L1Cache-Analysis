/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_Plic_HH__
#define __DEBUG_Plic_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Plic
{
    ~Plic() {}
    SimpleFlag Plic = {
        "Plic", "", false
    };
} Plic;
} // namespace unions

inline constexpr const auto& Plic =
    ::gem5::debug::unions::Plic.Plic;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Plic_HH__
