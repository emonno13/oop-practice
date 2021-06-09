#pragma once // !!!!!!!!!!
#include <iostream>
using namespace std;

class PhanSo
{
private:
    int *TuSo;
    int *MauSo;

public:
    PhanSo();
    PhanSo(const int &, const int &);
    PhanSo(const PhanSo &);
    ~PhanSo();

    int getTu() const;
    void setTu(const int &);
    int getMau() const;
    void setMau(const int &);

    void Nhap();
    void Xuat();
    void XuatThapPhan();

    int UCLN(int, int);
    PhanSo *RutGon();

    friend istream &operator>>(istream &is, PhanSo &);
    friend ostream &operator<<(ostream &os, PhanSo &);

    PhanSo *Cong(const PhanSo *) const;
    PhanSo *operator+(const PhanSo *) const;
    PhanSo *operator+(const int &);
    friend PhanSo *operator+(const int &, PhanSo &);

    PhanSo *Tru(const PhanSo *) const;
    PhanSo *operator-(const PhanSo *) const;
    PhanSo *operator-(const int &);
    friend PhanSo *operator-(const int &, const PhanSo &);

    PhanSo *Nhan(const PhanSo *) const;
    PhanSo *operator*(const PhanSo *) const;
    PhanSo *operator*(const int &);
    friend PhanSo *operator*(const int &, const PhanSo &);

    PhanSo *Chia(const PhanSo *) const;
    PhanSo *operator/(const PhanSo *) const;
    PhanSo *operator/(const int &);
    friend PhanSo *operator/(const int &, const PhanSo &);

    PhanSo *operator+=(const PhanSo *);
    PhanSo *operator-=(const PhanSo *);
    PhanSo *operator*=(const PhanSo *);
    PhanSo *operator/=(const PhanSo *);

    bool operator==(const PhanSo &) const;
    bool operator==(const int &);
    friend bool operator==(const int &, const PhanSo &);

    bool operator<(const PhanSo &) const;
    bool operator<(const int &);
    friend bool operator<(const int &, const PhanSo &);

    bool operator<=(const PhanSo &) const;
    bool operator<=(const int &);
    friend bool operator<=(const int &, const PhanSo &);

    bool operator>(const PhanSo &) const;
    bool operator>(const int &);
    friend bool operator>(const int &, const PhanSo &);

    bool operator>=(const PhanSo &) const;
    bool operator>=(const int &);
    friend bool operator>=(const int &, const PhanSo &);

    bool operator!=(const PhanSo &) const;
    bool operator!=(const int &);
    friend bool operator!=(const int &, const PhanSo &);

    // operator float();
    // PhanSo(int t);

    PhanSo *operator++();
    PhanSo *operator++(int);
    PhanSo *operator--();
    PhanSo *operator--(int);

    // PhanSo *operator-() const;

    PhanSo &operator=(const PhanSo &);
};
