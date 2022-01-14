cmake_minimum_required(VERSION 3.18)
project(Flyweight)
set(CMAKE_CXX_STANDARD 11)

add_executable(Flyweight
        main.cpp
        common.h
        ConcreteFlyweight.cpp
        ConcreteFlyweight.h
        Flyweight.cpp
        Flyweight.h
        FlyweightFactory.cpp
        FlyweightFactory.h
        )