# Reference: https://github.com/opencv/opencv/blob/e329c84d5e7cfa5965b5dbbe7aa94d377ede23cf/CMakeLists.txt#L9-L15
# Disable in-source builds to prevent source tree corruption.
if (" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
endif ()

cmake_minimum_required(VERSION 3.0)
project(termcolor2 LANGUAGES CXX)
option(termcolor2_BUILD_TEST "Build termcolor2 tests" ON)

if (termcolor2_BUILD_TEST)
    enable_testing()
    add_subdirectory(tests)
endif ()
