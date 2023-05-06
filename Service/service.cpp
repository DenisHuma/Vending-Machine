#include "../UI/UI.cpp"
#include "../Objects/vending.cpp"
#include "../Repositories/repoFile.cpp"

bool changePossible(double change, Vending vending)
{
    int changeCinci = 0;
    int changeZece = 0;
    while (change >= 0.5 && vending.getCinciZBani() - changeCinci > 0)
    {
        change = change - 0.5;
        changeCinci = changeCinci + 1;
    }
    while (change >= 10 && vending.getZeceBani() - changeZece > 0)
    {
        change = change - 0.1;
        changeZece = changeZece + 1;
    }

    if (change == 0)
    {
        vending.setZeceBani(vending.getZeceBani() - changeZece);
        vending.setCinciZeciBani(vending.getCinciZBani() - changeCinci);
        return true;
    }
    return false;
}

void MainUILogic(ProductRepo repo, Vending vending)
{
    MainUI();
    string input;
    cin >> input;

    int code = repo.findCodeByName(input);
    if (code)
    {
        cout << "Produsul Dorit Este Pe Stoc Si Costa " << repo.findElementById(code).getPrice() << " Lei." << endl;
        cout << "Introduceti banii in tonomat." << endl;
        int sum;
        cin >> sum;
        cout << "Restul Va Fi De " << sum - repo.findElementById(code).getPrice() << "Lei" << endl;
        if (changePossible(sum - repo.findElementById(code).getPrice(), vending))
        {
            cout << "Va Rugam Ridicati Produsul." << endl;
            repo.deleteProduct(code);
            RepoFile repoFile;
            repoFile.writeFile(repo.getStack());
        }
        else
        {
            cout << "Nu Avem Sa Va Dam Rest." << endl;
        }
    }
    else
    {
        cout << "Produsul Dorit Nu Este Pe Stoc." << endl;
        MainUILogic(repo, vending);
    }
}
