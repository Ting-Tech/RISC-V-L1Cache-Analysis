/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/StridePrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/stride.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/cache/tags/indexing_policies/base.hh"
#include "mem/cache/replacement_policies/base.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_StridePrefetcher");
    py::class_<StridePrefetcherParams, QueuedPrefetcherParams, std::unique_ptr<StridePrefetcherParams, py::nodelete>>(m, "StridePrefetcherParams")
        .def(py::init<>())
        .def("create", &StridePrefetcherParams::create)
        .def_readwrite("confidence_counter_bits", &StridePrefetcherParams::confidence_counter_bits)
        .def_readwrite("confidence_threshold", &StridePrefetcherParams::confidence_threshold)
        .def_readwrite("degree", &StridePrefetcherParams::degree)
        .def_readwrite("initial_confidence", &StridePrefetcherParams::initial_confidence)
        .def_readwrite("table_assoc", &StridePrefetcherParams::table_assoc)
        .def_readwrite("table_entries", &StridePrefetcherParams::table_entries)
        .def_readwrite("table_indexing_policy", &StridePrefetcherParams::table_indexing_policy)
        .def_readwrite("table_replacement_policy", &StridePrefetcherParams::table_replacement_policy)
        .def_readwrite("use_requestor_id", &StridePrefetcherParams::use_requestor_id)
        ;

    py::class_<gem5::prefetch::Stride, gem5::prefetch::Queued, std::unique_ptr<gem5::prefetch::Stride, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_Stride")
        ;

}

static EmbeddedPyBind embed_obj("StridePrefetcher", module_init, "QueuedPrefetcher");

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
class DummyStridePrefetcherParamsClass
{
  public:
    gem5::prefetch::Stride *create() const;
};

template <class CxxClass, class Enable=void>
class DummyStridePrefetcherShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyStridePrefetcherShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const StridePrefetcherParams &>>>
{
  public:
    using Params = StridePrefetcherParams;
    static gem5::prefetch::Stride *
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
class DummyStridePrefetcherShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const StridePrefetcherParams &>>>
{
  public:
    using Params = DummyStridePrefetcherParamsClass;
    static gem5::prefetch::Stride *
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
[[maybe_unused]] gem5::prefetch::Stride *
DummyStridePrefetcherShunt<gem5::prefetch::Stride>::Params::create() const
{
    return DummyStridePrefetcherShunt<gem5::prefetch::Stride>::create(*this);
}

} // namespace gem5
