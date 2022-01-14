#include "common.h"
//#include "AbstractBuilder.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"
#include "Product.h"
#include "Director.h"

//using namespace std;

int main()
{
    //产品类型简单，制造表达复杂用建造模式，产品类型复杂，制造表达简单用工厂模式
    //产品复杂，制造复杂用工厂建造模式
	//AbstractBuilder *buildA = nullptr;
    AbstractBuilder *builder1 = new ConcreteBuilder1();
    Director director(builder1);
    director.buildProduct();
    Product * product1 = builder1->getProduct();
    product1->showPart();

    cout<<endl;

    AbstractBuilder *builder2 = new ConcreteBuilder2();
    director.SetBuilder(builder2);
    director.buildProduct();
    Product * product2 = builder2->getProduct();
    product2->showPart();
}