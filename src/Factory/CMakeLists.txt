cmake_minimum_required(VERSION 3.18)
project(Factory)
set(CMAKE_CXX_STANDARD 11)

add_executable(Factory
        main.cpp
        common.h
        ConcreteCreator1.cpp
        ConcreteCreator1.h
        ConcreteCreator2.cpp
        ConcreteCreator2.h
        ConcreteProduct1.cpp
        ConcreteProduct1.h
        ConcreteProduct2.cpp
        ConcreteProduct2.h
        Creator.cpp
        Creator.h
        product.cpp
        product.h
        SimpleFactor.cpp
        SimpleFactor.h
        )