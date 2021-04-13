#include <string>
#include <iostream>
using namespace std;
class NhanVien
{
private:
    string HoTen;
    int SoNgayLamViec;
    string MaSo, ChucDanh;
    float HeSoLuong;

public:
    NhanVien(string HoTen, int SoNgayLamViec, string MaSo, string ChucDanh, float HeSoLuong);
    NhanVien(string HoTen, int SoNgayLamViec);
    NhanVien(const NhanVien &a); // tạo lập sao chép
    NhanVien();
    ~NhanVien();

    void Nhap();
    void Xuat();

    string GetHoTen();
    int GetSoNgayLamViec();
    string GetMaSo();
    string GetChucDanh();
    float GetHeSoLuong();

    void SetHoTen(string HoTen);
    void SetSoNgayLamViec(int SoNgayLamViec);
    void SetMaSo(string MaSo);
    void SetChucDanh(string ChucDanh);
    void SetHeSoLuong(float HeSoLuong);
};
