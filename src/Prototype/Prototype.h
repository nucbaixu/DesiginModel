#ifndef __PROTOTYPE_H
#define __PROTOTYPE_H

#include "common.h"

class Prototype
{
private:
    /* data */
public:
    Prototype(/* args */);
    ~Prototype();

    virtual string name() = 0;
    virtual void setname(string newname) = 0;
    virtual Prototype *clone() = 0;
};




#endif