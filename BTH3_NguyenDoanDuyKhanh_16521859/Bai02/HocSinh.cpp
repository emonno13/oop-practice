#include "HocSinh.h"
#include <regex>

HocSinh::HocSinh()
{
    this->hoten = "";
    this->maso = "";
    this->sdt = "";
    this->diemTB = -1;
}
HocSinh::HocSinh(string hoten, string maso, string sdt, float diemTB)
{
    this->hoten = hoten;
    this->maso = maso;
    this->sdt = sdt;
    this->diemTB = diemTB;
}
HocSinh::HocSinh(const HocSinh &x)
{
    this->hoten = x.hoten;
    this->maso = x.maso;
    this->sdt = x.sdt;
    this->diemTB = x.diemTB;
}

HocSinh::~HocSinh()
{
}

istream &operator>>(istream &is, HocSinh &hs)
{

    while (!regex_match(hs.hoten, regex("^[a-zA-Z]+$")))
    {
        cout << "\nNhap ho ten:";
        is >> hs.hoten;
    }

    while (hs.maso.length() != 8)
    {
        cout << "\nNhap ma so: ";
        is >> hs.maso;
    }

    while (!regex_match(hs.sdt, regex("[(-|+)|][0-9]+")) || hs.sdt.length() < 9 || hs.sdt.length() > 10)
    {
        cout << "\nNhap sdt: ";
        is >> hs.sdt;
    }

    while (hs.diemTB < 0 || hs.diemTB > 10)
    {
        cout << "\nNhap diemTB: ";
        is >> hs.diemTB;
    }
}

ostream &operator<<(ostream &os, HocSinh hs)
{
    os << "\nHo ten: " << hs.hoten << " MaSo: " << hs.maso << " Sdt: " << hs.sdt << " Diem tb: " << hs.diemTB;
}
