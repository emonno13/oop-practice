#pragma once
#include <string>
using namespace std;

class SinhVien
{
private:
    int id;
    string name;
    int d;
    int m;
    int y;
    float math;
    float eng;
    float lite;

public:
    SinhVien();
    SinhVien(int, string, int, int, int, float, float, float);
    void Nhap();
    void Xuat();
    ~SinhVien();
};
