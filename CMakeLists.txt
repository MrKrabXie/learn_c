cmake_minimum_required(VERSION 3.27)
project(learn_c)

set(CMAKE_CXX_STANDARD 17)

add_executable(learn_c main.cpp
        addition.h
        addition.cpp)
