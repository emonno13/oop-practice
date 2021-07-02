#pragma once

#include "NhanVienVanPhong.cpp"

class QLNV
{
private:
    vector<NhanVien *> list;
    int sonv;

public:
    QLNV();
    ~QLNV();

    void Nhap(const int &);
    void Xuat() const;

    friend istream &operator>>(istream &is, QLNV &);
    friend ostream &operator<<(ostream &os, QLNV);
};