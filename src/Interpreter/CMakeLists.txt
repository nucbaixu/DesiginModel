cmake_minimum_required(VERSION 3.18)
project(Interpreter)
set(CMAKE_CXX_STANDARD 11)

add_executable(Interpreter
        main.cpp
        common.h
        AbstractExpression.cpp
        AbstractExpression.h
        Context.cpp
        Context.h
        NonTerminalExpression.cpp
        NonTerminalExpression.h
        TerminalExpression.cpp
        TerminalExpression.h
        )