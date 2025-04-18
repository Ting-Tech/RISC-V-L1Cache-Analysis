/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/AddrMapper.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/addr_mapper.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_AddrMapper");
    py::class_<AddrMapperParams, SimObjectParams, std::unique_ptr<AddrMapperParams, py::nodelete>>(m, "AddrMapperParams")
        .def_readwrite("port_mem_side_port_connection_count", &AddrMapperParams::port_mem_side_port_connection_count)
        .def_readwrite("port_cpu_side_port_connection_count", &AddrMapperParams::port_cpu_side_port_connection_count)
        ;

    py::class_<gem5::AddrMapper, gem5::SimObject, std::unique_ptr<gem5::AddrMapper, py::nodelete>>(m, "gem5_COLONS_AddrMapper")
        ;

}

static EmbeddedPyBind embed_obj("AddrMapper", module_init, "SimObject");

} // namespace gem5
