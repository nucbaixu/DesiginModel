#ifndef __DIRECTOR_H
#define __DIRECTOR_H

#include "AbstractBuilder.h"

class Director
{
private:
    AbstractBuilder *builder;
public:
    Director(AbstractBuilder *build);
    ~Director();

    void buildProduct();
    void SetBuilder(AbstractBuilder *build);
};
#endif