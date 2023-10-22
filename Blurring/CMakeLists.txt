cmake_minimum_required(VERSION 3.0.0)
project(Blurring LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Blurring Blurring.cpp)
target_link_libraries(Blurring ${OpenCV_LIBS})
