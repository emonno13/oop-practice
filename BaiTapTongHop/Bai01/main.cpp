#include "DanhSachMonHoc.cpp"

int main(int argc, char const *argv[])
{
    DanhSachMonHoc ds;

    // ds.Nhap();
    // ds.Xuat();

    cin >> ds;
    cout << &ds;

    ds.MonHocCoDiemTongKetCaoNhat();
    cout << "\nDiem Trung Binh Hoc Ki: " << ds.DTBHK();

    return 0;
}
