#ifndef __SIMPLE_CREATOR_H
#define __SIMPLE_CREATOR_H

#include "common.h"
#include "Creator.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"

class SimpleFactor:public Creator
{
private:
   int m_productType ;
public:
    SimpleFactor(int productType);
    ~SimpleFactor();


    Product *createProduct();

};

#endif