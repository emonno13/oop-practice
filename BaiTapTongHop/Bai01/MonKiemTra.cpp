#include "MonKiemTra.h"

void MonKiemTra::setDiemKiemTraHetMon(const float &diemkiemtrahetmon)
{
    this->diemkiemtrahetmon = diemkiemtrahetmon;
};
float MonKiemTra::getDiemKiemTraHetMon() const
{
    return this->diemkiemtrahetmon;
};

MonKiemTra::MonKiemTra(){};

MonKiemTra::MonKiemTra(string maso, string tenmonhoc, int heso, float diemheso1, float diemheso2, float diemkiemtrahetmon)
    : MonHoc(maso, tenmonhoc, heso, diemheso1, diemheso2)
{
    setDiemKiemTraHetMon(diemkiemtrahetmon);
};

MonKiemTra::~MonKiemTra(){};

void MonKiemTra::Nhap()
{
    MonHoc::Nhap();
    cout << "\nNhap diem kiem tra het mon: ";
    cin >> this->diemkiemtrahetmon;
};

void MonKiemTra::Xuat() const
{
    MonHoc::Xuat();
    cout << " | Diem kiem tra het mon: " << getDiemKiemTraHetMon()
         << " | Diem tong ket mon hoc: " << DTKMH() << endl;
};

float MonKiemTra::DTKMH() const
{
    return (getDiemHeSo1() + getDiemHeSo2() * 2 + getDiemKiemTraHetMon() * 3) / 6;
};

istream &operator>>(istream &is, MonKiemTra &x)
{
    is >> static_cast<MonHoc &>(x);
    fflush(stdin);
    cout << "\nNhap diem kiem tra het mon: ";
    is >> x.diemkiemtrahetmon;
    return is;
};
ostream &operator<<(ostream &os, MonKiemTra *x)
{
    os << static_cast<MonHoc *>(x);
    os << " | Diem kiem tra het mon: " << x->getDiemKiemTraHetMon()
       << " | Diem tong ket mon hoc: " << x->DTKMH() << endl;
};