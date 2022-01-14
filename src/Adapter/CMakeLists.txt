cmake_minimum_required(VERSION 3.18)
project(Adapter)
set(CMAKE_CXX_STANDARD 11)

add_executable(Adapter
        Adaptee.cpp
        Adaptee.h
        Adapter.cpp
        Adapter.h
        common.h
        main.cpp
        Target.cpp
        Target.h
        )