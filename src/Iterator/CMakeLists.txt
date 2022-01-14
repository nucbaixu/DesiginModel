cmake_minimum_required(VERSION 3.18)
project(Iterator)
set(CMAKE_CXX_STANDARD 11)

add_executable(Iterator
        main.cpp
        common.h
        Aggregate.h
        Aggregate.cpp
        ConcreteAggregate.cpp
        ConcreteAggregate.h
        ConcreteIterator.cpp
        ConcreteIterator.h
        Iterator.cpp
        Iterator.h
        )