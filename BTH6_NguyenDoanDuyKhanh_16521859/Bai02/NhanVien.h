#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NhanVien
{
private:
    string maso, hoten, ngaysinh;

public:
    NhanVien();
    NhanVien(string, string, string);
    NhanVien(const NhanVien &);
    virtual ~NhanVien();

    virtual void Nhap();
    virtual void Xuat() const;
    virtual bool XetLaoDongTienTien() const = 0;
};