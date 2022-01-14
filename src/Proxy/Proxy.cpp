#include "Proxy.h"
#include "common.h"


Proxy::Proxy(Subject * s)
    :subject(s)
{
}

Proxy::~Proxy()
{
}

void Proxy::operation()
{
    cout<<"Excuting operation in Proxy"<<endl;
    subject->operation();
}
