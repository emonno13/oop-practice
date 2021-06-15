#pragma once

#include "NhanSu.cpp"

class GiangVien : public NhanSu
{
private:
    string hocham;
    string hocvi;
    int sonamday;
    int somonday;

public:
    GiangVien();
    GiangVien(string, string, string, string, string, int, int);
    GiangVien(const GiangVien &x);
    ~GiangVien();
    void Nhap();
    void Xuat() const;
    float TinhLuong() const;
};
