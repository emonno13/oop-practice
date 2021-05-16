#include "HocSinh.h"
#include <regex>

void HocSinh::setHoTen(const string &x)
{
    this->hoten = x;
}
void HocSinh::setMaSo(const string &x)
{
    this->maso = x;
}
void HocSinh::setSDT(const string &x)
{
    this->sdt = x;
}
void HocSinh::setDiemTB(const float &x)
{
    this->diemTB = x;
}
string HocSinh::getHoTen()
{
    return this->hoten;
}
string HocSinh::getMaSo()
{
    return this->maso;
}
string HocSinh::getSDT()
{
    return this->sdt;
}
float HocSinh::getDiemTB()
{
    return this->diemTB;
}

HocSinh::HocSinh()
{
    setHoTen("");
    setMaSo("");
    setSDT("");
    setDiemTB(-1);
}
HocSinh::HocSinh(string hoten, string maso, string sdt, float diemTB)
{
    setHoTen(hoten);
    setMaSo(maso);
    setSDT(sdt);
    setDiemTB(diemTB);
}
HocSinh::HocSinh(const HocSinh &x)
{
    setHoTen(x.hoten);
    setMaSo(x.maso);
    setSDT(x.sdt);
    setDiemTB(x.diemTB);
}

HocSinh::~HocSinh()
{
}

istream &operator>>(istream &is, HocSinh &hs)
{

    while (!regex_match(hs.hoten, regex("^[a-zA-Z]+$")))
    {
        cout << "\n\tNhap ho ten:";
        is >> hs.hoten;
    }

    while (hs.maso.length() != 8)
    {
        cout << "\n\tNhap ma so: ";
        is >> hs.maso;
    }

    while (!regex_match(hs.sdt, regex("[(-|+)|][0-9]+")) || hs.sdt.length() < 9 || hs.sdt.length() > 10)
    {
        cout << "\n\tNhap sdt: ";
        is >> hs.sdt;
    }

    while (hs.diemTB < 0 || hs.diemTB > 10)
    {
        cout << "\n\tNhap diemTB: ";
        is >> hs.diemTB;
    }
}

ostream &operator<<(ostream &os, HocSinh hs)
{
    os << "\n\tHo ten: " << hs.hoten << "| MaSo: " << hs.maso << "| Sdt: " << hs.sdt << "| Diem tb: " << hs.diemTB;
}
