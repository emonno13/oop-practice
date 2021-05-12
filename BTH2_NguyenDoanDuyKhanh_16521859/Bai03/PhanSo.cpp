#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo()
{
    this->TuSo = 0;
    this->MauSo = 1;
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
    cout << "\n\tNhap tu so: ";
    cin >> this->TuSo;
    cout << "\n\tNhap mau so: ";
    cin >> this->MauSo;
}

void PhanSo::Xuat()
{
    cout << "\t" << this->TuSo << "/" << this->MauSo << endl;
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
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tru(const PhanSo &b) const
{
    PhanSo kq;
    kq.TuSo = this->TuSo * b.MauSo - this->MauSo * b.TuSo;
    kq.MauSo = this->MauSo * b.MauSo;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Nhan(const PhanSo &b) const
{
    PhanSo kq;
    kq.TuSo = this->TuSo * b.TuSo;
    kq.MauSo = this->MauSo * b.MauSo;
    kq.RutGon();
    return kq;
}
PhanSo PhanSo::Chia(const PhanSo &b) const
{
    PhanSo kq;
    kq.TuSo = this->TuSo * b.MauSo;
    kq.MauSo = this->MauSo * b.TuSo;
    kq.RutGon();
    return kq;
}

int PhanSo::UCLN(int m, int n)
{
    if (m == n)
        return m;
    else if (m > n)
        return UCLN(m - n, n);
    else
        return UCLN(n - m, m);
}
void PhanSo::RutGon()
{
    int n = UCLN(this->TuSo, this->MauSo);
    this->TuSo = this->TuSo / n;
    this->MauSo = this->MauSo / n;
}
int PhanSo::SoSanh(const PhanSo &b) const
{
    float x = (float)this->TuSo / this->MauSo;
    float y = (float)b.TuSo / b.MauSo;
    if (x < y)
    {
        return -1;
    }
    else if (x > y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}