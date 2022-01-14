cmake_minimum_required(VERSION 3.18)
project(Strategy)
set(CMAKE_CXX_STANDARD 11)

add_executable(Strategy
        main.cpp
        common.h
        ConcreteStrategyA.cpp
        ConcreteStrategyA.h
        ConcreteStrategyB.cpp
        ConcreteStrategyB.h
        ConcreteStrategyC.cpp
        ConcreteStrategyC.h
        Context.cpp
        Context.h
        Strategy.cpp
        Strategy.h
        )