#ifndef __COLLEAGUE_H
#define __COLLEAGUE_H
#include "Mediator.h"
#include "common.h"

class Colleague
{
private:
    /* data */
public:
    Colleague(/* args */);
    ~Colleague();

    virtual void action() = 0;
    virtual void notify(string name) = 0;
    virtual void setMediator(Mediator *m) = 0;
};
#endif