cmake_minimum_required(VERSION 3.0.0)
project(MouseEvent LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(MouseEvent MouseEvent.cpp)
target_link_libraries(MouseEvent ${OpenCV_LIBS})
