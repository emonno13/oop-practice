#include "DanhSachMonHoc.h"

DanhSachMonHoc::DanhSachMonHoc()
{
    this->M = 0;
    this->N = 0;
};
DanhSachMonHoc::~DanhSachMonHoc(){};

void DanhSachMonHoc::Nhap()
{
    cout << "\n*****Nhap so mon thi: ";
    cin >> this->M;
    for (int i = 0; i < this->M; i++)
    {
        MonHoc *x = new MonThi;
        x->Nhap();
        list.push_back(x);
    }

    cout << "\n*****Nhap so mon kiem tra: ";
    cin >> this->N;
    for (int i = 0; i < this->N; i++)
    {
        MonHoc *x = new MonKiemTra;
        x->Nhap();
        list.push_back(x);
    }
};
void DanhSachMonHoc::Xuat() const
{
    cout << "\n\n***Danh sach mon hoc: \n";
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->Xuat();
    }
};

void DanhSachMonHoc::MonHocCoDiemTongKetCaoNhat() const
{
    float max = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->DTKMH() >= max)
        {
            max = list[i]->DTKMH();
        };
    };
    cout << "\nMon hoc co diem tong ket mon hoc cao nhat: ";
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->DTKMH() == max)
        {
            list[i]->Xuat();
        };
    };
};
float DanhSachMonHoc::DTBHK() const
{
    float M1 = 0;
    for (int i = 0; i < this->M; i++)
    {
        M1 += list[i]->getHeSo() * list[i]->DTKMH();
    }

    float N1 = 0;
    for (int i = 0; i < this->N; i++)
    {
        N1 += list[i]->getHeSo() * list[i]->DTKMH();
    }

    float M2 = 0;
    for (int i = 0; i < this->M; i++)
    {
        M2 += list[i]->DTKMH();
    }

    float N2 = 0;
    for (int i = 0; i < this->N; i++)
    {
        N2 += list[i]->DTKMH();
    }

    return ((2 * M1 + N1) / (2 * M2 + N2));
};

istream &operator>>(istream &is, DanhSachMonHoc &x)
{
    cout << "\n*****Nhap so mon thi: ";
    is >> x.M;
    for (int i = 0; i < x.M; i++)
    {
        MonHoc *a = new MonThi;
        is >> *a;
        x.list.push_back(a);
    }

    cout << "\n*****Nhap so mon kiem tra: ";
    is >> x.N;
    for (int i = 0; i < x.N; i++)
    {
        MonHoc *a = new MonKiemTra;
        is >> *a;
        x.list.push_back(a);
    }
    return is;
};

ostream &operator<<(ostream &os, DanhSachMonHoc *x)
{
    os << "\n\n***Danh sach mon hoc: \n";
    for (int i = 0; i < x->list.size(); i++)
    {
        os << x->list[i];
    }
};