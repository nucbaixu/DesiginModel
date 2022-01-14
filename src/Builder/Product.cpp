#include "Product.h"
#include "common.h"

Product::Product(/* args */)
{
}

Product::~Product()
{
}

void Product::addPart(string newpart)
{
    parts.emplace_back(newpart);
}

void Product::showPart()
{
    for (auto & item :parts)
    {
        cout<< item <<endl;
    }

    //for (vector<string>::const_iterator it = parts.begin(); it != parts.end(); ++it)
    //{
    //    cout<<*it<<endl;
    //}
    
}
