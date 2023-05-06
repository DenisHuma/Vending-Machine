#include <iostream>
using namespace std;

class Vending
{
private:
    int ZeceBani;
    int CinciZeciBani;
    int UnLeu;
    int CinciLei;
    int ZeceLei;

public:
    Vending();
    Vending(int ZeceBani, int CinciZeciBani, int UnLeu, int CinciLei, int ZeceLei);
    void setZeceBani(int value);
    void setCinciZeciBani(int value);
    void setUnLeu(int value);
    void setCinciLei(int value);
    void setZeceLei(int value);
    int getZeceBani();
    int getCinciZBani();
    int getUnLeu();
    int getCinciLei();
    int getZeceLei();
    double getSuma();
};