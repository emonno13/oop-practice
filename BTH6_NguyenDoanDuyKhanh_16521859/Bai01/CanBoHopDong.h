#pragma once

#include "CanBoBienChe.cpp"

class CanBoHopDong : public CanBo
{
private:
    int tiencong, songaycong, hesovuotgio;

public:
    CanBoHopDong();
    CanBoHopDong(string, string, string, int, int, int);
    CanBoHopDong(const CanBoHopDong &);
    ~CanBoHopDong();

    void Nhap();
    void Xuat() const;
    int TinhLuong() const;
};