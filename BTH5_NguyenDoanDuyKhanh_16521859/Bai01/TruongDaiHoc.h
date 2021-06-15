#pragma once

#include "ChuyenVien.cpp"

class TruongDaiHoc
{
private:
    vector<NhanSu *> list;

public:
    TruongDaiHoc();
    ~TruongDaiHoc();
    void Nhap(const int &);
    void Xuat() const;
    float TinhTongLuongNhanSu() const;
};