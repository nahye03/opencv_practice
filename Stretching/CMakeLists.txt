cmake_minimum_required(VERSION 3.0.0)
project(Stretching LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Stretching Stretching.cpp)
target_link_libraries(Stretching ${OpenCV_LIBS})
