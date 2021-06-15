#include "De.h"

De::De()
{
    GiaSuc::setSoLuongCon(rand() % 10 + 1);
    GiaSuc::setSoLitSua(rand() % 10 + 1);
    GiaSuc::setTiengKeu(this->keu);
};

De::~De(){};

void De::Xuat() const
{
    cout << "\nDe >> ";
    GiaSuc::Xuat();
};

void De::Keu() const
{
    cout << this->keu;
}