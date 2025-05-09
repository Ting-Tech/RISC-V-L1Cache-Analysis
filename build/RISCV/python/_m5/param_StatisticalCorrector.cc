/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/StatisticalCorrector.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/pred/statistical_corrector.hh"

#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <vector>
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
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_StatisticalCorrector");
    py::class_<StatisticalCorrectorParams, SimObjectParams, std::unique_ptr<StatisticalCorrectorParams, py::nodelete>>(m, "StatisticalCorrectorParams")
        .def_readwrite("bwWeightInitValue", &StatisticalCorrectorParams::bwWeightInitValue)
        .def_readwrite("bwm", &StatisticalCorrectorParams::bwm)
        .def_readwrite("bwnb", &StatisticalCorrectorParams::bwnb)
        .def_readwrite("chooserConfWidth", &StatisticalCorrectorParams::chooserConfWidth)
        .def_readwrite("extraWeightsWidth", &StatisticalCorrectorParams::extraWeightsWidth)
        .def_readwrite("iWeightInitValue", &StatisticalCorrectorParams::iWeightInitValue)
        .def_readwrite("im", &StatisticalCorrectorParams::im)
        .def_readwrite("inb", &StatisticalCorrectorParams::inb)
        .def_readwrite("initialUpdateThresholdValue", &StatisticalCorrectorParams::initialUpdateThresholdValue)
        .def_readwrite("lWeightInitValue", &StatisticalCorrectorParams::lWeightInitValue)
        .def_readwrite("lm", &StatisticalCorrectorParams::lm)
        .def_readwrite("lnb", &StatisticalCorrectorParams::lnb)
        .def_readwrite("logBias", &StatisticalCorrectorParams::logBias)
        .def_readwrite("logBwnb", &StatisticalCorrectorParams::logBwnb)
        .def_readwrite("logInb", &StatisticalCorrectorParams::logInb)
        .def_readwrite("logLnb", &StatisticalCorrectorParams::logLnb)
        .def_readwrite("logSizeUp", &StatisticalCorrectorParams::logSizeUp)
        .def_readwrite("numEntriesFirstLocalHistories", &StatisticalCorrectorParams::numEntriesFirstLocalHistories)
        .def_readwrite("pUpdateThresholdWidth", &StatisticalCorrectorParams::pUpdateThresholdWidth)
        .def_readwrite("scCountersWidth", &StatisticalCorrectorParams::scCountersWidth)
        .def_readwrite("updateThresholdWidth", &StatisticalCorrectorParams::updateThresholdWidth)
        ;

    py::class_<gem5::branch_prediction::StatisticalCorrector, gem5::SimObject, std::unique_ptr<gem5::branch_prediction::StatisticalCorrector, py::nodelete>>(m, "gem5_COLONS_branch_prediction_COLONS_StatisticalCorrector")
        ;

}

static EmbeddedPyBind embed_obj("StatisticalCorrector", module_init, "SimObject");

} // namespace gem5
