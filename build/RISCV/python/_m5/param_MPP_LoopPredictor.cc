/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MPP_LoopPredictor.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/pred/multiperspective_perceptron_tage.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MPP_LoopPredictor");
    py::class_<MPP_LoopPredictorParams, LoopPredictorParams, std::unique_ptr<MPP_LoopPredictorParams, py::nodelete>>(m, "MPP_LoopPredictorParams")
        .def(py::init<>())
        .def("create", &MPP_LoopPredictorParams::create)
        ;

    py::class_<gem5::branch_prediction::MPP_LoopPredictor, gem5::branch_prediction::LoopPredictor, std::unique_ptr<gem5::branch_prediction::MPP_LoopPredictor, py::nodelete>>(m, "gem5_COLONS_branch_prediction_COLONS_MPP_LoopPredictor")
        ;

}

static EmbeddedPyBind embed_obj("MPP_LoopPredictor", module_init, "LoopPredictor");

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
class DummyMPP_LoopPredictorParamsClass
{
  public:
    gem5::branch_prediction::MPP_LoopPredictor *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMPP_LoopPredictorShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMPP_LoopPredictorShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MPP_LoopPredictorParams &>>>
{
  public:
    using Params = MPP_LoopPredictorParams;
    static gem5::branch_prediction::MPP_LoopPredictor *
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
class DummyMPP_LoopPredictorShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MPP_LoopPredictorParams &>>>
{
  public:
    using Params = DummyMPP_LoopPredictorParamsClass;
    static gem5::branch_prediction::MPP_LoopPredictor *
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
[[maybe_unused]] gem5::branch_prediction::MPP_LoopPredictor *
DummyMPP_LoopPredictorShunt<gem5::branch_prediction::MPP_LoopPredictor>::Params::create() const
{
    return DummyMPP_LoopPredictorShunt<gem5::branch_prediction::MPP_LoopPredictor>::create(*this);
}

} // namespace gem5
