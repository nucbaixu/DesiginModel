#ifndef __CREATOR_H
#define __CREATOR_H

#include "common.h"
#include "product.h"

// 工厂方法，工厂同质化，产品多样性
// 

class Creator
{
private:
   
public:
    Creator();
    ~Creator();

    virtual Product * createProduct() = 0;
};

#endif
