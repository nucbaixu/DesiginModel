#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"


int main()
{
    Flyweight *f1 = FlyweightFactory().getFlyweight("apple");
    f1->operation(1);

    Flyweight *f2 = FlyweightFactory().getFlyweight("orige");
    f2->operation(2);

    Flyweight *f3 = FlyweightFactory().getFlyweight("orige");
    f2->operation(3);
    f3->operation(1);

    cout << (void*)f1 << " " << (void*)f2 <<" "<<(void*)f3 << endl;

    return 0;
}
