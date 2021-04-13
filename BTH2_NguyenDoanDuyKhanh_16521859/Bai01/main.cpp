#include "NhanVien.cpp"

int main()
{
    NhanVien a("An", 500, "ABC", "AAA", 5.2), b("Binh", 700);
    a.Xuat();
    b.Xuat();
    cout << endl;
    NhanVien c = b; // lúc khởi tạo mới gọi sao chép
    c.Xuat();

    system("pause");
    return 0;
}