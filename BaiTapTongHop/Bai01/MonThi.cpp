#include "MonThi.h"

void MonThi::setDiemThiHetMon(const float &) { this->diemthihetmon = diemthihetmon; };

float MonThi::getDiemThiHetMon() const { return this->diemthihetmon; };

MonThi::MonThi(){};

MonThi::MonThi(string maso, string tenmonhoc, int heso, float diemheso1, float diemheso2, float diemthihetmon)
    : MonHoc(maso, tenmonhoc, heso, diemheso1, diemheso2)
{
    setDiemThiHetMon(diemthihetmon);
};

MonThi::~MonThi(){};

void MonThi::Nhap()
{
    MonHoc::Nhap();
    // cin >> static_cast<MonHoc &>(*this);
    cout << "\nNhap diem thi het mon: ";
    cin >> this->diemthihetmon;
};

void MonThi::Xuat() const
{
    MonHoc::Xuat();
    cout << " | Diem thi het mon: " << getDiemThiHetMon()
         << " | Diem tong ket mon hoc: " << DTKMH() << endl;
};

float MonThi::DTKMH() const
{
    return (DTBKT() + getDiemThiHetMon()) / 2;
};

float MonThi::DTBKT() const
{
    return (getDiemHeSo1() + getDiemHeSo2() * 2) / 3;
};

istream &operator>>(istream &is, MonThi &x)
{
    is >> static_cast<MonHoc &>(x);
    fflush(stdin);
    cout << "\nNhap diem thi het mon: ";
    is >> x.diemthihetmon;
    return is;
};

ostream &operator<<(ostream &os, MonThi *x)
{
    os << static_cast<MonHoc *>(x);
    os << " | Diem thi het mon: " << x->getDiemThiHetMon()
       << " | Diem tong ket mon hoc: " << x->DTKMH() << endl;
};