cmake_minimum_required(VERSION 3.18)
project(Builder)
set(CMAKE_CXX_STANDARD 11)

add_executable(Builder
        main.cpp
        AbstractBuilder.cpp
        ConcreteBuilder1.cpp
        ConcreteBuilder2.cpp
        Product.cpp
        Director.cpp
        ConcreteBuilder1.h
        AbstractBuilder.h
        ConcreteBuilder2.h
        Director.h
        Product.h
        common.h
        )