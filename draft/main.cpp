#include <iostream>
#include "Phanso.cpp"
#include "SoPhuc.cpp"
#include "Diem.cpp"
#include "SinhVien.cpp"
#include "QuanLiSinhVien.cpp"

int main(int argc, char *argv[])
{
    // PhanSo a, b;
    // PhanSo cong, tru, nhan, chia;
    // a.Nhap();
    // a.Xuat();
    // b.Nhap();
    // b.Xuat();
    // cong = a.Cong(b);
    // tru = a.Tru(b);
    // nhan = a.Nhan(b);
    // chia = a.Chia(b);
    // cong.Xuat();
    // tru.Xuat();
    // nhan.Xuat();
    // chia.Xuat();

    // SoPhuc a, b;
    // a.Nhap();
    // a.Xuat();
    // b.Nhap();
    // b.Xuat();
    // SoPhuc Cong, Tru, Nhan, Chia;
    // Cong = a.Cong(b);
    // Tru = a.Tru(b);
    // Nhan = a.Nhan(b);
    // Chia = a.Chia(b);
    // Cong.Xuat();
    // Tru.Xuat();
    // Nhan.Xuat();
    // Chia.Xuat();

    // Diem a, b;
    // a.Nhap();
    // b.Nhap();
    // cout << "\nKhoang cach: " << a.KhoangCach(b) << endl;

    // SinhVien a;
    // a.Nhap();
    // a.Xuat();
    QuanLiSinhVien arr;
    arr.Nhap();
    arr.Xuat();
    system("pause");
    return 0;
}