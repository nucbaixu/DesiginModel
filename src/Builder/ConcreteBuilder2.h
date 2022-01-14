#ifndef __CONCRETE_BUILDER2_H
#define __CONCRETE_BUILDER2_H
#include "AbstractBuilder.h"
#include "Product.h"

class ConcreteBuilder2 :public AbstractBuilder
{
private:
    Product *product;
public:
    ConcreteBuilder2(/* args */);
    ~ConcreteBuilder2();

    void buildPartA();
    void buildPartB();
    void buildPartC();
    Product * getProduct();
};
#endif