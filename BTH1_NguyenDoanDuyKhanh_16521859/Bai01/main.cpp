#include <iostream>
#include "Phanso.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    PhanSo a, b;
    PhanSo cong, tru, nhan, chia;
    a.Nhap();
    a.Xuat();
    a.XuatThapPhan();
    b.Nhap();
    b.Xuat();
    b.XuatThapPhan();
    cong = a.Cong(b);
    tru = a.Tru(b);
    nhan = a.Nhan(b);
    chia = a.Chia(b);
    cout << "\nCong: ";
    cong.Xuat();
    cout << "\nTru: ";
    tru.Xuat();
    cout << "\nNhan: ";
    nhan.Xuat();
    cout << "\nChia: ";
    chia.Xuat();
    system("pause");
    return 0;
}