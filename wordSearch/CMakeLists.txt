cmake_minimum_required(VERSION 3.5)
project(wordSearch)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES wordsearch.c)
add_executable(wordSearch ${SOURCE_FILES})