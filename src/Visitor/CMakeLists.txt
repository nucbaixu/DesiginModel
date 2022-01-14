cmake_minimum_required(VERSION 3.18)
project(Visitor)
set(CMAKE_CXX_STANDARD 11)

add_executable(Visitor
        main.cpp
        common.h
        ConcreteElementA.cpp
        ConcreteElementA.h
        ConcreteElementB.cpp
        ConcreteElementB.h
        ConcreteVisitor1.cpp
        ConcreteVisitor1.h
        ConcreteVisitor2.cpp
        ConcreteVisitor2.h
        Element.cpp
        Element.h
        ObjectStructure.h
        Visitor.cpp
        Visitor.h
        )