cmake_minimum_required(VERSION 3.0.0)
project(imageOpencv LANGUAGES CXX)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(imageOpencv image_open.cpp)
target_link_libraries(imageOpencv ${OpenCV_LIBS})
