#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MonHoc
{
protected:
    string maso;
    string tenmonhoc;
    int heso;
    float diemheso1;
    float diemheso2;

public:
    MonHoc();
    MonHoc(string, string, int, float, float);
    virtual ~MonHoc();

    void setMaSo(const string &);
    void setTenMonHoc(const string &);
    void setHeSo(const int &);
    void setDiemHeSo1(const float &);
    void setDiemHeSo2(const float &);

    string getMaSo() const;
    string getTenMonHoc() const;
    int getHeSo() const;
    float getDiemHeSo1() const;
    float getDiemHeSo2() const;

    virtual void Nhap();
    virtual void Xuat() const;

    friend istream &operator>>(istream &is, MonHoc &);
    friend ostream &operator<<(ostream &os, MonHoc *);

    virtual float DTKMH() const = 0;
};
