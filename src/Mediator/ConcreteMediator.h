#ifndef __CONCRETE_MEDIATOR_H
#define __CONCRETE_MEDIATOR_H
#include "common.h"
#include "Mediator.h"
#include "Colleague.h"

class ConcreteMediator :public Mediator
{
private:
    Colleague *colleague1;
    Colleague *colleague2;
public:
    ConcreteMediator(Colleague *cc1,Colleague *cc2);
    ~ConcreteMediator();

    void notify(string name);
};
#endif