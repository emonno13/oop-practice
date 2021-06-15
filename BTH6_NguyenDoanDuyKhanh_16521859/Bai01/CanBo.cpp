#include "CanBo.h"

CanBo::CanBo()
{
    this->maso = "";
    this->hoten = "";
    this->ngaysinh = "";
};

CanBo::CanBo(string maso, string hoten, string ngaysinh)
{
    this->maso = maso;
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
};

CanBo::CanBo(const CanBo &x)
{
    this->maso = x.maso;
    this->hoten = x.hoten;
    this->ngaysinh = x.ngaysinh;
};

CanBo::~CanBo(){};

void CanBo::Nhap()
{
    fflush(stdin);
    cout << "\nNhap ma so: ";
    getline(cin, this->maso);
    cout << "\nNhap ho ten: ";
    getline(cin, this->hoten);
    cout << "\nNhap ngay sinh: ";
    getline(cin, this->ngaysinh);
};

void CanBo::Xuat() const
{
    cout << "\nMa so: " << this->maso << " | Ho ten: " << this->hoten << " | Ngay sinh: " << this->ngaysinh;
};