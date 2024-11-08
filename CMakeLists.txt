cmake_minimum_required (VERSION 3.20)

project (Demo)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 23)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ModernCpp-Cpp11-Cpp23)

set(SRC_FILE_NAME "06 lambda剖析.cpp")

# 将源代码添加到此项目的可执行文件。
add_executable (demo ${SRC_DIR}/${SRC_FILE_NAME})
