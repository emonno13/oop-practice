#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <ctime>

using namespace std;

class PhiThuyen
{
protected:
    string sohieu;
    string ten;
    int hesoAlpha;

public:
    PhiThuyen();
    PhiThuyen(string, string, int);
    virtual ~PhiThuyen();

    void setSoHieu(const string &);
    void setTen(const string &);
    void setHeSoAlpha(const int &);

    string getSoHieu() const;
    string getTen() const;
    int getHeSoAlpha() const;

    virtual void Nhap();
    virtual void Xuat() const;
    virtual int NhienLieuTieuThu(const int &) const = 0;
};
