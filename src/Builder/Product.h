#ifndef __PRODUCT_H
#define __PRODUCT_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class Product
{
private:
    vector<string> parts;
public:
    Product(/* args */);
    ~Product();


    void addPart(string newPart);
    void showPart();
};
#endif