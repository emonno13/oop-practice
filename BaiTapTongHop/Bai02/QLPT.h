#pragma once

#include "Shieldato.cpp"

class QLPT
{
private:
    vector<PhiThuyen *> list;

public:
    QLPT();
    ~QLPT();

    void Nhap();
    void Xuat() const;

    void XuatTongNhienLieuTheoLoai(const int &) const; // by kind
    void XuatTongNhienLieu(const int &) const;         // by all

    friend istream &operator>>(istream &is, QLPT &);
    friend ostream &operator<<(ostream &os, QLPT *);
};