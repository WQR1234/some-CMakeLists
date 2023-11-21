cmake_minimum_required(VERSION 3.23)
project(test01)

set(CMAKE_CXX_STANDARD 14)
include_directories(./)
aux_source_directory(./ SRC_LIST)

add_executable(test01 ${SRC_LIST})