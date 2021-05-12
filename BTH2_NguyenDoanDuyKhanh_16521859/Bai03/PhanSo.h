#pragma once

class PhanSo
{
private:
    int TuSo, MauSo;

public:
    PhanSo();
    PhanSo(int, int);
    PhanSo(const PhanSo &);
    ~PhanSo();

    void Nhap();
    void Xuat();
    void XuatThapPhan();

    int UCLN(int, int);
    void RutGon();
    int SoSanh(const PhanSo &) const;

    PhanSo Cong(const PhanSo &) const;
    PhanSo Tru(const PhanSo &) const;
    PhanSo Nhan(const PhanSo &) const;
    PhanSo Chia(const PhanSo &) const;
};
