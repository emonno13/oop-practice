#include "MangMotChieu.cpp"

int main(int argc, char const *argv[])
{
    MangMotChieu arr;
    arr.Nhap();
    arr.Xuat();
    arr.SoLanXuatHien(2);
    cout << arr.KiemTraTangDan();
    arr.PhanLeNhoNhat();
    arr.SoLonNhat();
    system("pause");
    return 0;
}
