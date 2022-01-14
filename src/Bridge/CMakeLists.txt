cmake_minimum_required(VERSION 3.18)
project(Bridge)
set(CMAKE_CXX_STANDARD 11)

add_executable(Bridge
       Abstraction.cpp
        Abstraction.h
        common.h
        ConcreteImplementorA.cpp
        ConcreteImplementorA.h
        ConcreteImplementorB.cpp
        ConcreteImplementorB.h
        Implementor.cpp
        Implementor.h
        main.cpp
        RefinedAbstraction.cpp
        RefinedAbstraction.h
        )