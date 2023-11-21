cmake_minimum_required(VERSION 3.23)
project(gobang_qt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "E:/Qt/Qt5.12.12/5.12.12/mingw73_64")

find_package(Qt5 COMPONENTS
        Core Widgets
        REQUIRED)

include_directories(./)
aux_source_directory(./ SRC_LIST)

add_executable(gobang_qt ${SRC_LIST}
#        MainWidget.ui img.qrc
        )
target_link_libraries(gobang_qt PRIVATE
        Qt5::Core Qt5::Widgets
        )


