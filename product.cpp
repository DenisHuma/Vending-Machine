#include "product.h"

Product::Product()
{
    this->code = 0;
    this->name = ' ';
    this->price = 0;
}

Product::Product(int code, string name, double price)
{
    this->code = code;
    this->name = name;
    this->price = price;
}

Product::~Product()
{
    this->code = 0;
    this->name = ' ';
    this->price = 0;
}

int Product::getCode()
{
    return this->code;
}

string Product::getName()
{
    return this->name;
}

double Product::getPrice()
{
    return this->price;
}

void Product::setCode(int code)
{
    this->code = code;
}

void Product::setName(string name)
{
    this->name = name;
}

void Product::setPrice(double price)
{
    this->price = price;
}