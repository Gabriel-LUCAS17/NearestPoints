cmake_minimum_required(VERSION 3.0)

project(NearestPoints)

find_package(OpenCV REQUIRED)
include_directories(include)

add_executable(nearestPoints src/nearestPoints.cpp)
target_link_libraries(nearestPoints ${OpenCV_LIBS})
