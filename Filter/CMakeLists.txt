cmake_minimum_required(VERSION 3.0.0)
project(Filter LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Filter Filter.cpp)
target_link_libraries(Filter ${OpenCV_LIBS})
