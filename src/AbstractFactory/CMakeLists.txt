cmake_minimum_required(VERSION 3.18)
project(AbstractFactory)
set(CMAKE_CXX_STANDARD 11)

add_executable(AbstractFactory
        main.cpp
        AbstractFactory.cpp
        AbstractFactory.h
        AbstractProductA.cpp
        AbstractProductA.h
        AbstractProductB.cpp
        AbstractProductB.h
        common.h
        ConcreteFactory1.cpp
        ConcreteFactory1.h
        ConcreteFactory2.cpp
        ConcreteFactory2.h
        ProductA1.cpp
        ProductA1.h
        ProductA2.cpp
        ProductA2.h
        ProductB1.cpp
        ProductB1.h
        ProductB2.cpp
        ProductB2.h
        )