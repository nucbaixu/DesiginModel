#ifndef __ABSTRACT_FACTORY_H
#define __ABSTRACT_FACTORY_H

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
private:
    /* data */
public:
    AbstractFactory(/* args */);
    ~AbstractFactory();


    virtual AbstractProductA * createProductA() = 0;
    virtual AbstractProductB * createProductB() = 0;
};





#endif