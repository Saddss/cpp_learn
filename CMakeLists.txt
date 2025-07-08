cmake_minimum_required(VERSION 3.31)
project(cpp_learn)

set(CMAKE_CXX_STANDARD 17)

add_executable(main base/main.cpp
        base/swap.h
        base/swap.cpp)