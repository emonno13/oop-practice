#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NhanSu
{
protected:
    string hoten, ngaysinh, maso;

public:
    NhanSu();
    NhanSu(string, string, string);
    NhanSu(const NhanSu &);
    virtual ~NhanSu();

    virtual void Nhap();
    virtual void Xuat() const;
    virtual float TinhLuong() const = 0;

    string trim(const string &);
};