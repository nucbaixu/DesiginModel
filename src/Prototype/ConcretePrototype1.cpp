#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(string n)
    :myname(n)
{
     cout<<"Concreate IN ConcretePrototype1"<<endl;
}

ConcretePrototype1::~ConcretePrototype1()
{
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1 & other)
{
    this->myname = other.myname;
}

void ConcretePrototype1::setname(string newname)
{
    this->myname = newname;
}

string ConcretePrototype1::name()
{
    return myname;
}

Prototype * ConcretePrototype1::clone()
{
    return new ConcretePrototype1(*this);
}