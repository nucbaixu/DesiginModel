#include "Singleton.h"

//Singleton * Singleton::pInstance = nullptr;
Singleton * Singleton::pInstance = 0;

Singleton::Singleton(/* args */)
{
    std::cout<<"hello"<<endl;
}

Singleton::~Singleton()
{
}

Singleton * Singleton::GetInstance()
{
    if (!pInstance)
    {
        pInstance = new Singleton();
    }
    return pInstance;
}


Singleton2 Singleton2::instance;

Singleton2::Singleton2(/* args */)
{
}

Singleton2::~Singleton2()
{
}

Singleton2 * Singleton2::GetInstance()
{
    return &instance;
}
