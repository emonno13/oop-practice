#include "Cuu.h"

Cuu::Cuu()
{
    GiaSuc::setSoLuongCon(rand() % 10 + 1);
    GiaSuc::setSoLitSua(rand() % 5 + 1);
    GiaSuc::setTiengKeu(this->keu);
};

Cuu::~Cuu(){};

void Cuu::Xuat() const
{
    cout << "\nCuu >> ";
    GiaSuc::Xuat();
}

void Cuu::Keu() const
{
    cout << this->keu;
}
