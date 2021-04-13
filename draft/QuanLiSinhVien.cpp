#include "QuanLiSinhVien.h"
#include <iostream>
using namespace std;

void QuanLiSinhVien::Nhap()
{
    cout << "Nhap so luong thi sinh";
    cin >> n;
    list = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        list[i].Nhap();
    }
}

void QuanLiSinhVien::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        list[i].Xuat();
    }
}