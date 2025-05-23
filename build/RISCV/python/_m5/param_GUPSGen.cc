/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GUPSGen.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/testers/traffic_gen/gups_gen.hh"

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
py::module_ m = m_internal.def_submodule("param_GUPSGen");
    py::class_<GUPSGenParams, ClockedObjectParams, std::unique_ptr<GUPSGenParams, py::nodelete>>(m, "GUPSGenParams")
        .def(py::init<>())
        .def("create", &GUPSGenParams::create)
        .def_readwrite("init_memory", &GUPSGenParams::init_memory)
        .def_readwrite("mem_size", &GUPSGenParams::mem_size)
        .def_readwrite("request_queue_size", &GUPSGenParams::request_queue_size)
        .def_readwrite("start_addr", &GUPSGenParams::start_addr)
        .def_readwrite("system", &GUPSGenParams::system)
        .def_readwrite("update_limit", &GUPSGenParams::update_limit)
        .def_readwrite("port_port_connection_count", &GUPSGenParams::port_port_connection_count)
        ;

    py::class_<gem5::GUPSGen, gem5::ClockedObject, std::unique_ptr<gem5::GUPSGen, py::nodelete>>(m, "gem5_COLONS_GUPSGen")
        ;

}

static EmbeddedPyBind embed_obj("GUPSGen", module_init, "ClockedObject");

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
class DummyGUPSGenParamsClass
{
  public:
    gem5::GUPSGen *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGUPSGenShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGUPSGenShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GUPSGenParams &>>>
{
  public:
    using Params = GUPSGenParams;
    static gem5::GUPSGen *
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
class DummyGUPSGenShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GUPSGenParams &>>>
{
  public:
    using Params = DummyGUPSGenParamsClass;
    static gem5::GUPSGen *
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
[[maybe_unused]] gem5::GUPSGen *
DummyGUPSGenShunt<gem5::GUPSGen>::Params::create() const
{
    return DummyGUPSGenShunt<gem5::GUPSGen>::create(*this);
}

} // namespace gem5
