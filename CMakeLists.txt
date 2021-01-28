cmake_minimum_required(VERSION 3.16.0)

set(CMAKE_VERBOSE_MAKEFILE ON)

project(heuristic)

set(SOURCE_DIR "src")
include_directories(${SOURCE_DIR})

add_subdirectory(lib/pybind11)
pybind11_add_module(heuristic ${SOURCES} "${SOURCE_DIR}/module.cpp" "${SOURCE_DIR}/point.cpp")