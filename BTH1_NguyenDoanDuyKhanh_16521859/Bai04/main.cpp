#include <iostream>
#include "ThiSinh.cpp"
#include "DanhSachThiSinh.cpp"

int main(int argc, char *argv[])
{
    DanhSachThiSinh arr;
    arr.Nhap();
    arr.Xuat();
    cout << "\nThi Sinh co tong diem > 15: ";
    arr.XuatThiSinhTongDiemTren15();
    system("pause");
    return 0;
}