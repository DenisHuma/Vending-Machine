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
    }
}