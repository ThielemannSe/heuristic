// Pybind11 headers
#include <pybind11/pybind11.h>
#include <pybind11/operators.h>
#include <pybind11/functional.h>

// Custom headers
#include <string>
#include "point.h"

namespace py = pybind11;

PYBIND11_MODULE(heuristic, m)
{
    m.doc() = "A simple Point class containing two values x, y as coordinates.";

    py::class_<Point>(m, "Point")
        // .def(py::init())
        .def(py::init<double, double>(), py::arg("x"), py::arg("y"))
        .def_readonly("x" , &Point::x)
        .def_readonly("y" , &Point::y)
        .def("distance", &Point::distance)
        .def("__repr__",
            [](const Point &p) {
                std::string r("Point(");
                r += std::to_string(p.x);
                r += ", ";
                r += std::to_string(p.y);
                r += ")";
                return r;
            })
            ;
}