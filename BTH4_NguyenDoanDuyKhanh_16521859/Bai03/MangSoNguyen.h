#pragma once
#include <string>
using namespace std;

class MangSoNguyen
{
private:
    int *dulieu;
    int kichthuoc;

public:
    MangSoNguyen();
    MangSoNguyen(const MangSoNguyen &);
    ~MangSoNguyen();

    void Nhap();
    void Xuat();

    friend istream &operator>>(istream &is, MangSoNguyen &);
    friend ostream &operator<<(ostream &os, MangSoNguyen);

    MangSoNguyen &operator=(const MangSoNguyen &);
    MangSoNguyen operator+(const MangSoNguyen &);

    MangSoNguyen &operator++();   // ++a
    MangSoNguyen operator++(int); // a++
};
