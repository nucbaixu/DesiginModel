#include "product.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"
#include "Creator.h"
#include "ConcreteCreator1.h"
#include "ConcreteCreator2.h"

#include "SimpleFactor.h"


int main()
{
    // test factor method
    // 工厂方法是工厂同质化，产品多样性，例如华为和小米工厂，每个工厂产生不同型号的手机
	//Creator *pcreator = nullptr;
    Creator *pcreator = new ConcreteCreator1();
    Product *product1 = pcreator->createProduct();

    cout<< product1->name()<<endl;
    cout<<endl;
    
    pcreator = new ConcreteCreator2();
    Product *product2 = pcreator->createProduct();
    cout << product2->name() << endl; 

  
    //test simple factor
    //简单工厂：工厂唯一，产品多样性
    pcreator  = new SimpleFactor(1);
    Product * product4 = pcreator->createProduct();
    cout << product4->name() << endl; 

    pcreator  = new SimpleFactor(2);
    Product * product5 = pcreator->createProduct();
    cout << product5->name() << endl; 


    return 0;
}