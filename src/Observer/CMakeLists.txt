cmake_minimum_required(VERSION 3.18)
project(observer)
set(CMAKE_CXX_STANDARD 11)

add_executable(observer
        main.cpp
        common.h
        ConcreteObserver.cpp
        ConcreteObserver.h
        ConcreteSubject.cpp
        ConcreteSubject.h
        Observer.cpp
        Observer.h
        ConcreteObserver.cpp
        ConcreteObserver.cpp
        Subject.cpp
        Subject.h
        )