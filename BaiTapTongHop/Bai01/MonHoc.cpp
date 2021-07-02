#include "MonHoc.h"

void MonHoc::setMaSo(const string &maso) { this->maso = maso; };
void MonHoc::setTenMonHoc(const string &tenmonhoc) { this->tenmonhoc = tenmonhoc; };
void MonHoc::setHeSo(const int &heso) { this->heso = heso; };
void MonHoc::setDiemHeSo1(const float &diemheso1) { this->diemheso1 = diemheso1; };
void MonHoc::setDiemHeSo2(const float &diemheso2) { this->diemheso2 = diemheso2; };

string MonHoc::getMaSo() const { return this->maso; };
string MonHoc::getTenMonHoc() const { return this->tenmonhoc; };
int MonHoc::getHeSo() const { return this->heso; };
float MonHoc::getDiemHeSo1() const { return this->diemheso1; };
float MonHoc::getDiemHeSo2() const { return this->diemheso2; };

MonHoc::MonHoc()
{
    setMaSo("");
    setTenMonHoc("");
    setHeSo(0);
    setDiemHeSo1(0);
    setDiemHeSo2(0);
};

MonHoc::MonHoc(string maso, string tenmonhoc, int heso, float diemheso1, float diemheso2)
{
    setMaSo(maso);
    setTenMonHoc(tenmonhoc);
    setHeSo(heso);
    setDiemHeSo1(diemheso1);
    setDiemHeSo2(diemheso2);
};

MonHoc::~MonHoc(){};

void MonHoc::Nhap()
{
    fflush(stdin);
    cout << "===============>>";
    cout << "\nNhap ma so: ";
    getline(cin, this->maso);
    cout << "\nNhap ten mon hoc: ";
    getline(cin, this->tenmonhoc);
    cout << "\nNhap he so mon hoc: ";
    cin >> this->heso;
    cout << "\nNhap diem he so 1: ";
    cin >> this->diemheso1;
    cout << "\nNhap diem he so 2: ";
    cin >> this->diemheso2;
};

void MonHoc::Xuat() const
{
    cout << "\n | Ma so: " << getMaSo()
         << " | Ten mon hoc: " << getTenMonHoc()
         << " | Diem he so 1: " << getDiemHeSo1()
         << " | Diem he so 2: " << getDiemHeSo2();
};

istream &operator>>(istream &is, MonHoc &x)
{
    fflush(stdin);
    cout << "===============>>";
    cout << "\nNhap ma so: ";
    getline(is, x.maso);
    cout << "\nNhap ten mon hoc: ";
    getline(is, x.tenmonhoc);
    cout << "\nNhap he so mon hoc: ";
    is >> x.heso;
    cout << "\nNhap diem he so 1: ";
    is >> x.diemheso1;
    cout << "\nNhap diem he so 2: ";
    is >> x.diemheso2;
    return is;
};
ostream &operator<<(ostream &os, MonHoc *x)
{
    os << "\n | Ma so: " << x->getMaSo()
       << " | Ten mon hoc: " << x->getTenMonHoc()
       << " | Diem he so 1: " << x->getDiemHeSo1()
       << " | Diem he so 2: " << x->getDiemHeSo2();
};