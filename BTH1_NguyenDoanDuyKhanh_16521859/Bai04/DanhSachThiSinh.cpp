#include "DanhSachThiSinh.h"
#include <iostream>
using namespace std;

DanhSachThiSinh::DanhSachThiSinh()
{
}

DanhSachThiSinh::~DanhSachThiSinh()
{
}
void DanhSachThiSinh::Nhap()
{
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    list = new ThiSinh[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nThi sinh thu " << i + 1 << endl;
        list[i].Nhap();
    }
}

void DanhSachThiSinh::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        list[i].Xuat();
    }
}

void DanhSachThiSinh::XuatThiSinhTongDiemTren15()
{
    for (int i = 0; i < n; i++)
    {
        if (list[i].TongDiem() > 15)
        {
            list[i].Xuat();
        }
    }
}