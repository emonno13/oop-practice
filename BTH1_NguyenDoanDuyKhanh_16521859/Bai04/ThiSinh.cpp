#include <iostream>
#include "ThiSinh.h"
using namespace std;

ThiSinh::ThiSinh()
{
    this->id = 11111;
    this->ten = "xxxxx";
    this->ngay = 1;
    this->thang = 1;
    this->nam = 1;
    this->diemToan = 0;
    this->diemVan = 0;
    this->diemAnh = 0;
}

ThiSinh::ThiSinh(int id, string ten, int ngay, int thang, int nam, float diemToan, float diemVan, float diemAnh)
{
    this->id = id;
    this->ten = ten;
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
    this->diemToan = diemToan;
    this->diemVan = diemVan;
    this->diemAnh = diemAnh;
}
ThiSinh::ThiSinh(const ThiSinh &x)
{
    this->id = x.id;
    this->ten = x.ten;
    this->ngay = x.ngay;
    this->thang = x.thang;
    this->nam = x.nam;
    this->diemToan = x.diemToan;
    this->diemVan = x.diemVan;
    this->diemAnh = x.diemAnh;
}
ThiSinh::~ThiSinh()
{
}

float ThiSinh::DiemTB()
{
    return (float)(this->diemToan + this->diemVan + this->diemAnh) / 3;
}

float ThiSinh::TongDiem()
{
    return (float)(this->diemToan + this->diemVan + this->diemAnh);
}

void ThiSinh::Nhap()
{
    cout << "\n\tNhap id: ";
    cin >> this->id;
    cin.ignore();
    cout << "\n\tNhap ten: ";
    getline(cin, this->ten);
    bool laNgayHopLe = false;
    while (!laNgayHopLe)
    {
        cout << "\n\tNhap ngay sinh: ";
        cin >> this->ngay;
        cout << "\n\tNhap thang sinh: ";
        cin >> this->thang;
        cout << "\n\tNhap nam sinh: ";
        cin >> this->nam;
        laNgayHopLe = LaNgayDuongTonTai();
        if (!laNgayHopLe)
        {
            cout << "\n\t Ngay sinh khong hop le";
        }
    }

    cout << "\n\tNhap diem toan: ";
    cin >> this->diemToan;
    cout << "\n\tNhap diem van: ";
    cin >> this->diemAnh;
    cout << "\n\tNhap diem anh van: ";
    cin >> this->diemVan;
}

void ThiSinh::Xuat()
{
    cout << "\n\t ID: " << this->id << "| Name: " << this->ten
         << "| Ngay sinh: " << this->ngay << "/" << this->thang << "/" << this->nam << "| Diem Toan: " << this->diemToan
         << "| Diem Van: " << this->diemAnh << "| Diem Anh: " << this->diemVan << "| Diem TB: " << DiemTB() << endl;
}

bool ThiSinh::LaNamDuongNhuan()
{
    if ((this->nam % 4 == 0 && this->nam % 100 != 0) || this->nam % 400 == 0)
    {
        return true;
    }
    return false;
}

int ThiSinh::LaNgayDuongTonTai()
{
    const int songaytrongthang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (this->ngay > 0 && this->thang > 0 && this->nam > 0 && this->thang < 13 && (this->ngay <= songaytrongthang[this->thang - 1] + (this->thang == 2) * LaNamDuongNhuan()));
}