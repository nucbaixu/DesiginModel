#include "ConcreteColleague1.h"

ConcreteColleague1::ConcreteColleague1()
{
    mediator = 0;
}

ConcreteColleague1::~ConcreteColleague1()
{
}

void ConcreteColleague1::setMediator(Mediator * m)
{
    mediator = m;
}

void ConcreteColleague1::action()
{
    cout << "Excuteing action in Collegue 1"<<endl;
}

void ConcreteColleague1::notify(string name)
{
    mediator->notify(name);
}
