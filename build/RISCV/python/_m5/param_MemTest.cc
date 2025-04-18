/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MemTest.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/testers/memtest/memtest.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "sim/system.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MemTest");
    py::class_<MemTestParams, ClockedObjectParams, std::unique_ptr<MemTestParams, py::nodelete>>(m, "MemTestParams")
        .def(py::init<>())
        .def("create", &MemTestParams::create)
        .def_readwrite("base_addr_1", &MemTestParams::base_addr_1)
        .def_readwrite("base_addr_2", &MemTestParams::base_addr_2)
        .def_readwrite("interval", &MemTestParams::interval)
        .def_readwrite("max_loads", &MemTestParams::max_loads)
        .def_readwrite("percent_atomic", &MemTestParams::percent_atomic)
        .def_readwrite("percent_functional", &MemTestParams::percent_functional)
        .def_readwrite("percent_reads", &MemTestParams::percent_reads)
        .def_readwrite("percent_uncacheable", &MemTestParams::percent_uncacheable)
        .def_readwrite("progress_check", &MemTestParams::progress_check)
        .def_readwrite("progress_interval", &MemTestParams::progress_interval)
        .def_readwrite("size", &MemTestParams::size)
        .def_readwrite("suppress_func_errors", &MemTestParams::suppress_func_errors)
        .def_readwrite("system", &MemTestParams::system)
        .def_readwrite("uncacheable_base_addr", &MemTestParams::uncacheable_base_addr)
        .def_readwrite("port_port_connection_count", &MemTestParams::port_port_connection_count)
        ;

    py::class_<gem5::MemTest, gem5::ClockedObject, std::unique_ptr<gem5::MemTest, py::nodelete>>(m, "gem5_COLONS_MemTest")
        ;

}

static EmbeddedPyBind embed_obj("MemTest", module_init, "ClockedObject");

} // namespace gem5
namespace gem5
{

namespace
{

/*
 * If we can't define a default create() method for this params
 * struct because the SimObject doesn't have the right
 * constructor, use template magic to make it so we're actually
 * defining a create method for this class instead.
 */
class DummyMemTestParamsClass
{
  public:
    gem5::MemTest *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMemTestShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMemTestShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MemTestParams &>>>
{
  public:
    using Params = MemTestParams;
    static gem5::MemTest *
    create(const Params &p)
    {
        return new CxxClass(p);
    }
};

/*
 * This version diverts to the DummyParamsClass and a dummy
 * implementation of create if the appropriate constructor does
 * not exist.
 */
template <class CxxClass>
class DummyMemTestShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MemTestParams &>>>
{
  public:
    using Params = DummyMemTestParamsClass;
    static gem5::MemTest *
    create(const Params &p)
    {
        return nullptr;
    }
};

} // anonymous namespace

/*
 * An implementation of either the real Params struct's create
 * method, or the Dummy one. Either an implementation is
 * mandantory since this was shunted off to the dummy class, or
 * one is optional which will override this weak version.
 */
[[maybe_unused]] gem5::MemTest *
DummyMemTestShunt<gem5::MemTest>::Params::create() const
{
    return DummyMemTestShunt<gem5::MemTest>::create(*this);
}

} // namespace gem5
