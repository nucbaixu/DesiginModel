#include "RealSubject.h"
#include "Proxy.h"

int main()
{
    //未来的变化用代理，保护内核
    //代理模式的本质是一个中间件，主要目的是解耦合服务提供者和使用者。
    //使用者通过代理间接的访问服务提供者，便于后者的封装和控制。是一种结构性模式


    Subject * sub = new RealSubject();
    Subject * proxy = new Proxy(sub);

    proxy->operation();
    return 0;
}