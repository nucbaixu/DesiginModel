#include "ConcreteColleague2.h"
#include "common.h"

ConcreteColleague2::ConcreteColleague2(/* args */)
{
    mediator = 0;
}

ConcreteColleague2::~ConcreteColleague2()
{
}

void ConcreteColleague2::setMediator(Mediator *m)
{
    mediator = m;
}

void ConcreteColleague2::action()
{
    cout << "Executing action in ConcreteColleague2" << endl;
}

void ConcreteColleague2::notify(string name)
{
    mediator->notify(name);
}
