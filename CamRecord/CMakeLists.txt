cmake_minimum_required(VERSION 3.0.0)
project(CamRecord LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(CamRecord CamRecord.cpp)
target_link_libraries(CamRecord ${OpenCV_LIBS})
