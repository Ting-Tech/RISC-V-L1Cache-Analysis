/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__Base64Delta16__
#define __PARAMS__Base64Delta16__

namespace gem5 {
namespace compression {
class Base64Delta16;
} // namespace compression
} // namespace gem5

#include "params/BaseDictionaryCompressor.hh"

namespace gem5
{
struct Base64Delta16Params
    : public BaseDictionaryCompressorParams
{
    gem5::compression::Base64Delta16 * create() const;
};

} // namespace gem5

#endif // __PARAMS__Base64Delta16__
