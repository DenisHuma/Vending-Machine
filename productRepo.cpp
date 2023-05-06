#include "productRepo.h"

ProductRepo::ProductRepo()
{
}

ProductRepo::ProductRepo(stack<Product> productStack)
{
    this->productStack = productStack;
}

ProductRepo::ProductRepo(ProductRepo &e)
{
    this->productStack = e.getStack();
}

ProductRepo::~ProductRepo()
{
    while (!this->productStack.empty())
    {
        this->productStack.pop();
    }
}

stack<Product> ProductRepo::getStack()
{
    return this->productStack;
}

int ProductRepo::getNumberOfElements()
{
    return this->productStack.size();
}

void ProductRepo::addProduct(Product Product)
{
    this->productStack.push(Product);
}

void ProductRepo::showRepo()
{
    stack<Product> auxStack = this->productStack;
    while (!auxStack.empty())
    {
        cout << "Code of Product: " << auxStack.top().getCode() << " Name of Product: " << auxStack.top().getName() << " Price of product: " << auxStack.top().getPrice() << endl;
        auxStack.pop();
    }
}

Product ProductRepo::findElementById(int code)
{
    stack<Product> auxStack = this->productStack;
    bool check = false;
    while (!auxStack.empty())
    {
        if (auxStack.top().getCode() == code)
        {
            return auxStack.top();
            check = true;
        }
        auxStack.pop();
    }
    if (check == false)
    {
        throw "No Element Found";
    }
    return Product();
}

void ProductRepo::deleteProduct(int code)
{
    int checkID = -1;
    stack<Product> auxStack;
    while (checkID != code && !this->productStack.empty())
    {
        checkID = this->productStack.top().getCode();
        auxStack.push(this->productStack.top());
        productStack.pop();
    }
    if (checkID == code)
    {
        auxStack.pop();
    }
    else
    {
        cout << "No Product Found" << endl;
    }
    while (!auxStack.empty())
    {
        this->productStack.push(auxStack.top());
        auxStack.pop();
    }
}

int ProductRepo::findCodeByName(string name)
{
    stack<Product> auxStack = this->productStack;

    while (!auxStack.empty())
    {
        if (auxStack.top().getName() == name)
        {
            return auxStack.top().getCode();
        }
        auxStack.pop();
    }
    return 0;
}
