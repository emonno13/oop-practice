#pragma once

#include "NghienCuuVien.cpp"
class NhanVienVanPhong : public NhanVien
{
private:
    int solopboiduong, sogiolaodong;

public:
    NhanVienVanPhong();
    NhanVienVanPhong(string, string, string, int, int);
    NhanVienVanPhong(const NhanVienVanPhong &);
    ~NhanVienVanPhong();

    void Nhap();
    void Xuat() const;
    bool XetLaoDongTienTien() const;
};
