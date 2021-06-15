#include "TruongDaiHoc.h"

TruongDaiHoc::TruongDaiHoc(){};

TruongDaiHoc::~TruongDaiHoc(){};

void TruongDaiHoc::Nhap(const int &loai)
{
    NhanSu *x;

    if (loai == 1)
    {
        x = new GiangVien;
        x->Nhap();
        list.push_back(x);
    }
    else if (loai == 2)
    {
        x = new TroGiang;
        x->Nhap();
        list.push_back(x);
    }
    else if (loai == 3)
    {
        x = new NghienCuuVien;
        x->Nhap();
        list.push_back(x);
    }
    else if (loai == 4)
    {
        x = new ChuyenVien;
        x->Nhap();
        list.push_back(x);
    }
    else
    {
        cout << "\nKhong tim thay loai nhan su can nhap !";
    }
};

void TruongDaiHoc::Xuat() const
{
    cout << "\n\tDanh sach nhan su: ";
    for (int i = 0; i < this->list.size(); i++)
    {
        this->list[i]->Xuat();
    }
};

float TruongDaiHoc::TinhTongLuongNhanSu() const
{

    float luong = 0;
    cout << "\n\tTong luong nhan su: ";

    for (int i = 0; i < this->list.size(); i++)
    {
        luong = luong + this->list[i]->TinhLuong();
    }

    return luong;
};
