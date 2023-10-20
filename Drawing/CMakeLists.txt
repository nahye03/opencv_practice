cmake_minimum_required(VERSION 3.0.0)
project(Drawing LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Drawing Drawing.cpp)
target_link_libraries(Drawing ${OpenCV_LIBS})
