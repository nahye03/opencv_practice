cmake_minimum_required(VERSION 3.0.0)
project(Logical LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Logical Logical.cpp)
target_link_libraries(Logical ${OpenCV_LIBS})
