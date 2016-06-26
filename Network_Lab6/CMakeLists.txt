cmake_minimum_required(VERSION 3.3)
project(networks_lab6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(networks_lab6 ${SOURCE_FILES})