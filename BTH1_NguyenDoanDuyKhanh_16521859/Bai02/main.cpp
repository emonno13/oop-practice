#include <iostream>
#include "SoPhuc.cpp"

int main(int argc, char *argv[])
{
    SoPhuc a, b;
    a.Nhap();
    a.Xuat();
    b.Nhap();
    b.Xuat();
    SoPhuc Cong, Tru, Nhan, Chia;
    Cong = a.Cong(b);
    Tru = a.Tru(b);
    Nhan = a.Nhan(b);
    Chia = a.Chia(b);
    cout << "\nCong: ";
    Cong.Xuat();
    cout << "\nTru: ";
    Tru.Xuat();
    cout << "\nNhan: ";
    Nhan.Xuat();
    cout << "\nChia: ";
    Chia.Xuat();

    system("pause");
    return 0;
}