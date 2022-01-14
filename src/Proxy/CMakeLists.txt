cmake_minimum_required(VERSION 3.18)
project(Proxy)
set(CMAKE_CXX_STANDARD 11)

add_executable(Proxy
        main.cpp
        common.h
        Proxy.cpp
        Proxy.h
        RealSubject.h
        RealSubject.cpp
        Subject.cpp
        Subject.h

        )