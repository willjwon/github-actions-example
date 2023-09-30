# CMake Requirement
cmake_minimum_required(VERSION 3.15)

# C++ requirement
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup project
project(example_test)

# Compile Googletest
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../../extern/googletest googletest)

# Build project
add_executable(example_test example_test.cpp)
target_link_libraries(example_test PRIVATE libexample gtest_main)

# Run tests
include(GoogleTest)
gtest_discover_tests(example_test)
