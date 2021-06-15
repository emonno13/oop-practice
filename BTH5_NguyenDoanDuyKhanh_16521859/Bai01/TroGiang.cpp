#include "TroGiang.h"

TroGiang::TroGiang()
{
    this->somontrogiang = 0;
};

TroGiang::TroGiang(string hoten, string ngaysinh, string maso, int somontrogiang) : NhanSu(hoten, ngaysinh, maso)
{
    this->somontrogiang = somontrogiang;
};

TroGiang::TroGiang(const TroGiang &x) : NhanSu(x)
{
    this->somontrogiang = x.somontrogiang;
}

TroGiang::~TroGiang(){};

void TroGiang::Nhap()
{
    NhanSu::Nhap();
    fflush(stdin);
    cout << "\nNhap so mon tro giang: ";
    cin >> this->somontrogiang;
}

void TroGiang::Xuat() const
{
    NhanSu::Xuat();
    cout << "\n\tSo mon tro giang: " << this->somontrogiang
         << "\n\tLuong: " << this->TinhLuong();
};

float TroGiang::TinhLuong() const
{
    return (this->somontrogiang * 0.3) * 18000;
};