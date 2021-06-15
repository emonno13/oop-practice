#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CanBo
{
private:
    string maso, hoten, ngaysinh;

public:
    CanBo();
    CanBo(string, string, string);
    CanBo(const CanBo &);
    virtual ~CanBo();

    virtual void Nhap();
    virtual void Xuat() const;
    virtual int TinhLuong() const = 0;
};