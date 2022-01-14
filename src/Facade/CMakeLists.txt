cmake_minimum_required(VERSION 3.18)
project(Facade)
set(CMAKE_CXX_STANDARD 11)

add_executable(Facade
        main.cpp
        common.h
        Facade.cpp
        Facade.h
        SubsystemA.cpp
        SubsystemA.h
        SubsystemB.cpp
        SubsystemB.h
        SubsystemC.cpp
        SubsystemC.h
        )