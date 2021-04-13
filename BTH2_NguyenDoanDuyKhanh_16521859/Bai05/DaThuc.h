#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class DaThuc
{
private:
    int n;  //Bac da thuc
    int *a; //He so cua da thuc tu a0->an

public:
    DaThuc();
    void Nhap();
    void Xuat();
    int TinhGiaTri(int x);
    DaThuc Cong(const DaThuc &a) const;
    DaThuc Tru(const DaThuc &a) const;
    ~DaThuc();
};
