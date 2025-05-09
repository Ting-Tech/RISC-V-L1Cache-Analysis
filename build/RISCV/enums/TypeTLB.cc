/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/TypeTLB.hh"

namespace gem5
{

const char *TypeTLBStrings[static_cast<int>(TypeTLB::Num_TypeTLB)] =
{
    "data",
    "instruction",
    "unified",
};
} // namespace gem5
#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <sim/init.hh>

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
    py::module_ m = m_internal.def_submodule("enum_TypeTLB");

py::enum_<TypeTLB>(m, "enum_TypeTLB")
        .value("data", TypeTLB::data)
        .value("instruction", TypeTLB::instruction)
        .value("unified", TypeTLB::unified)
        .value("Num_TypeTLB", TypeTLB::Num_TypeTLB)
        ;
    }
static EmbeddedPyBind embed_enum("enum_TypeTLB", module_init);

} // namespace gem5
    
