cmake_minimum_required(VERSION 3.0.0)
project(Histogram2 LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Histogram2 Histogram2.cpp)
target_link_libraries(Histogram2 ${OpenCV_LIBS})
