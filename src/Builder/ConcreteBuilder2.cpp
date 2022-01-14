#include "ConcreteBuilder2.h"

ConcreteBuilder2::ConcreteBuilder2(/* args */)
{
    product = new Product();
}

ConcreteBuilder2::~ConcreteBuilder2()
{
}


void ConcreteBuilder2::buildPartA()
{
    product->addPart("PartA from build2");
}

void ConcreteBuilder2::buildPartB()
{
    product->addPart("PartB from build2");
}

void ConcreteBuilder2::buildPartC()
{
    product->addPart("PartC from build2");
}

Product *ConcreteBuilder2::getProduct()
{
    return product;
}