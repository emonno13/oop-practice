#include "SoPhuc.h"

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

// void SoPhuc::Nhap()
// {
//     cout << "\nNhap phan thuc: ";
//     cin >> this->PhanThuc;
//     cout << "\nNhap phan ao: ";
//     cin >> this->PhanAo;
// }

// void SoPhuc::Xuat()
// {
//     cout << this->PhanThuc << "+" << this->PhanAo << "i" << endl;
// }

istream &operator>>(istream &is, SoPhuc &x)
{
    cout << "\nNhap phan thuc: ";
    is >> x.PhanThuc;
    cout << "\nNhap phan ao: ";
    is >> x.PhanAo;
    return is;
}
ostream &operator<<(ostream &os, SoPhuc x)
{
    os << "\n\tSo phuc: " << x.PhanThuc << '+' << x.PhanAo << "i" << endl;
    return os;
}

SoPhuc SoPhuc::operator+(SoPhuc &x) const
{
    SoPhuc kq(this->PhanThuc + x.PhanThuc, this->PhanAo + x.PhanAo);
    return kq;
}
SoPhuc SoPhuc::operator-(SoPhuc &x) const
{
    SoPhuc kq(this->PhanThuc - x.PhanThuc, this->PhanAo - x.PhanAo);
    return kq;
}
SoPhuc SoPhuc::operator*(SoPhuc &x) const
{
    SoPhuc kq(this->PhanThuc * x.PhanThuc - this->PhanAo * x.PhanAo, this->PhanThuc * x.PhanThuc + this->PhanAo * x.PhanAo);
    return kq;
}
SoPhuc SoPhuc::operator/(SoPhuc &x) const
{
    SoPhuc kq(
        ((double)(this->PhanThuc * x.PhanThuc - this->PhanAo * x.PhanAo)) / (pow(x.PhanThuc, 2) + pow(x.PhanAo, 2)),
        ((double)(this->PhanAo * x.PhanThuc - this->PhanThuc * x.PhanAo)) / (pow(x.PhanThuc, 2) + pow(x.PhanAo, 2)));
    return kq;
}

bool SoPhuc::operator==(SoPhuc &x) const
{
    if (sqrt(pow(this->PhanThuc, 2) + pow(this->PhanAo, 2)) == sqrt(pow(x.PhanThuc, 2) + pow(x.PhanAo, 2)))
        return true;
    return false;
};
bool SoPhuc::operator!=(SoPhuc &x) const
{
    if (sqrt(pow(this->PhanThuc, 2) + pow(this->PhanAo, 2)) != sqrt(pow(x.PhanThuc, 2) + pow(x.PhanAo, 2)))
        return true;
    return false;
};