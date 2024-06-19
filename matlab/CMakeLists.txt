cmake_minimum_required(VERSION 3.20)
project(tryMatlab)

set(CMAKE_CXX_STANDARD 17)


find_package(Matlab REQUIRED)

# get_cmake_property(_variableNames VARIABLES)
# foreach(_variableName ${_variableNames})
#     if(_variableName MATCHES "^Matlab.*")
#         message(STATUS "${_variableName}: ${${_variableName}}")
#     endif()
# endforeach()

include_directories(${Matlab_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${Matlab_LIBRARIES})

# 运行时需添加环境变量：matlabroot\extern\bin\win64