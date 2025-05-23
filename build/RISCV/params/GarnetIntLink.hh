/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__GarnetIntLink__
#define __PARAMS__GarnetIntLink__

namespace gem5 {
namespace ruby {
namespace garnet {
class GarnetIntLink;
} // namespace garnet
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "params/CreditLink.hh"
#include <cstddef>
#include <cstddef>
#include "params/NetworkBridge.hh"
#include <cstddef>
#include "params/NetworkBridge.hh"
#include <cstddef>
#include <cstddef>
#include "params/NetworkLink.hh"
#include <cstddef>
#include <cstddef>
#include "params/NetworkBridge.hh"
#include <cstddef>
#include "params/NetworkBridge.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/BasicIntLink.hh"

namespace gem5
{
struct GarnetIntLinkParams
    : public BasicIntLinkParams
{
    gem5::ruby::garnet::GarnetIntLink * create() const;
    gem5::ruby::garnet::CreditLink * credit_link;
    bool dst_cdc;
    gem5::ruby::garnet::NetworkBridge * dst_cred_bridge;
    gem5::ruby::garnet::NetworkBridge * dst_net_bridge;
    bool dst_serdes;
    gem5::ruby::garnet::NetworkLink * network_link;
    bool src_cdc;
    gem5::ruby::garnet::NetworkBridge * src_cred_bridge;
    gem5::ruby::garnet::NetworkBridge * src_net_bridge;
    bool src_serdes;
    uint32_t width;
};

} // namespace gem5

#endif // __PARAMS__GarnetIntLink__
