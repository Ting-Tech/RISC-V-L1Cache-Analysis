/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:234
 */

#ifndef __PARAMS__QemuFwCfgItemString__
#define __PARAMS__QemuFwCfgItemString__

namespace gem5 {
namespace qemu {
class FwCfgItemString;
} // namespace qemu
} // namespace gem5
namespace gem5 {
namespace qemu {
template <class ItemType>
class FwCfgItemFactory;
} // namespace qemu
} // namespace gem5
#include <cstddef>
#include <string>

#include "params/QemuFwCfgItem.hh"

namespace gem5
{
struct QemuFwCfgItemStringParams
    : public QemuFwCfgItemParams
{
    gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemString> * create() const;
    std::string string;
};

} // namespace gem5

#endif // __PARAMS__QemuFwCfgItemString__
