#include "CanBoHopDong.h"

CanBoHopDong::CanBoHopDong()
{
    this->tiencong = 0;
    this->songaycong = 0;
    this->hesovuotgio = 0;
};

CanBoHopDong::CanBoHopDong(string maso, string hoten, string ngaysinh, int tiencong, int songaycong, int hesovuotgio)
    : CanBo(maso, hoten, ngaysinh)
{
    this->tiencong = tiencong;
    this->songaycong = songaycong;
    this->hesovuotgio = hesovuotgio;
};

CanBoHopDong::CanBoHopDong(const CanBoHopDong &x) : CanBo(x)
{
    this->tiencong = x.tiencong;
    this->songaycong = x.songaycong;
    this->hesovuotgio = x.hesovuotgio;
};

CanBoHopDong::~CanBoHopDong(){};

void CanBoHopDong::Nhap()
{
    CanBo::Nhap();
    fflush(stdin);
    cout << "\nNhap tien cong: ";
    cin >> this->tiencong;
    cout << "\nNhap so ngay cong: ";
    cin >> this->songaycong;
    cout << "\nNhap he so vuot gio: ";
    cin >> this->hesovuotgio;
};

void CanBoHopDong::Xuat() const
{
    CanBo::Xuat();
    cout << " | Tien cong: " << this->tiencong
         << " | So ngay cong: " << this->songaycong
         << " | He so vuot gio: " << this->hesovuotgio
         << " | Luong: " << this->TinhLuong();
};

int CanBoHopDong::TinhLuong() const
{
    return this->tiencong * this->songaycong * this->hesovuotgio;
};