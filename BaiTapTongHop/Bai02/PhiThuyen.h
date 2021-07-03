#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <ctime>

enum LoaiPhiThuyen
{
    ApolloSpaceShip,
    RocketoSpaceShip,
    ShieldatoSpaceShip
};

using namespace std;

class PhiThuyen
{
protected:
    string sohieu;
    string ten;
    int hesoAlpha;
    int loai;

public:
    PhiThuyen();
    PhiThuyen(string, string);
    virtual ~PhiThuyen();

    void setSoHieu(const string &);
    void setTen(const string &);
    void setHeSoAlpha(const int &);
    void setLoai(const int &);

    string getSoHieu() const;
    string getTen() const;
    int getHeSoAlpha() const;
    int getLoai() const;

    virtual void Nhap();
    virtual void Xuat() const;
    virtual int NhienLieuTieuThu(const int &) const = 0;
};
