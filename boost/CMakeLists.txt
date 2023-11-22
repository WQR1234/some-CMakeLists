cmake_minimum_required(VERSION 3.24)
project(tryBoost)

set(CMAKE_CXX_STANDARD 20)

# 设置boost库的安装路径
set(BOOST_ROOT "D:/boost_1_83_0")

# 设置boost库的安装路径
set(BOOST_LIBRARYDIR "D:/boost_1_83_0/libs")

# 查找boost库
find_package(Boost REQUIRED)

# 将boost库的头文件路径添加到项目
include_directories(${Boost_INCLUDE_DIRS})

add_executable(tryBoost main.cpp)

# 将boost库链接到你的可执行文件中
target_link_libraries(tryBoost ${Boost_LIBRARIES})
