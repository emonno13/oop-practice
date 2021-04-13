#include <iostream>
#include "SinhVien.h"
using namespace std;

SinhVien::SinhVien()
{
    this->id = 11111;
    this->name = "xxxxx";
    this->d = 1;
    this->m = 1;
    this->y = 1;
    this->math = 0;
    this->eng = 0;
    this->lite = 0;
}

SinhVien::SinhVien(int id, string name, int d, int m, int y, float math, float eng, float lite)
{
    this->id = id;
    this->name = name;
    this->d = d;
    this->m = m;
    this->y = y;
    this->math = math;
    this->eng = eng;
    this->lite = lite;
}

void SinhVien::Nhap()
{
    cout << "\nNhap id: ";
    cin >> this->id;
    cin.ignore();
    cout << "\nNhap ten: ";
    getline(cin, this->name);
    cout << "\nNhap ngay sinh: ";
    cin >> this->d;
    cout << "\nNhap thang sinh: ";
    cin >> this->m;
    cout << "\nNhap nam sinh: ";
    cin >> this->y;
    cout << "\nNhap diem toan: ";
    cin >> this->math;
    cout << "\nNhap diem van: ";
    cin >> this->lite;
    cout << "\nNhap diem anh van: ";
    cin >> this->eng;
}

void SinhVien::Xuat()
{
    cout << "\n\t ID: " << this->id << "| Name: " << this->name
         << "| Ngay sinh: " << this->d << "/" << this->m << "/" << this->y << "| Diem Toan: " << this->math
         << "| Diem Van: " << this->lite << "| Diem Anh: " << this->eng;
}

SinhVien::~SinhVien()
{
}