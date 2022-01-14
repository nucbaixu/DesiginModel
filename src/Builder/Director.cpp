#include "Director.h"

Director::Director(AbstractBuilder *build)
{
    this->builder = build;
}

Director::~Director()
{
}

void Director::SetBuilder(AbstractBuilder *build)
{
    this->builder = build;
}

void Director::buildProduct()
{
    builder->buildPartA();
    builder->buildPartB();
    builder->buildPartC();
}
