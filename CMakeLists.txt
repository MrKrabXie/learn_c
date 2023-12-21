# 要求最低的CMake版本为3.27
cmake_minimum_required(VERSION 3.27)
# 定义一个名为learn_c的项目
project(learn_c)
# 设置C++的使用标准是C++ 17
set(CMAKE_C_STANDARD 17)
# 把名为main.cpp、addition.h 和 addition.cpp的文件编译成一个名为learn_c的可执行文件
add_executable(learn_c main.cpp
        addition.h
        addition.cpp)