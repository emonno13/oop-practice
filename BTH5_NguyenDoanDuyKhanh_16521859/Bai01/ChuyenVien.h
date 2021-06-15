#pragma once

#include "NghienCuuVien.cpp"

class ChuyenVien : public NhanSu
{
private:
    vector<string> duan;
    int sonamkn;

public:
    ChuyenVien();
    ChuyenVien(string, string, string, vector<string>, int);
    ChuyenVien(const ChuyenVien &);
    ~ChuyenVien();
    void Nhap();
    void Xuat() const;
    int SoDuAnT() const;
    float TinhLuong() const;
};