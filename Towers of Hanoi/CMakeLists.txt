cmake_minimum_required(VERSION 3.5)
project(Towers_of_Hanoi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(Towers_of_Hanoi ${SOURCE_FILES})