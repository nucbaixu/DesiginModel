#ifndef CONCRETE_FACTORY1_H
#define CONCRETE_FACTORY1_H

#include "common.h"
#include "AbstractFactory.h"

class ConcreteFactory1: public AbstractFactory
{
private:
    /* data */
public:
    ConcreteFactory1(/* args */);
    ~ConcreteFactory1();

    AbstractProductA * createProductA();
    AbstractProductB * createProductB();
};



#endif