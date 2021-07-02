#pragma once

#include "MonKiemTra.cpp"

class MonThi : public MonHoc
{
private:
    float diemthihetmon; // he so 3

public:
    MonThi();
    MonThi(string, string, int, float, float, float);
    ~MonThi();

    void setDiemThiHetMon(const float &);
    float getDiemThiHetMon() const;

    void Nhap();
    void Xuat() const;
    float DTKMH() const;
    float DTBKT() const;

    friend istream &operator>>(istream &is, MonThi &);
    friend ostream &operator<<(ostream &os, MonThi *);
};