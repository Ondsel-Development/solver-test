cmake_minimum_required(VERSION 3.16)

project(solvertest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(solvertest main.cpp)

target_link_libraries(solvertest ${CMAKE_SOURCE_DIR}/lib/OndselSolver/lib/libOndselSolver.a)
