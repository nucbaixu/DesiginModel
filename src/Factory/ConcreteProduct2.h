#ifndef __CONCRETE_PRODUCT2_H
#define __CONCRETE_PRODUCT2_H
#include "product.h"

class ConcreteProduct2: public Product
{
public:
    ConcreteProduct2();
    ~ConcreteProduct2();

    string name();
};
#endif
