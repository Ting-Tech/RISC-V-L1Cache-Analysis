/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__DMA_Controller__
#define __PARAMS__DMA_Controller__

namespace gem5 {
namespace ruby {
class DMA_Controller;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "params/DMASequencer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"

#include "params/RubyController.hh"

namespace gem5
{
struct DMA_ControllerParams
    : public RubyControllerParams
{
    gem5::ruby::DMA_Controller * create() const;
    gem5::ruby::DMASequencer * dma_sequencer;
    gem5::ruby::MessageBuffer * mandatoryQueue;
    gem5::ruby::MessageBuffer * requestToDir;
    Cycles request_latency;
    gem5::ruby::MessageBuffer * responseFromDir;
};

} // namespace gem5

#endif // __PARAMS__DMA_Controller__
