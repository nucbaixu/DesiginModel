cmake_minimum_required(VERSION 3.18)
project(Template-method)
set(CMAKE_CXX_STANDARD 11)

add_executable(Template-method
        main.cpp
        common.h
        AbstractClass.cpp
        AbstractClass.h
        ConcreteClass.cpp
        ConcreteClass.h
        )