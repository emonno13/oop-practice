#include "DSPhanSo.h"

DSPhanSo::DSPhanSo()
{
}

DSPhanSo::~DSPhanSo()
{
}
void DSPhanSo::Nhap()
{
    cout << "Nhap so luong phan so: ";
    cin >> n;
    list = new PhanSo[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nPhan so thu " << i + 1 << endl;
        list[i].Nhap();
    }
}
void DSPhanSo::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        list[i].Xuat();
    }
}