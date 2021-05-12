#include "PhanSo.h"
#pragma once
#include "PhanSo.h"

class DSPhanSo
{
private:
    PhanSo *list;
    int n;

public:
    DSPhanSo();
    ~DSPhanSo();
    void Nhap();
    void Xuat();
    PhanSo Tong();
    PhanSo LonNhat();
    PhanSo NhoNhat();
    void SapXepTangDan();
    void SapXepGiamDan();
};
