/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/RubyHTMSequencer.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/system/HTMSequencer.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_RubyHTMSequencer");
    py::class_<RubyHTMSequencerParams, RubySequencerParams, std::unique_ptr<RubyHTMSequencerParams, py::nodelete>>(m, "RubyHTMSequencerParams")
        .def(py::init<>())
        .def("create", &RubyHTMSequencerParams::create)
        ;

    py::class_<gem5::ruby::HTMSequencer, gem5::ruby::Sequencer, std::unique_ptr<gem5::ruby::HTMSequencer, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_HTMSequencer")
        ;

}

static EmbeddedPyBind embed_obj("RubyHTMSequencer", module_init, "RubySequencer");

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
class DummyRubyHTMSequencerParamsClass
{
  public:
    gem5::ruby::HTMSequencer *create() const;
};

template <class CxxClass, class Enable=void>
class DummyRubyHTMSequencerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyRubyHTMSequencerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const RubyHTMSequencerParams &>>>
{
  public:
    using Params = RubyHTMSequencerParams;
    static gem5::ruby::HTMSequencer *
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
class DummyRubyHTMSequencerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const RubyHTMSequencerParams &>>>
{
  public:
    using Params = DummyRubyHTMSequencerParamsClass;
    static gem5::ruby::HTMSequencer *
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
[[maybe_unused]] gem5::ruby::HTMSequencer *
DummyRubyHTMSequencerShunt<gem5::ruby::HTMSequencer>::Params::create() const
{
    return DummyRubyHTMSequencerShunt<gem5::ruby::HTMSequencer>::create(*this);
}

} // namespace gem5
