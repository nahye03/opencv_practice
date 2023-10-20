cmake_minimum_required(VERSION 3.0.0)
project(TrackBar LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(TrackBar TrackBar.cpp)
target_link_libraries(TrackBar ${OpenCV_LIBS})
