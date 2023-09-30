# CMake Requirement
cmake_minimum_required(VERSION 3.15)

# C++ requirement
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup project
project(example)

# Build Library
add_library(libexample example.cpp)
target_include_directories(libexample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Build executable
add_executable(example main.cpp)
target_include_directories(example PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(example PRIVATE libexample)
