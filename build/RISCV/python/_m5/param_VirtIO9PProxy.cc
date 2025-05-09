/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/VirtIO9PProxy.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/virtio/fs9p.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_VirtIO9PProxy");
    py::class_<VirtIO9PProxyParams, VirtIO9PBaseParams, std::unique_ptr<VirtIO9PProxyParams, py::nodelete>>(m, "VirtIO9PProxyParams")
        ;

    py::class_<gem5::VirtIO9PProxy, gem5::VirtIO9PBase, std::unique_ptr<gem5::VirtIO9PProxy, py::nodelete>>(m, "gem5_COLONS_VirtIO9PProxy")
        ;

}

static EmbeddedPyBind embed_obj("VirtIO9PProxy", module_init, "VirtIO9PBase");

} // namespace gem5
