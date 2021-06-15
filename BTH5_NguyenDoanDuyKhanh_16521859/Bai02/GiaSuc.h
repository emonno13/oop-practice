#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <time.h>

using namespace std;

class GiaSuc
{
private:
    int soluongcon;
    float solitsua;
    string tiengkeu;

public:
    GiaSuc();
    GiaSuc(int, float, string);
    GiaSuc(const GiaSuc &);
    virtual ~GiaSuc();

    virtual void Xuat() const;
    virtual void Keu() const = 0;

    // Setter
    void setSoLuongCon(const int &);
    void setSoLitSua(const float &);
    void setTiengKeu(const string &);

    // Getter
    int getSoLuongCon() const;
    float getSoLitSua() const;
    string getTiengKeu() const;
};