#ifndef __CONCRETE_BUILDER1_H
#define __CONCRETE_BUILDER1_H
#include "AbstractBuilder.h"
#include "Product.h"

class ConcreteBuilder1 :public AbstractBuilder
{
private:
    Product *product;
public:
    ConcreteBuilder1(/* args */);
    ~ConcreteBuilder1();

    void buildPartA();
    void buildPartB();
    void buildPartC();
    Product * getProduct();
};
#endif