#ifndef __CONCRETE_COLLEAGUE2_H
#define __CONCRETE_COLLEAGUE2_H
#include "common.h"
#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleague2 :public Colleague
{
private:
     Mediator * mediator;
public:
    ConcreteColleague2(/* args */);
    ~ConcreteColleague2();

    void action();
    void setMediator(Mediator * m);
    void notify(string name);
};


#endif