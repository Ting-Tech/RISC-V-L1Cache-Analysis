/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_DMA_HH__
#define __DEBUG_DMA_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union DMA
{
    ~DMA() {}
    SimpleFlag DMA = {
        "DMA", "", false
    };
} DMA;
} // namespace unions

inline constexpr const auto& DMA =
    ::gem5::debug::unions::DMA.DMA;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DMA_HH__
