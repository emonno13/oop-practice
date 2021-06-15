#pragma once

#include "TroGiang.cpp"

class NghienCuuVien : public NhanSu
{
private:
    vector<string> duan;
    int sonamkn;

public:
    NghienCuuVien();
    NghienCuuVien(string, string, string, vector<string>, int);
    NghienCuuVien(const NghienCuuVien &);
    ~NghienCuuVien();
    void Nhap();
    void Xuat() const;
    int SoDuAnD() const;
    float TinhLuong() const;
};
