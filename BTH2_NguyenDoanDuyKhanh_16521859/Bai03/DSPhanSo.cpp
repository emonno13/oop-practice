#include "DSPhanSo.h"
#include <iostream>
using namespace std;

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
PhanSo DSPhanSo::Tong()
{
    PhanSo kq;
    for (int i = 0; i < n; i++)
    {
        kq = kq.Cong(list[i]);
    }
    return kq;
}

PhanSo DSPhanSo::LonNhat()
{
    PhanSo kq;
    kq = list[0];
    for (int i = 1; i < n; i++)
    {
        int ss = kq.SoSanh(list[i]);
        if (ss == -1)
        {
            kq = list[i];
        };
    }
    return kq;
}

PhanSo DSPhanSo::NhoNhat()
{
    PhanSo kq;
    kq = list[0];
    for (int i = 1; i < n; i++)
    {
        int ss = kq.SoSanh(list[i]);
        if (ss == 1)
        {
            kq = list[i];
        };
    }
    return kq;
}

void DSPhanSo::SapXepTangDan()
{
    PhanSo tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (list[i].SoSanh(list[j]) == 1)
            {
                // Hoan vi 2 so list[i] va list[j]
                tg = list[i];
                list[i] = list[j];
                list[j] = tg;
            }
        }
    }
}

void DSPhanSo::SapXepGiamDan()
{
    PhanSo tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (list[i].SoSanh(list[j]) == -1)
            {
                // Holistn vi 2 so list[i] vlist list[j]
                tg = list[i];
                list[i] = list[j];
                list[j] = tg;
            }
        }
    }
}