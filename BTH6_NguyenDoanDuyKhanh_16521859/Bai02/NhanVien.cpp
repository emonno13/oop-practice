#include "NhanVien.h"

NhanVien::NhanVien()
{
    this->maso = "";
    this->hoten = "";
    this->ngaysinh = "";
};

NhanVien::NhanVien(string maso, string hoten, string ngaysinh)
{
    this->maso = maso;
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
};

NhanVien::NhanVien(const NhanVien &x)
{
    this->maso = x.maso;
    this->hoten = x.hoten;
    this->ngaysinh = x.ngaysinh;
};

NhanVien::~NhanVien(){};

void NhanVien::Nhap()
{
    fflush(stdin);
    cout << "\nNhap ma so: ";
    getline(cin, this->maso);
    cout << "\nNhap ho ten: ";
    getline(cin, this->hoten);
    cout << "\nNhap ngay sinh: ";
    getline(cin, this->ngaysinh);
};

void NhanVien::Xuat() const
{
    cout << "\n\tMa so: " << this->maso
         << " | Ho ten: " << this->hoten
         << " | Ngay sinh: " << this->ngaysinh;
};
