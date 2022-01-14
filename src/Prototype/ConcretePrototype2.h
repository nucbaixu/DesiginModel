#ifndef __CONCRETE_PROTOTYPE2_H
#define __CONCRETE_PROTOTYPE2_H

#include "Prototype.h"

class ConcretePrototype2 :public Prototype
{
private:
    string myname;
public:
    ConcretePrototype2(string n);
    ConcretePrototype2(const ConcretePrototype2 & other);
    ~ConcretePrototype2();

    string name();
    void setname(string n);
    Prototype * clone();
};
#endif
