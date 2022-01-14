#include "SimpleFactor.h"

SimpleFactor::SimpleFactor(int productType)
    :m_productType(productType)
{
}

SimpleFactor::~SimpleFactor()
{
}

Product *SimpleFactor::createProduct()
{
    if (m_productType == 1)
    {
        return new ConcreteProduct1();
    }
    else if(m_productType == 2)
    {
        return new ConcreteProduct2();
    }
}
