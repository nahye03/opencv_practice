cmake_minimum_required(VERSION 3.0.0)
project(Gaussian LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Release)
# message("build type: " ${CMAKE_BUILD_TYPE})

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Gaussian Gaussian.cpp)
target_link_libraries(Gaussian ${OpenCV_LIBS})
