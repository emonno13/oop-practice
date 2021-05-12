#include <iostream>
#include <string>
using namespace std;

class HocSinh
{
private:
    string hoten;
    string maso;
    string sdt;
    float diemTB;

public:
    HocSinh();
    HocSinh(string, string, string, float);
    HocSinh(const HocSinh &);
    ~HocSinh();

    friend istream &operator>>(istream &is, HocSinh &hs);
    friend ostream &operator<<(ostream &os, HocSinh hs);
};
