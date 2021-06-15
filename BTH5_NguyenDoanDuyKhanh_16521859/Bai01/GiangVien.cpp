#include "GiangVien.h"

GiangVien::GiangVien()
{
    this->hocham = "";
    this->hocvi = "";
    this->sonamday = 0;
    this->somonday = 0;
}

GiangVien::GiangVien(string hoten, string ngaysinh, string maso, string hocham, string hocvi, int sonamday, int somonday)
    : NhanSu(hoten, ngaysinh, maso)
{
    this->hocham = hocham;
    this->hocvi = hocvi;
    this->somonday = somonday;
    this->somonday = sonamday;
}

GiangVien::GiangVien(const GiangVien &x) : NhanSu(x)
{
    this->hocham = x.hocham;
    this->hocvi = x.hocvi;
    this->somonday = x.somonday;
    this->sonamday = x.sonamday;
}

GiangVien::~GiangVien(){};

void GiangVien::Nhap()
{
    NhanSu::Nhap();
    fflush(stdin);
    cout << "\nNhap hoc ham: ";
    getline(cin, this->hocham);
    cout << "\nNhap hoc vi: ";
    getline(cin, this->hocvi);
    cout << "\nNhap so nam giang day: ";
    cin >> this->sonamday;
    cout << "\nNhap so mon giang day: ";
    cin >> this->somonday;
};

void GiangVien::Xuat() const
{
    NhanSu::Xuat();
    cout << "\n\tHoc ham:  " << this->hocham
         << "\n\tHoc vi: " << this->hocvi
         << "\n\tSo nam giang day: " << this->sonamday
         << "\n\tSo mon day: " << this->somonday
         << "\n\tLuong: " << this->TinhLuong();
};

float GiangVien::TinhLuong() const
{
    return (this->somonday * this->sonamday * 0.12) * 20000;
};