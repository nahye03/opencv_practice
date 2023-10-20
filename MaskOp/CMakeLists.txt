cmake_minimum_required(VERSION 3.0.0)
project(MaskOp LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(MaskOp MaskOp.cpp)
target_link_libraries(MaskOp ${OpenCV_LIBS})
