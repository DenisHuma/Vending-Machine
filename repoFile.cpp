#include "repoFile.h"

RepoFile::RepoFile()
{
    this->fileName = "repoFile.txt";
}
RepoFile::RepoFile(string fileName)
{
    this->fileName = fileName;
}
RepoFile::~RepoFile()
{
    this->fileName = ' ';
}
stack<Product> RepoFile::stackCreator()
{
    ifstream fin(this->fileName);
    string line;
    stack<Product> produsStack;
    while (getline(fin, line))
    {
        istringstream iss(line);
        Product theProduct;
        string name;
        double value;
        int code;
        iss >> name >> value >> code;
        theProduct.setName(name);
        theProduct.setPrice(value);
        theProduct.setCode(code);
        produsStack.push(theProduct);
    }
    fin.close();
    return produsStack;
}

void RepoFile::fileDeleteInfo()
{
    ofstream outFile(this->fileName, ios::trunc);
    outFile.close();
}

void RepoFile::writeFile(stack<Product> productStack)
{
    Product aux;
    fileDeleteInfo();
    ofstream outFile(this->fileName, ios::app);
    while (!productStack.empty())
    {
        aux = productStack.top();
        outFile << aux.getName() << ' ' << aux.getPrice() << ' ' << aux.getCode() << ' ' << endl;
        productStack.pop();
    }
}