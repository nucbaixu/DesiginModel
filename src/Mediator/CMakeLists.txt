cmake_minimum_required(VERSION 3.18)
project(Mediator)
set(CMAKE_CXX_STANDARD 11)

add_executable(Mediator
        main.cpp
        common.h
        Colleague.cpp
        Colleague.h
        ConcreteColleague1.cpp
        ConcreteColleague1.h
        ConcreteColleague2.cpp
        ConcreteColleague2.h
        ConcreteMediator.cpp
        ConcreteMediator.h
        Mediator.cpp
        Mediator.h
        )