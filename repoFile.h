#include <fstream>
#include <sstream>

class RepoFile
{
private:
    string fileName;

public:
    RepoFile();
    RepoFile(string fileName);
    ~RepoFile();
    stack<Product> stackCreator();
    void writeFile(stack<Product> productStack);
    void fileDeleteInfo();
};