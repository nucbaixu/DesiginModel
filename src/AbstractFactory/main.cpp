#include "common.h"
#include "AbstractFactory.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "ProductA1.h"
#include "ProductA2.h"
#include "ProductB1.h"
#include "ProductB2.h"


int main()
{
    // 抽象工厂：工厂同质，产品同质
    // 比如说宝马公司产生轿车和SUV，但是奔驰公司也产生轿车和SUV
    AbstractFactory * factory = new ConcreteFactory1();

    AbstractProductA * pa = factory->createProductA();
    AbstractProductB * pb = factory->createProductB();

    cout << endl;

    factory = new ConcreteFactory2();
    pa = factory->createProductA();
    pb = factory->createProductB();

    return 0;
}