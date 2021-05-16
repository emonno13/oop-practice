#pragma once
#include "HocSinh.cpp"
#include <vector>

class DanhSachHocSinh
{
private:
    std::vector<HocSinh> list;
    int n;

public:
    DanhSachHocSinh();
    ~DanhSachHocSinh();
    void Nhap();
    void Xuat();
    void XuatHocSinhDiemTBHon8();
    void Xoa();
    void NhapTuFile();
    bool kiemTraTenTrung(const string &);
};
