cmake_minimum_required(VERSION 3.23)
project(tryOpenCV)

set(CMAKE_CXX_STANDARD 14)

set(OpenCV_DIR E:/Opencv_mingw/OpenCV-MinGW-Build-OpenCV-4.5.5-x64/x64/mingw/lib)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})
add_executable(tryOpenCV main.cpp)
target_link_libraries(tryOpenCV ${OpenCV_LIBS})