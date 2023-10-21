cmake_minimum_required(VERSION 3.0.0)
project(Equalize LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Equalize Equalize.cpp)
target_link_libraries(Equalize ${OpenCV_LIBS})
