#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(string n) 
    :myname(n)
{
    cout<<"Concreate IN ConcretePrototype2"<<endl;
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2 & other)
{
    this->myname = "object";
}

ConcretePrototype2::~ConcretePrototype2()
{
}

string ConcretePrototype2::name()
{
    return myname;
}

void ConcretePrototype2::setname(string newname)
{
    this->myname = newname;
}
Prototype * ConcretePrototype2::clone()
{
    return new ConcretePrototype2(*this);
}