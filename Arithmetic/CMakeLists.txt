cmake_minimum_required(VERSION 3.0.0)
project(Arithmetic LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Arithmetic Arithmetic.cpp)
target_link_libraries(Arithmetic ${OpenCV_LIBS})
