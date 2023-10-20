cmake_minimum_required(VERSION 3.0.0)
project(VideoCap LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(VideoCap VideoCap.cpp)
target_link_libraries(VideoCap ${OpenCV_LIBS})
