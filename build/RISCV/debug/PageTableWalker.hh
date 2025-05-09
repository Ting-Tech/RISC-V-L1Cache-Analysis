/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_PageTableWalker_HH__
#define __DEBUG_PageTableWalker_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union PageTableWalker
{
    ~PageTableWalker() {}
    SimpleFlag PageTableWalker = {
        "PageTableWalker", "Page table walker state machine debugging", false
    };
} PageTableWalker;
} // namespace unions

inline constexpr const auto& PageTableWalker =
    ::gem5::debug::unions::PageTableWalker.PageTableWalker;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_PageTableWalker_HH__
