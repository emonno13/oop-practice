#include "NhanVien.h"

NhanVien::NhanVien()
{
}

NhanVien::~NhanVien()
{
}

NhanVien::NhanVien(string HoTen, int SoNgayLamViec, string MaSo, string ChucDanh, float HeSoLuong)
{
    this->HoTen = HoTen;
    this->SoNgayLamViec = SoNgayLamViec;
    this->MaSo = MaSo;
    this->ChucDanh = ChucDanh;
    this->HeSoLuong = HeSoLuong;
}
NhanVien::NhanVien(string HoTen, int SoNgayLamViec)
{
    this->HoTen = HoTen;
    this->SoNgayLamViec = SoNgayLamViec;
    this->MaSo = to_string(SoNgayLamViec) + HoTen;
    if (SoNgayLamViec >= 0 && SoNgayLamViec < 365)
    {
        this->ChucDanh = "Nhan Vien";
        this->HeSoLuong = 1.0;
    }
    else if (SoNgayLamViec >= 365 && SoNgayLamViec < 730)
    {
        this->ChucDanh = "Quan Ly";
        this->HeSoLuong = 1.5;
    }
    else if (SoNgayLamViec >= 730 && SoNgayLamViec < 1460)
    {
        this->ChucDanh = "Truong Phong";
        this->HeSoLuong = 2.25;
    }
    else if (SoNgayLamViec > 1460)
    {
        this->ChucDanh = "Truong Ban Quan Ly";
        this->HeSoLuong = 4.0;
    }
}
NhanVien::NhanVien(const NhanVien &a)
{
    this->HoTen = "";
    this->MaSo = "";
    this->ChucDanh = a.ChucDanh;
    this->HeSoLuong = a.HeSoLuong;
    this->SoNgayLamViec = a.SoNgayLamViec;
}

void NhanVien::Nhap()
{
    cout << "Nhap Ho ten: ";
    cin >> this->HoTen;
    cout << "Nhap so ngay: ";
    cin >> this->SoNgayLamViec;
    this->MaSo = to_string(this->SoNgayLamViec) + this->HoTen;
    if (SoNgayLamViec >= 0 && SoNgayLamViec < 365)
    {
        this->ChucDanh = "Nhan Vien";
        this->HeSoLuong = 1.0;
    }
    else if (SoNgayLamViec >= 365 && SoNgayLamViec < 730)
    {
        this->ChucDanh = "Quan Ly";
        this->HeSoLuong = 1.5;
    }
    else if (SoNgayLamViec >= 730 && SoNgayLamViec < 1460)
    {
        this->ChucDanh = "Truong Phong";
        this->HeSoLuong = 2.25;
    }
    else if (SoNgayLamViec > 1460)
    {
        this->ChucDanh = "Truong Ban Quan Ly";
        this->HeSoLuong = 4.0;
    }
}
void NhanVien::Xuat()
{
    cout << "Ho ten:" << this->HoTen << endl;
    cout << "Ma so:" << this->MaSo << endl;
    cout << "So ngay lam viec:" << this->SoNgayLamViec << endl;
    cout << "Chuc danh:" << this->ChucDanh << endl;
    cout << "He so luong:" << this->HeSoLuong << endl;
}

string NhanVien::GetHoTen()
{
    return this->HoTen;
}
void NhanVien::SetHoTen(string HoTen)
{
    this->HoTen = HoTen;
}

int NhanVien::GetSoNgayLamViec()
{
    return this->SoNgayLamViec;
}
void NhanVien::SetSoNgayLamViec(int SoNgayLamViec)
{
    this->SoNgayLamViec = SoNgayLamViec;
}

string NhanVien::GetMaSo()
{
    return this->MaSo;
}
void NhanVien::SetMaSo(string MaSo)
{
    this->MaSo = MaSo;
}

string NhanVien::GetChucDanh()
{
    return this->ChucDanh;
}
void NhanVien::SetChucDanh(string ChucDanh)
{
    this->ChucDanh = ChucDanh;
}

float NhanVien::GetHeSoLuong()
{
    return this->HeSoLuong;
}
void NhanVien::SetHeSoLuong(float HeSoLuong)
{
    this->HeSoLuong = HeSoLuong;
}
