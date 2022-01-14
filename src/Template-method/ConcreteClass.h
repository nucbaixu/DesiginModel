
#include "AbstractClass.h"

#ifndef __CONCRETE_CLASS_H
#define __CONCRETE_CLASS_H

class ConcreteClass :public AbstractClass
{
private:
    /* data */
public:
    ConcreteClass(/* args */);
    ~ConcreteClass();

    void primitiveOperation1();
    void primitiveOperation2();
};




#endif