#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "chase-core.hh"
#include "DSLSpecsBuilder.hh"

namespace py = pybind11;
using namespace chase;

template <typename... Args>
using overload_cast_ = pybind11::detail::overload_cast_impl<Args...>;

PYBIND11_MODULE(pychase_DSL, m) {
    m.doc() = "CHASE DSL wrapper module";

    /// Necessary to make the DSL frontend work.
    py::class_<DSLFrontend::Problem,
        std::unique_ptr<DSLFrontend::Problem,
        py::nodelete> >(m, "DesignProblem");

    py::class_<DSLFrontend::DSLSpecsBuilder,
        std::unique_ptr<DSLFrontend::DSLSpecsBuilder,
        py::nodelete> >(m, "DSLSpecsBuilder")
            .def(py::init<>())
            .def("getContract", &DSLFrontend::DSLSpecsBuilder::getContract)
            .def("parseSpecificationFile", &DSLFrontend::DSLSpecsBuilder::parseSpecificationFile,
                    py::arg("infile").none(false));

}


