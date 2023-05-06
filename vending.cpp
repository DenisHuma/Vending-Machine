#include "vending.h"

Vending::Vending()
{
    this->ZeceBani = 100;
    this->CinciZeciBani = 100;
    this->UnLeu = 0;
    this->CinciLei = 0;
    this->ZeceLei = 0;
}

Vending::Vending(int zeceBani, int CinciZBani, int UnLeu, int CinciLei, int ZeceLei)
{
    this->ZeceBani = zeceBani;
    this->CinciZeciBani = CinciZBani;
    this->UnLeu = UnLeu;
    this->CinciLei = CinciLei;
    this->ZeceLei = ZeceLei;
}

void Vending::setZeceBani(int value)
{
    this->ZeceBani = value;
}
void Vending::setCinciZeciBani(int value)
{
    this->CinciZeciBani = value;
}
void Vending::setUnLeu(int value)
{
    this->UnLeu = value;
}
void Vending::setCinciLei(int value)
{
    this->CinciLei = value;
}
void Vending::setZeceLei(int value)
{
    this->ZeceLei = value;
}

int Vending::getZeceBani()
{
    return this->ZeceBani;
}

int Vending::getCinciZBani()
{
    return this->CinciZeciBani;
}

int Vending::getUnLeu()
{
    return this->UnLeu;
}

int Vending::getCinciLei()
{
    return this->CinciLei;
}

int Vending::getZeceLei()
{
    return this->ZeceLei;
}

double Vending::getSuma()
{
    return 0.1 * this->ZeceBani + 0.5 * this->CinciZeciBani + 1 * this->UnLeu + 5 * this->CinciLei + this->ZeceLei;
}