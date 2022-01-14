cmake_minimum_required(VERSION 3.18)
project(Composite)
set(CMAKE_CXX_STANDARD 11)

add_executable(Composite
        common.h
        Component.cpp
        Component.h
        Composite.cpp
        Composite.h
        Leaf.cpp
        Leaf.h
        main.cpp
        )