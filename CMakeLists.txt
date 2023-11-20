cmake_minimum_required(VERSION 3.26)
project(NewSudoku)

set(CMAKE_CXX_STANDARD 23)

add_executable(NewSudoku main.cpp)

add_subdirectory( "vendor" )
