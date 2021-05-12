#include <iostream>
#include "PhanSo.cpp"
#include "DSPhanSo.cpp"

int main()
{
    DSPhanSo arr;
    arr.Nhap();
    arr.Xuat();
    PhanSo tong, lonnhat, nhonhat;
    cout << "Tong: ";
    tong = arr.Tong();
    tong.Xuat();
    cout << "Phan so lon nhat: ";
    lonnhat = arr.LonNhat();
    lonnhat.Xuat();
    cout << "Phan so nho nhat: ";
    nhonhat = arr.NhoNhat();
    nhonhat.Xuat();
    cout << "Sap xep tang dan: \n";
    arr.SapXepTangDan();
    arr.Xuat();
    cout << "Sap xep giam dan: \n";
    arr.SapXepGiamDan();
    arr.Xuat();
    system("pause");
    return 0;
}