#include "AbstractClass.h"
#include "ConcreteClass.h"

int main()
{
    //变化的是行为，不变的是套路
    //行为由将来决定，套路由现在决定

    AbstractClass *test = new ConcreteClass();
	test->templateMethod();
    return 0;
}