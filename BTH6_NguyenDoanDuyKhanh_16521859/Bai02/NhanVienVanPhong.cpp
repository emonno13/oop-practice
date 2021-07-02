#include "NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong()
{
    this->solopboiduong = 0;
    this->sogiolaodong = 0;
};

NhanVienVanPhong::NhanVienVanPhong(string maso, string hoten, string ngaysinh, int solopboiduong, int sogiolaodong)
    : NhanVien(maso, hoten, ngaysinh)
{
    this->solopboiduong = solopboiduong;
    this->sogiolaodong = sogiolaodong;
};

NhanVienVanPhong::NhanVienVanPhong(const NhanVienVanPhong &x) : NhanVien(x)
{
    this->solopboiduong = x.solopboiduong;
    this->sogiolaodong = x.sogiolaodong;
};

NhanVienVanPhong::~NhanVienVanPhong(){};

void NhanVienVanPhong::Nhap()
{
    NhanVien::Nhap();
    fflush(stdin);
    cout << "\nNhap so lop boi duong: ";
    cin >> this->solopboiduong;
    cout << "\nNhap so gio lao dong: ";
    cin >> this->sogiolaodong;
};

void NhanVienVanPhong::Xuat() const
{
    NhanVien::Xuat();
    cout << " | So lop boi duong: " << this->solopboiduong
         << " | So gio lao dong: " << this->sogiolaodong;
};

bool NhanVienVanPhong::XetLaoDongTienTien() const
{
    if (this->solopboiduong >= 1 && this->sogiolaodong >= 20)
        return true;
    return false;
};