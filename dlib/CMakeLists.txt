cmake_minimum_required(VERSION 3.24)
project(tryDlib)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(dlib dlib_build)

add_executable(tryDlib main.cpp)
target_link_libraries(tryDlib dlib::dlib)

# include_directories(cppfun-main)
