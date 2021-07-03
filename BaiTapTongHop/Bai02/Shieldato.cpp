#include "Shieldato.h"

void Shieldato::setR(const int &R) { this->R = R; };
int Shieldato::getR() const { return this->R; };

Shieldato::Shieldato()
{
    setHeSoAlpha(20);
    setR(random(5, 30));
    setLoai(LoaiPhiThuyen::ShieldatoSpaceShip);
};

Shieldato::Shieldato(string sohieu, string ten) : PhiThuyen(sohieu, ten)
{
    setHeSoAlpha(20);
    setR(random(5, 30));
    setLoai(LoaiPhiThuyen::ShieldatoSpaceShip);
};

Shieldato::~Shieldato(){};

void Shieldato::Nhap()
{
    PhiThuyen::Nhap();
    setHeSoAlpha(20);
    setR(random(5, 30));
    setLoai(LoaiPhiThuyen::ShieldatoSpaceShip);
};
void Shieldato::Xuat() const
{
    cout << "\n | Loai: Shieldato";
    PhiThuyen::Xuat();
    cout << " | Ban kinh R: " << getR()
         << " | So nhien lieu tieu thu / T giay: " << NhienLieuTieuThu(3600);
};

int Shieldato::NhienLieuTieuThu(const int &T) const
{
    return PhiThuyen::getHeSoAlpha() * T + 2 * getR() * T;
};