cmake_minimum_required(VERSION 3.9)

project(cs231n_practice C CXX)
INCLUDE(${CMAKE_CURRENT_LIST_DIR}/cmake/compiler.cmake)
include_directories(${PROJECT_SOURCE_DIR})
enable_testing()
find_package(OpenCV REQUIRED)
find_package(GTest REQUIRED)
add_subdirectory(cs231n/util)
add_subdirectory(cs231n/test)
add_subdirectory(examples)

#target_link_libraries(atest gmock)
#target_link_libraries(atest gtest)
