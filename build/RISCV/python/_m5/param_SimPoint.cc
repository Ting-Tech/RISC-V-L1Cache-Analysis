/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SimPoint.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/simple/probes/simpoint.hh"

#include "base/types.hh"
#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SimPoint");
    py::class_<SimPointParams, ProbeListenerObjectParams, std::unique_ptr<SimPointParams, py::nodelete>>(m, "SimPointParams")
        .def(py::init<>())
        .def("create", &SimPointParams::create)
        .def_readwrite("interval", &SimPointParams::interval)
        .def_readwrite("profile_file", &SimPointParams::profile_file)
        ;

    py::class_<gem5::SimPoint, gem5::ProbeListenerObject, std::unique_ptr<gem5::SimPoint, py::nodelete>>(m, "gem5_COLONS_SimPoint")
        ;

}

static EmbeddedPyBind embed_obj("SimPoint", module_init, "ProbeListenerObject");

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
class DummySimPointParamsClass
{
  public:
    gem5::SimPoint *create() const;
};

template <class CxxClass, class Enable=void>
class DummySimPointShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySimPointShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SimPointParams &>>>
{
  public:
    using Params = SimPointParams;
    static gem5::SimPoint *
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
class DummySimPointShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SimPointParams &>>>
{
  public:
    using Params = DummySimPointParamsClass;
    static gem5::SimPoint *
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
[[maybe_unused]] gem5::SimPoint *
DummySimPointShunt<gem5::SimPoint>::Params::create() const
{
    return DummySimPointShunt<gem5::SimPoint>::create(*this);
}

} // namespace gem5
