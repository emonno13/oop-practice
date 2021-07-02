#include "GiangVien.h"

GiangVien::GiangVien()
{
    this->sotietday = 0;
    this->sodetaikhoaluan = 0;
};

GiangVien::GiangVien(string maso, string hoten, string ngaysinh, int sotietday, int sodetaikhoaluan)
    : NhanVien(maso, hoten, ngaysinh)
{
    this->sotietday = sotietday;
    this->sodetaikhoaluan = sodetaikhoaluan;
};

GiangVien::GiangVien(const GiangVien &x) : NhanVien(x)
{
    this->sotietday = x.sotietday;
    this->sodetaikhoaluan = x.sodetaikhoaluan;
};

GiangVien::~GiangVien(){};

void GiangVien::Nhap()
{
    NhanVien::Nhap();
    fflush(stdin);
    cout << "\nNhap so tiet day: ";
    cin >> this->sotietday;
    cout << "\nNhap so de tai khoa luan: ";
    cin >> this->sodetaikhoaluan;
};

void GiangVien::Xuat() const
{
    NhanVien::Xuat();
    cout << " | So tiet day: " << this->sotietday
         << " | So de tai khoa luan " << this->sodetaikhoaluan;
};

bool GiangVien::XetLaoDongTienTien() const
{
    if (this->sotietday >= 300 && this->sodetaikhoaluan >= 5)
        return true;
    return false;
};