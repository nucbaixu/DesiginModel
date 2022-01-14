cmake_minimum_required(VERSION 3.18)
project(Command)
set(CMAKE_CXX_STANDARD 11)

add_executable(Command
        Command.cpp
        Command.h
        common.h
        ConcreteCommand1.cpp
        ConcreteCommand1.h
        ConcreteCommand2.cpp
        ConcreteCommand2.h
        Invoker.cpp
        Invoker.h
        Receiver.cpp
        Receiver.h
        main.cpp
        )