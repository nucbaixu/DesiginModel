#ifndef __MEDIATOR_H
#define __MEDIATOR_H
#include "common.h"

class Mediator
{
private:
    /* data */
public:
    Mediator(/* args */);
    ~Mediator();

    virtual void notify(string name) = 0;
};



#endif