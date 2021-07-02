#pragma once

#include "MonHoc.cpp"

class MonKiemTra : public MonHoc
{
private:
    float diemkiemtrahetmon; // he so 3

public:
    MonKiemTra();
    MonKiemTra(string, string, int, float, float, float);
    ~MonKiemTra();

    void setDiemKiemTraHetMon(const float &);
    float getDiemKiemTraHetMon() const;

    void Nhap();
    void Xuat() const;
    float DTKMH() const;

    friend istream &operator>>(istream &is, MonKiemTra &);
    friend ostream &operator<<(ostream &os, MonKiemTra *);
};