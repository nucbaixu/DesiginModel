#ifndef __PROXY_H
#define __RPOXY_H
#include "Subject.h"
#include "RealSubject.h"

class Proxy :public Subject
{
private:
    Subject *subject;
public:
    Proxy(Subject * s);
    ~Proxy();

    void operation();
};
#endif
