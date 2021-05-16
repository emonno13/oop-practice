#pragma once
#include <iostream>
#include <string>
using namespace std;

class HocSinh
{
private:
    string hoten;
    string maso;
    string sdt;
    float diemTB;

public:
    HocSinh();
    HocSinh(string, string, string, float);
    HocSinh(const HocSinh &);
    ~HocSinh();

    void setHoTen(const string &);
    void setMaSo(const string &);
    void setSDT(const string &);
    void setDiemTB(const float &);
    string getHoTen();
    string getMaSo();
    string getSDT();
    float getDiemTB();
    friend istream &operator>>(istream &is, HocSinh &hs);
    friend ostream &operator<<(ostream &os, HocSinh hs);
};
