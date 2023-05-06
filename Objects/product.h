#include <iostream>
using namespace std;

class Product
{
private:
    int code;
    string name;
    double price;

public:
    Product();
    Product(int code, string name, double price);
    ~Product();
    int getCode();
    string getName();
    double getPrice();
    void setCode(int code);
    void setName(string name);
    void setPrice(double price);
};