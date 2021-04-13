#include <iostream>
#include "Diem.cpp"

int main(int argc, char *argv[])
{
    Diem a, b;
    cout << "\nNhap diem thu nhat: ";
    a.Nhap();
    cout << "\nNhap diem thu hai: ";
    b.Nhap();
    cout << "\nKhoang cach: " << a.KhoangCach(b) << endl;

    system("pause");
    return 0;
}