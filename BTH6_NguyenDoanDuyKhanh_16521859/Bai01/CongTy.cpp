#include "CongTy.h"

CongTy::CongTy(){};

CongTy::~CongTy(){};

void CongTy::Nhap(const int &loai)
{
    CanBo *x;

    if (loai == 1)
    {
        x = new CanBoBienChe;
        x->Nhap();
        list.push_back(x);
    }
    else if (loai == 2)
    {
        x = new CanBoHopDong;
        x->Nhap();
        list.push_back(x);
    }
    else
    {
        cout << "\nKhong tim thay loai can bo can nhap";
    };
};

void CongTy::Xuat()
{
    cout << "\nDanh sach cong ty: \n";
    for (int i = 0; i < this->list.size(); i++)
    {
        this->list[i]->Xuat();
    };
};

int CongTy::TongTienLuongPhaiTra() const
{
    int sum = 0;
    for (int i = 0; i < this->list.size(); i++)
    {
        sum = sum + this->list[i]->TinhLuong();
    };
    return sum;
};