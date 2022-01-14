#include "ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1(/* args */)
{
    product = new Product();
}

ConcreteBuilder1::~ConcreteBuilder1()
{
}

void ConcreteBuilder1::buildPartA()
{
    product->addPart("PartA from Builder1");
}

void ConcreteBuilder1::buildPartB()
{
    product->addPart("PartB from Builder1");
}

void ConcreteBuilder1::buildPartC()
{
     product->addPart("PartC from Builder1");
}

Product * ConcreteBuilder1::getProduct()
{
    return product;
}
