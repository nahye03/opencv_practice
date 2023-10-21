cmake_minimum_required(VERSION 3.0.0)
project(Brightness LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Brightness Brightness.cpp)
target_link_libraries(Brightness ${OpenCV_LIBS})
