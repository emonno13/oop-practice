#pragma once

#include "NhanSu.cpp"

class GiangVien : public NhanSu
{
private:
    string hocham;
    string hocvi;
    int sonamday;
    // int somonday;
    vector<string> monhoc;

public:
    GiangVien();
    GiangVien(string, string, string, string, string, int, vector<string>);
    GiangVien(const GiangVien &x);
    ~GiangVien();
    void Nhap();
    void Xuat() const;
    float TinhLuong() const;
};
