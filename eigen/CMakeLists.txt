cmake_minimum_required(VERSION 3.23)
project(try_eigen)


set(CMAKE_CXX_STANDARD 17)
set(EIGEN_DIR E:/cpp_libraries/eigen-3.4.0)
include_directories(${EIGEN_DIR})

add_executable(try_eigen main.cpp)
