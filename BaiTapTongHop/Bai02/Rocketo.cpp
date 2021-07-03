#include "Rocketo.h"

void Rocketo::setM(const int &M) { this->M = M; };
int Rocketo::getM() const { return this->M; };

Rocketo::Rocketo()
{
    setHeSoAlpha(30);
    setM(random(2, 5));
    setLoai(LoaiPhiThuyen::RocketoSpaceShip);
};

Rocketo::Rocketo(string sohieu, string ten) : PhiThuyen(sohieu, ten)
{
    setHeSoAlpha(30);
    setM(random(2, 5));
    setLoai(LoaiPhiThuyen::RocketoSpaceShip);
};

Rocketo::~Rocketo(){};

void Rocketo::Nhap()
{
    PhiThuyen::Nhap();
    setHeSoAlpha(30);
    setM(random(2, 5));
    setLoai(LoaiPhiThuyen::RocketoSpaceShip);
};
void Rocketo::Xuat() const
{
    cout << "\n | Loai: Rocketo";
    PhiThuyen::Xuat();
    cout << " | Hoa luc: " << getM()
         << " | Nhien lieu tieu thu / T giay: " << NhienLieuTieuThu(3600);
};

int Rocketo::NhienLieuTieuThu(const int &T) const
{
    return PhiThuyen::getHeSoAlpha() * T + getM() * getM() * T;
};