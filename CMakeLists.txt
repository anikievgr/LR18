cmake_minimum_required(VERSION 3.26)
project(LR18)

set(CMAKE_CXX_STANDARD 17)

add_executable(LR18 main.cpp
        include.h
        Queue.cpp
        Queue.h
)
