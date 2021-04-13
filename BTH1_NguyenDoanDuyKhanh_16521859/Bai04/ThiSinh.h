#pragma once
#include <string>
using namespace std;

class ThiSinh
{
private:
    int id;
    string ten;
    int ngay;
    int thang;
    int nam;
    float diemToan;
    float diemVan;
    float diemAnh;

public:
    ThiSinh();
    ThiSinh(int, string, int, int, int, float, float, float);
    ThiSinh(const ThiSinh &);
    ~ThiSinh();

    bool LaNamDuongNhuan();
    int LaNgayDuongTonTai();

    void Nhap();
    void Xuat();
    float DiemTB();
    float TongDiem();
};
