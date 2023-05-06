#include "Service/service.cpp"

int main()
{
    RepoFile repoFile;
    ProductRepo repoTest(repoFile.stackCreator());
    Vending vendingTest;
    MainUILogic(repoTest, vendingTest);
    return 0;
}