#include "MangMotChieu.h"
#include <iostream>
using namespace std;

MangMotChieu::MangMotChieu()
{
    this->list = new int[10];
}

MangMotChieu::~MangMotChieu()
{
}

void MangMotChieu::Nhap()
{
    do
    {
        cout << "Nhap so luong phan tu: ";
        cin >> n;
    } while (n == 0);

    list = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nPhan tu thu " << i + 1 << endl;
        cin >> list[i];
    }
}

void MangMotChieu::Xuat()
{
    cout << "\nMang mot chieu: "
         << "\n[";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << list[i] << ", ";
        else
            cout << list[i] << "]" << endl;
    }
}

void MangMotChieu::SoLanXuatHien(const int &x) const
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (list[i] == x)
            count++;
    }
    cout << "\n\tSo lan xuat hien cua " << x << " : " << count << endl;
}

string MangMotChieu::KiemTraTangDan()
{
    for (int i = 0; i < n - 1; i++)
    {
        if (list[i] > list[i + 1])
            return "\n\tHam khong tang dan\n";
    }
    return "\n\tHam tang dan\n";
}

void MangMotChieu::PhanLeNhoNhat()
{
    int temp = list[0];
    for (int i = 1; i < n; i++)
    {
        if (temp > list[i] && list[i] % 2 != 0)
            temp = list[i];
    }
    if (temp % 2 == 0)
        cout << "\n\tTrong mang khong co phan le" << endl;
    else
        cout << "\n\tPhan le nho nhat trong mang la : " << temp << endl;
}

void MangMotChieu::SoLonNhat()
{
    int max = list[0];
    for (int i = 1; i < n; i++)
    {
        if (max < list[i])
            max = list[i];
    }
    cout << "\n\tSo nguyen lon nhat: " << max << endl;
}