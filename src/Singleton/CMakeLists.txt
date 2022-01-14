cmake_minimum_required(VERSION 3.18)
project(Singleton)
set(CMAKE_CXX_STANDARD 11)

add_executable(Singleton
        main.cpp
        common.h
        Singleton.cpp
        Singleton.h
        )