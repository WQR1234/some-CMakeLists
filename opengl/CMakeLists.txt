cmake_minimum_required(VERSION 3.24)
project(tryOpenGL)

set(CMAKE_CXX_STANDARD 14)

# 设置 GLFW 库的路径
set(GLFW_INCLUDE_DIR "D:/cppTools/glfw/glfw-3.3.8.bin.WIN64/include/")
set(GLFW_LIB_DIR "D:/cppTools/glfw/glfw-3.3.8.bin.WIN64/lib-mingw-w64/")

# 设置 GLEW 库的路径
set(GLEW_INCLUDE_DIR "D:/cppTools/glew-2.2.0/include/")
set(GLEW_LIB_DIR "D:/cppTools/glew-2.2.0/lib/Release/x64/")

# 添加GLFW头文件搜索路径
include_directories(${GLFW_INCLUDE_DIR})

# 添加GLFW库文件搜索路径
link_directories(${GLFW_LIB_DIR})

# 添加GLEW头文件搜索路径
include_directories(${GLEW_INCLUDE_DIR})

# 添加GLEW库文件搜索路径
link_directories(${GLEW_LIB_DIR})

add_executable(tryOpenGL main.cpp)

# 链接 GLFW 库
target_link_libraries(tryOpenGL glfw3 opengl32)
target_link_libraries(tryOpenGL glew32)

# target_compile_definitions(tryOpenGL PRIVATE GLEW_STATIC)
