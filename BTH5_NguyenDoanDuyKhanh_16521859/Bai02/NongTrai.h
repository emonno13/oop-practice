#pragma once

#include "De.cpp"

class NongTrai
{
private:
    vector<GiaSuc *> list;

public:
    NongTrai();
    ~NongTrai();

    void Nhap(const int &);
    void Xuat() const;
    void KeuKhiDoi() const;
};