/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_RubyGenerated_HH__
#define __DEBUG_RubyGenerated_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union RubyGenerated
{
    ~RubyGenerated() {}
    SimpleFlag RubyGenerated = {
        "RubyGenerated", "", false
    };
} RubyGenerated;
} // namespace unions

inline constexpr const auto& RubyGenerated =
    ::gem5::debug::unions::RubyGenerated.RubyGenerated;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RubyGenerated_HH__
