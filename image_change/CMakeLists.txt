cmake_minimum_required(VERSION 3.0.0)
project(image_change LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(image_change image_change.cpp)
target_link_libraries(image_change ${OpenCV_LIBS})
