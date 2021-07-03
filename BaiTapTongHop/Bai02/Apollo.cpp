#include "Apollo.h"

void Apollo::setN(const int &N) { this->N = N; };
int Apollo::getN() const { return this->N; };

Apollo::Apollo()
{
    setHeSoAlpha(10);
    setN(random(5, 20));
    setLoai(LoaiPhiThuyen::ApolloSpaceShip);
};

Apollo::Apollo(string sohieu, string ten) : PhiThuyen(sohieu, ten)
{
    setHeSoAlpha(10);
    setN(random(5, 20));
    setLoai(LoaiPhiThuyen::ApolloSpaceShip);
};

Apollo::~Apollo(){};

void Apollo::Nhap()
{
    PhiThuyen::Nhap();
    setHeSoAlpha(10);
    setN(random(5, 20));
    setLoai(LoaiPhiThuyen::ApolloSpaceShip);
};
void Apollo::Xuat() const
{
    cout << "\n | Loai: Apollo";
    PhiThuyen::Xuat();
    cout << " | So luong N nguoi: " << getN()
         << " | So nhien lieu tieu thu / T giay: " << NhienLieuTieuThu(3600);
};

int Apollo::NhienLieuTieuThu(const int &T) const
{
    return (PhiThuyen::getHeSoAlpha() + getN()) * T;
};