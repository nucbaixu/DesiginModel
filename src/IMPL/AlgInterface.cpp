#include "AlgInterface.h"
#include "stdio.h"

class AlgInterfaceImpl
{
private:
    int val = 0;
public:
    AlgInterfaceImpl(/* args */);
    ~AlgInterfaceImpl();
    
    void showval(){
        printf("%d\n",val);
    };
private:
    void add1val();
};

AlgInterfaceImpl::AlgInterfaceImpl(/* args */)
{
}

AlgInterfaceImpl::~AlgInterfaceImpl()
{
}

void AlgInterfaceImpl::add1val()
{
    val += 1;
}


AlgInterface::AlgInterface(/* args */)
    :impl(new AlgInterfaceImpl)
{
}

AlgInterface::~AlgInterface()
{
    delete impl;
    impl = 0;
}

void AlgInterface::operate1()
{
    impl->showval();
}