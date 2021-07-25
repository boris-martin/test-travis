cmake_minimum_required (VERSION 2.8.11)
project (test_travis)

set (CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(output main.cpp)