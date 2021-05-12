#pragma once
#include <string>
using namespace std;

class MangMotChieu
{
private:
    int n;
    int *list;

public:
    MangMotChieu();
    void Nhap();
    void Xuat();
    void SoLanXuatHien(const int &x) const;
    string KiemTraTangDan();
    void PhanLeNhoNhat();
    void SoLonNhat();
    ~MangMotChieu();
};
