#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

int main()
{

    //繁琐的复制用原型模式，克隆修改

    Prototype *obj1 = new ConcretePrototype1("obj1");
    cout << obj1->name() << endl;
    
    Prototype *obj2 = obj1->clone();
    cout << obj2->name() << endl;
    obj2->setname("obj2");
    cout << obj2->name() << endl;

    obj2 = new ConcretePrototype2("special obj2");
    cout << obj2->name() << endl;

    Prototype *obj22 = obj2->clone();
    cout << obj22->name() << endl;

    return 0;
}