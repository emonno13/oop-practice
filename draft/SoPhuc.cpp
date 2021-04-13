#include "SoPhuc.h"
#include <iostream>
#include <math.h>
using namespace std;

SoPhuc::SoPhuc()
{
    this->PhanThuc = 0;
    this->PhanAo = 0;
};
SoPhuc::SoPhuc(double x, double y)
{
    this->PhanThuc = x;
    this->PhanAo = y;
};
SoPhuc::SoPhuc(const SoPhuc &x)
{
    this->PhanThuc = x.PhanThuc;
    this->PhanAo = x.PhanAo;
}
SoPhuc::~SoPhuc()
{
}

void SoPhuc::Nhap()
{
    cout << "\nNhap phan thuc: ";
    cin >> this->PhanThuc;
    cout << "\nNhap phan ao: ";
    cin >> this->PhanAo;
}

void SoPhuc::Xuat()
{
    cout << this->PhanThuc << "+" << this->PhanAo << "i" << endl;
}

SoPhuc SoPhuc::Cong(SoPhuc &x) const
{
    SoPhuc kq(this->PhanThuc + x.PhanThuc, this->PhanAo + x.PhanAo);
    return kq;
}
SoPhuc SoPhuc::Tru(SoPhuc &x) const
{
    SoPhuc kq(this->PhanThuc - x.PhanThuc, this->PhanAo - x.PhanAo);
    return kq;
}
SoPhuc SoPhuc::Nhan(SoPhuc &x) const
{
    SoPhuc kq(this->PhanThuc * x.PhanThuc - this->PhanAo * x.PhanAo, this->PhanThuc * x.PhanThuc + this->PhanAo * x.PhanAo);
    return kq;
}
SoPhuc SoPhuc::Chia(SoPhuc &x) const
{
    SoPhuc kq(
        ((double)(this->PhanThuc * x.PhanThuc - this->PhanAo * x.PhanAo)) / (pow(x.PhanThuc, 2) + pow(x.PhanAo, 2)),
        ((double)(this->PhanAo * x.PhanThuc - this->PhanThuc * x.PhanAo)) / (pow(x.PhanThuc, 2) + pow(x.PhanAo, 2)));
    return kq;
}
