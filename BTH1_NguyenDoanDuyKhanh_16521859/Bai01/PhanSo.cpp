#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo()
{
}

PhanSo::PhanSo(int TuSo, int MauSo)
{
    this->TuSo = TuSo;
    this->MauSo = MauSo;
}

PhanSo::PhanSo(const PhanSo &x)
{
    this->TuSo = x.TuSo; // new int(*x.TuSo) -- cấp phát vùng nhớ mới
    this->MauSo = x.MauSo;
}

PhanSo::~PhanSo()
{
}

void PhanSo::Nhap()
{
    cout << "\nNhap tu so: ";
    cin >> this->TuSo;
    cout << "\nNhap mau so: ";
    cin >> this->MauSo;
}

void PhanSo::Xuat()
{
    cout << this->TuSo << "/" << this->MauSo << endl;
}

void PhanSo::XuatThapPhan()
{
    cout << (float)(float(this->TuSo) / this->MauSo) << endl;
}

PhanSo PhanSo::Cong(const PhanSo &b) const
{
    PhanSo kq;
    kq.TuSo = this->TuSo * b.MauSo + this->MauSo * b.TuSo;
    kq.MauSo = this->MauSo * b.MauSo;
    return kq;
}

PhanSo PhanSo::Tru(const PhanSo &b) const
{
    PhanSo kq;
    kq.TuSo = this->TuSo * b.MauSo - this->MauSo * b.TuSo;
    kq.MauSo = this->MauSo * b.MauSo;
    return kq;
}

PhanSo PhanSo::Nhan(const PhanSo &b) const
{
    PhanSo kq;
    kq.TuSo = this->TuSo * b.TuSo;
    kq.MauSo = this->MauSo * b.MauSo;
    return kq;
}
PhanSo PhanSo::Chia(const PhanSo &b) const
{
    PhanSo kq;
    kq.TuSo = this->TuSo * b.MauSo;
    kq.MauSo = this->MauSo * b.TuSo;
    return kq;
}