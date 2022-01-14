cmake_minimum_required(VERSION 3.18)
project(Prototype)
set(CMAKE_CXX_STANDARD 11)

add_executable(Prototype
        main.cpp
        common.h
        ConcretePrototype1.cpp
        ConcretePrototype1.h
        ConcretePrototype2.cpp
        ConcretePrototype2.h
        Prototype.cpp
        Prototype.h
        )