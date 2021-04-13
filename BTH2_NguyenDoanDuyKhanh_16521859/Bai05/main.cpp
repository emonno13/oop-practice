#include "DaThuc.cpp"

int main(int argc, char *argv[])
{

    // DaThuc a;
    // a.Nhap();
    // a.Xuat();
    // cout << "Gia tri da thuc: " << a.TinhGiaTri(2) << endl;
    cout << 1 - 2;

    DaThuc x, y;
    x.Nhap();
    x.Xuat();
    y.Nhap();
    y.Xuat();
    DaThuc Cong, Tru;
    Cong = x.Cong(y);
    Tru = x.Tru(y);
    cout << "Phep cong: \n";
    Cong.Xuat();
    cout << "Phep tru: \n";
    Tru.Xuat();
    system("pause");
    return 1;
}