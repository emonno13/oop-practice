#include "Bo.h"

Bo::Bo()
{
    GiaSuc::setSoLuongCon(rand() % 10 + 1);
    GiaSuc::setSoLitSua(rand() % 20 + 1);
    GiaSuc::setTiengKeu(this->keu);
};

Bo::~Bo(){};

void Bo::Xuat() const
{
    cout << "\nBo >> ";
    GiaSuc::Xuat();
}

void Bo::Keu() const
{
    cout << this->keu;
}