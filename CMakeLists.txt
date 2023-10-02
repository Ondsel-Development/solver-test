cmake_minimum_required(VERSION 3.16)

project(solvertest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(solvertest main.cpp)

#include_directories(lib/OndselSolver/include/)
#link_directories(lib/OndselSolver/lib/)

#find_library(ONDSEL_LIB NAMES )
target_link_libraries(solvertest LINK_PUBLIC ${CMAKE_SOURCE_DIR}/lib/OndselSolver/lib/libOndselSolver.a)

# target_link_libraries(solvertest LINK_PUBLIC OndselSolver)
