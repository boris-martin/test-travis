cmake_minimum_required (VERSION 2.8.11)
project (test_travis)

set (CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Depends on Eigen
find_package (Eigen3 3.1 REQUIRED NO_MODULE)

add_executable(output main.cpp)
target_link_libraries (output Eigen3::Eigen)
