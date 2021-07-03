#include "QLPT.cpp"

int main(int argc, char const *argv[])
{
    QLPT a;

    // a.Nhap();
    // a.Xuat();
    cin >> a;
    cout << &a;

    a.XuatTongNhienLieuTheoLoai(3600);
    a.XuatTongNhienLieu(3600);

    return 0;
}
