cmake_minimum_required(VERSION 3.9)

project(cs231n_practice C CXX)
INCLUDE(${CMAKE_CURRENT_LIST_DIR}/cmake/compiler.cmake)
enable_testing()
find_package(OpenCV REQUIRED)
message("opencv:${OpenCV_LIBRARIES}")
find_package(GTest REQUIRED)
add_subdirectory(cs231n/util)
include_directories(${PROJECT_SOURCE_DIR})

#target_link_libraries(atest gmock)
#target_link_libraries(atest gtest)
