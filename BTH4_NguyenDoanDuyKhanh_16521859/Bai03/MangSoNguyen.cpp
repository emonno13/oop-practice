#include "MangSoNguyen.h"
#include <iostream>
using namespace std;

MangSoNguyen::MangSoNguyen()
{
    this->kichthuoc = 0;
    this->dulieu = new int[this->kichthuoc];
}

MangSoNguyen::MangSoNguyen(const MangSoNguyen &x)
{
    this->kichthuoc = x.kichthuoc;
    this->dulieu = x.dulieu;
}

MangSoNguyen::~MangSoNguyen()
{
    delete[] dulieu;
}

istream &operator>>(istream &is, MangSoNguyen &x)
{
    cout << "\n------Nhap mang ----\n";
    cout << "\nNhap kich thuoc: ";
    is >> x.kichthuoc;
    cout << "\nNhap phan tu: ";
    for (int i = 0; i < x.kichthuoc; i++)
    {
        cout << "\n\tPhan tu thu " << i + 1 << ": ";
        is >> x.dulieu[i];
    }
    return is;
};
ostream &operator<<(ostream &os, MangSoNguyen x)
{
    cout << "\n Mang so nguyen : [ ";
    for (int i = 0; i < x.kichthuoc; i++)
    {
        os << x.dulieu[i] << "  ";
    }
    cout << " ]\n";
};

MangSoNguyen &MangSoNguyen::operator=(const MangSoNguyen &x)
{
    if (this != &x)
    {
        this->kichthuoc = x.kichthuoc;
        for (int i = 0; i < x.kichthuoc; i++)
        {
            this->dulieu[i] = x.dulieu[i];
        }
    }
    return *this;
}

MangSoNguyen MangSoNguyen::operator+(const MangSoNguyen &x)
{
    MangSoNguyen temp;
    if (this->kichthuoc > x.kichthuoc)
    {
        temp.kichthuoc = this->kichthuoc;
    }
    else
    {
        temp.kichthuoc = x.kichthuoc;
    }

    for (int i = 0; i < temp.kichthuoc; i++)
    {
        if (this->kichthuoc < i + 1)
        {
            temp.dulieu[i] = 0 + x.dulieu[i];
        }
        else if (x.kichthuoc < i + 1)
        {
            temp.dulieu[i] = this->dulieu[i] + 0;
        }
        else
        {
            temp.dulieu[i] = this->dulieu[i] + x.dulieu[i];
        }
        // cout << i << "||" << this->dulieu[i] << "--" << x.dulieu[i] << endl;
    }
    return temp;
}

// ++a
MangSoNguyen &MangSoNguyen::operator++()
{
    for (int i = 0; i < this->kichthuoc; i++)
    {
        this->dulieu[i] = this->dulieu[i] + 1;
    }
    return *this;
}

// a++
MangSoNguyen MangSoNguyen::operator++(int x)
{
    MangSoNguyen result(*this);
    for (int i = 0; i < this->kichthuoc; i++)
    {
        this->dulieu[i] = this->dulieu[i] + 1;
    }
    return result;
}
