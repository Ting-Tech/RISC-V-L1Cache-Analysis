/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/HiFiveBase.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/riscv/hifive.hh"

#include "dev/riscv/clint.hh"
#include "dev/riscv/plic.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_HiFiveBase");
    py::class_<HiFiveBaseParams, PlatformParams, std::unique_ptr<HiFiveBaseParams, py::nodelete>>(m, "HiFiveBaseParams")
        .def(py::init<>())
        .def("create", &HiFiveBaseParams::create)
        .def_readwrite("clint", &HiFiveBaseParams::clint)
        .def_readwrite("plic", &HiFiveBaseParams::plic)
        .def_readwrite("uart_int_id", &HiFiveBaseParams::uart_int_id)
        ;

    py::class_<gem5::HiFiveBase, gem5::Platform, std::unique_ptr<gem5::HiFiveBase, py::nodelete>>(m, "gem5_COLONS_HiFiveBase")
        ;

}

static EmbeddedPyBind embed_obj("HiFiveBase", module_init, "Platform");

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
class DummyHiFiveBaseParamsClass
{
  public:
    gem5::HiFiveBase *create() const;
};

template <class CxxClass, class Enable=void>
class DummyHiFiveBaseShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyHiFiveBaseShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const HiFiveBaseParams &>>>
{
  public:
    using Params = HiFiveBaseParams;
    static gem5::HiFiveBase *
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
class DummyHiFiveBaseShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const HiFiveBaseParams &>>>
{
  public:
    using Params = DummyHiFiveBaseParamsClass;
    static gem5::HiFiveBase *
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
[[maybe_unused]] gem5::HiFiveBase *
DummyHiFiveBaseShunt<gem5::HiFiveBase>::Params::create() const
{
    return DummyHiFiveBaseShunt<gem5::HiFiveBase>::create(*this);
}

} // namespace gem5
