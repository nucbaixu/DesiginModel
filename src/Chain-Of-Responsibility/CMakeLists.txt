cmake_minimum_required(VERSION 3.18)
project(Chain-of-Responsibility)
set(CMAKE_CXX_STANDARD 11)

add_executable(Chain-of-Responsibility
        common.h
        ConcreteHandler1.cpp
        ConcreteHandler1.h
        ConcreteHandler2.cpp
        ConcreteHandler2.h
        Handler.cpp
        Handler.h
        main.cpp
        )