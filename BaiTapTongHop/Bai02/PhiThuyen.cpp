#include "PhiThuyen.h"

void PhiThuyen::setSoHieu(const string &sohieu) { this->sohieu = sohieu; };
void PhiThuyen::setTen(const string &ten) { this->ten = ten; };
void PhiThuyen::setHeSoAlpha(const int &hesoAlpha) { this->hesoAlpha = hesoAlpha; };

string PhiThuyen::getSoHieu() const { return this->sohieu; };
string PhiThuyen::getTen() const { return this->ten; };
int PhiThuyen::getHeSoAlpha() const { return this->hesoAlpha; };

PhiThuyen::PhiThuyen()
{
    setSoHieu("");
    setTen("");
    setHeSoAlpha(0);
};

PhiThuyen::PhiThuyen(string sohieu, string ten, int hesoAlpha)
{
    setSoHieu(sohieu);
    setTen(ten);
    setHeSoAlpha(hesoAlpha);
};

PhiThuyen::~PhiThuyen(){};

void PhiThuyen::Nhap()
{
    fflush(stdin);
    cout << "\nNhap so hieu: ";
    getline(cin, this->sohieu);
    cout << "\nNhap ten: ";
    getline(cin, this->ten);
};

void PhiThuyen::Xuat() const
{
    cout << "\n | So hieu: " << getSoHieu()
         << " | Ten: " << getTen();
};

int random(int min, int max)
{
    static bool first = true;
    if (first)
    {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}