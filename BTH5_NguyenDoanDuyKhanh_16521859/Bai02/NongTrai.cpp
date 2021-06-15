#include "NongTrai.h"

NongTrai::NongTrai(){};

NongTrai::~NongTrai()
{
    for (size_t i = 0; i < this->list.size(); i++)
    {
        delete this->list[i];
    };
};

void NongTrai::Nhap(const int &loai)
{
    GiaSuc *x;

    if (loai == 1)
    {
        x = new Bo;
        list.push_back(x);
        cout << "\nNhap thanh cong !!";
    }
    else if (loai == 2)
    {
        x = new Cuu;
        list.push_back(x);
        cout << "\nNhap thanh cong !!";
    }
    else if (loai == 3)
    {
        x = new De;
        list.push_back(x);
        cout << "\nNhap thanh cong !!";
    }
    else
    {
        cout << "\nKhong tim thay gia suc can nhap !";
    };
};

void NongTrai::Xuat() const
{
    for (int i = 0; i < this->list.size(); i++)
    {
        list[i]->Xuat();
    };
};

void NongTrai::KeuKhiDoi() const
{
    cout << "\nNhung tieng keu nghe duoc trong nong trai khi doi: \n";
    for (int i = 0; i < this->list.size(); i++)
    {
        cout << "\n\t";
        list[i]->Keu();
    };
};