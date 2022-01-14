cmake_minimum_required(VERSION 3.18)
project(Decorator)
set(CMAKE_CXX_STANDARD 11)

add_executable(Decorator
        common.h
        Component.cpp
        Component.h
        ConcreteComponent.cpp
        ConcreteComponent.h
        ConcreteDecoratorA.cpp
        ConcreteDecoratorA.h
        ConcreteDecoratorB.cpp
        ConcreteDecoratorB.h
        Decorator.cpp
        Decorator.h
        main.cpp
        )