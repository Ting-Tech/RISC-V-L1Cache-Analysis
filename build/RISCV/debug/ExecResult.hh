/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:139
 */

#ifndef __DEBUG_ExecResult_HH__
#define __DEBUG_ExecResult_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union ExecResult
{
    ~ExecResult() {}
    SimpleFlag ExecResult = {
        "ExecResult", "Format: Include results from execution", false
    };
} ExecResult;
} // namespace unions

inline constexpr const auto& ExecResult =
    ::gem5::debug::unions::ExecResult.ExecResult;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ExecResult_HH__
