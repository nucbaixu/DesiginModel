cmake_minimum_required(VERSION 3.18)
project(State)
set(CMAKE_CXX_STANDARD 11)

add_executable(State
        main.cpp
        common.h
        ConcreteState1.cpp
        ConcreteState1.h
        ConcreteState2.cpp
        ConcreteState2.h
        Context.cpp
        Context.h
        State.cpp
        State.h
        )