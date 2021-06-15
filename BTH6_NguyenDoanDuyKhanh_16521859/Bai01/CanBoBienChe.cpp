#include "CanBoBienChe.h"

CanBoBienChe::CanBoBienChe()
{
    this->luongcoban = 0;
    this->hesoluong = 0;
    this->hesophucap = 0;
};

CanBoBienChe::CanBoBienChe(string maso, string hoten, string ngaysinh, int luongcoban, int hesoluong, int hesophucap)
    : CanBo(maso, hoten, ngaysinh)
{
    this->luongcoban = luongcoban;
    this->hesoluong = hesoluong;
    this->hesophucap = hesophucap;
};

CanBoBienChe::CanBoBienChe(const CanBoBienChe &x) : CanBo(x)
{
    this->luongcoban = x.luongcoban;
    this->hesoluong = x.hesoluong;
    this->hesophucap = x.hesophucap;
};

CanBoBienChe::~CanBoBienChe(){};

void CanBoBienChe::Nhap()
{
    CanBo::Nhap();
    fflush(stdin);
    cout << "\nNhap luong co ban: ";
    cin >> this->luongcoban;
    cout << "\nNhap he so luong: ";
    cin >> this->hesoluong;
    cout << "\nNhap he so phu cap: ";
    cin >> this->hesophucap;
};

void CanBoBienChe::Xuat() const
{
    CanBo::Xuat();
    cout << " | Luong co ban: " << this->luongcoban
         << " | He so luong: " << this->hesoluong
         << " | He so phu cap: " << this->hesophucap
         << " | Luong: " << this->TinhLuong();
};

int CanBoBienChe::TinhLuong() const
{
    return this->luongcoban * this->hesoluong * this->hesophucap;
};