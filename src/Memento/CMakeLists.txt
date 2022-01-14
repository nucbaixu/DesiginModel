cmake_minimum_required(VERSION 3.18)
project(Memento)
set(CMAKE_CXX_STANDARD 11)

add_executable(Memento
        main.cpp
        common.h
        Caretaker.cpp
        Caretaker.h
        Memento.cpp
        Memento.h
        Originator.cpp
        Originator.h
        )