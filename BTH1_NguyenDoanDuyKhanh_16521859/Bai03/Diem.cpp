#include <iostream>
#include "Diem.h"
#include "math.h"
using namespace std;

Diem::Diem()
{
    this->x = 0;
    this->y = 0;
}

Diem::Diem(float x, float y)
{
    this->x = x;
    this->y = y;
}

Diem::Diem(const Diem &diem)
{
    this->x = diem.x;
    this->y = diem.y;
}

Diem::~Diem() {}

void Diem::Nhap()
{
    cout << "\nToa do X: ";
    cin >> this->x;
    cout << "\nToa do Y: ";
    cin >> this->y;
}

void Diem::Xuat()
{
    cout << "(" << this->x << "," << this->y << ")";
}

float Diem::KhoangCach(Diem &diem) const
{
    float kq;
    kq = sqrt(float(this->x - diem.x) * (this->x - diem.x) + (this->y - diem.y) * (this->y - diem.y));
    return kq;
}