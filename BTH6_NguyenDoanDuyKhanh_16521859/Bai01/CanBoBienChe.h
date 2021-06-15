#pragma once

#include "CanBo.cpp"

class CanBoBienChe : public CanBo
{
private:
    int luongcoban, hesoluong, hesophucap;

public:
    CanBoBienChe();
    CanBoBienChe(string, string, string, int, int, int);
    CanBoBienChe(const CanBoBienChe &);
    ~CanBoBienChe();

    void Nhap();
    void Xuat() const;
    int TinhLuong() const;
};