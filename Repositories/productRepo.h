#include "../Objects/product.cpp"
#include <stack>

class ProductRepo
{
private:
    stack<Product> productStack;

public:
    ProductRepo();
    ProductRepo(stack<Product> productStack);
    ProductRepo(ProductRepo &e);
    ~ProductRepo();
    stack<Product> getStack();
    int getNumberOfElements();
    void addProduct(Product Product);
    void showRepo();
    Product findElementById(int code);
    void deleteProduct(int code);
    int findCodeByName(string name);
};