#pragma once

#include "CanBoHopDong.cpp"

class CongTy
{
private:
    vector<CanBo *> list;

public:
    CongTy();
    ~CongTy();

    void Nhap(const int &);
    void Xuat();
    int TongTienLuongPhaiTra() const;
};