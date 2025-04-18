/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Uart.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/serial/uart.hh"

#include "dev/serial/serial.hh"
#include "dev/platform.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Uart");
    py::class_<UartParams, BasicPioDeviceParams, std::unique_ptr<UartParams, py::nodelete>>(m, "UartParams")
        .def_readwrite("device", &UartParams::device)
        .def_readwrite("platform", &UartParams::platform)
        ;

    py::class_<gem5::Uart, gem5::BasicPioDevice, std::unique_ptr<gem5::Uart, py::nodelete>>(m, "gem5_COLONS_Uart")
        ;

}

static EmbeddedPyBind embed_obj("Uart", module_init, "BasicPioDevice");

} // namespace gem5
