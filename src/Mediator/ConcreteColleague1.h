#ifndef __CONCRETE_COLLEAGUE1_H
#define __CONCRETE_COLLEAGUE1_H

#include "common.h"
#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleague1 :public Colleague
{
private:
     Mediator * mediator;
public:
    ConcreteColleague1();
    ~ConcreteColleague1();
    void action();
    void setMediator(Mediator * m);
    void notify(string name);
};



#endif
