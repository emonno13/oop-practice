#pragma once

#include "Rocketo.cpp"

class Shieldato : public PhiThuyen
{
private:
    int R;

public:
    Shieldato();
    Shieldato(string, string);
    ~Shieldato();

    void setR(const int &);
    int getR() const;

    void Nhap();
    void Xuat() const;
    int NhienLieuTieuThu(const int &) const;
};