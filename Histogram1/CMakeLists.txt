cmake_minimum_required(VERSION 3.0.0)
project(Histogram1 LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Histogram1 Histogram1.cpp)
target_link_libraries(Histogram1 ${OpenCV_LIBS})
