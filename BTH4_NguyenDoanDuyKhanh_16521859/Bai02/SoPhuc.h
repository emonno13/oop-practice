#pragma once

#include <iostream>
#include <math.h>

using namespace std;

class SoPhuc
{
private:
    double PhanThuc;
    double PhanAo;

public:
    SoPhuc();
    SoPhuc(double, double);
    SoPhuc(const SoPhuc &);
    ~SoPhuc();

    friend istream &operator>>(istream &is, SoPhuc &);
    friend ostream &operator<<(ostream &os, SoPhuc);

    SoPhuc operator+(SoPhuc &) const;
    SoPhuc operator-(SoPhuc &) const;
    SoPhuc operator*(SoPhuc &) const;
    SoPhuc operator/(SoPhuc &) const;

    bool operator==(SoPhuc &) const;
    bool operator!=(SoPhuc &) const;
};
