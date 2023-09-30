# CMake Requirement
cmake_minimum_required(VERSION 3.15)

# C++ requirement
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup project
project(cpp)

# Define option
option(BUILD_TESTS "Build tests using Google Test" OFF)

# Build project
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)

# Build tests
if (BUILD_TESTS)
    enable_testing()
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/test)
endif ()
