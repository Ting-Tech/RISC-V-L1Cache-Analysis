/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/CDCType.hh"

namespace gem5
{

namespace enums
{
    const char *CDCTypeStrings[Num_CDCType] =
    {
        "LINK_OBJECT",
        "OBJECT_LINK",
    };
} // namespace enums
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
    py::module_ m = m_internal.def_submodule("enum_CDCType");

py::enum_<enums::CDCType>(m, "enum_CDCType")
        .value("LINK_OBJECT", enums::LINK_OBJECT)
        .value("OBJECT_LINK", enums::OBJECT_LINK)
        .value("Num_CDCType", enums::Num_CDCType)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_CDCType", module_init);

} // namespace gem5
    
