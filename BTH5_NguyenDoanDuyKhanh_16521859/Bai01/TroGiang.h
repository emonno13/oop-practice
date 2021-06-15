#pragma once

#include "GiangVien.cpp"

class TroGiang : public NhanSu
{
private:
    int somontrogiang;

public:
    TroGiang();
    TroGiang(string, string, string, int);
    TroGiang(const TroGiang &);
    ~TroGiang();

    void Nhap();
    void Xuat() const;
    float TinhLuong() const;
};