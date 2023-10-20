cmake_minimum_required(VERSION 3.0.0)
project(HelloCV LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(HelloCV HelloCV.cpp)
target_link_libraries(HelloCV ${OpenCV_LIBS})

