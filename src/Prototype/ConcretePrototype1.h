#ifndef __CONCRETE_PROTOTYPE1_H
#define __CONCRETE_PROTOTYPE1_H

#include "Prototype.h"
class ConcretePrototype1 :public Prototype
{
private:
    /* data */
    string myname;
public:
    ConcretePrototype1(string n);
    ConcretePrototype1(const ConcretePrototype1 &other);
    ~ConcretePrototype1();

    string name();
    void setname(string newname);
    Prototype * clone();
};



#endif