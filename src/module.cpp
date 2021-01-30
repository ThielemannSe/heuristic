// Pybind11 headers
#include <pybind11/pybind11.h>
#include <pybind11/operators.h>
#include <pybind11/functional.h>

// Custom headers
#include <string>
#include "point.h"
#include "track.h"

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


    py::class_<Track>(m, "Track")
        .def(py::init<Point&, Point&>(), py::arg("startpoint"), py::arg("endpoint"))
        .def_readonly("startpoint" , &Track::startpoint)
        .def_readonly("endpoint" , &Track::endpoint)
        .def_readonly("dx" , &Track::dx)
        .def_readonly("dy" , &Track::dy)
        .def_readonly("s" , &Track::s)
        .def_readonly("t" , &Track::t)
        .def("angle", &Track::angle, "Calculates the geodatic angle between two points.")
        .def("pitch", &Track::pitch, "Calculates the geodatic angle between two points.")
        .def("__repr__",
            [](const Track &t) {
                std::string r("Track(dx: ");
                r += std::to_string(t.dx);
                r += ", dy: ";
                r += std::to_string(t.dy);
                r += ", angle: ";
                r += std::to_string(t.t);
                r += ", distance: ";
                r += std::to_string(t.s);
                r += ")";
                return r;
            })
            ;
    
}