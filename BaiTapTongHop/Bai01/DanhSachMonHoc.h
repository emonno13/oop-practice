#pragma once

#include "MonThi.cpp"

class DanhSachMonHoc
{
private:
    vector<MonHoc *> list;
    int M;
    int N;

public:
    DanhSachMonHoc();
    ~DanhSachMonHoc();

    void Nhap();
    void Xuat() const;

    void MonHocCoDiemTongKetCaoNhat() const;
    float DTBHK() const;

    friend istream &operator>>(istream &is, DanhSachMonHoc &);
    friend ostream &operator<<(ostream &os, DanhSachMonHoc *);
};