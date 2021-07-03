#include "QLPT.h"

QLPT::QLPT(){};
QLPT::~QLPT(){};

void QLPT::Nhap()
{
    int A = 0;
    int R = 0;
    int S = 0;

    cout << "\n*****Nhap so phi thuyen Apollo: ";
    cin >> A;
    for (int i = 0; i < A; i++)
    {
        PhiThuyen *x = new Apollo;
        x->Nhap();
        list.push_back(x);
    }

    cout << "\n*****Nhap so phi thuyen Rocketo: ";
    cin >> R;
    for (int i = 0; i < R; i++)
    {
        PhiThuyen *x = new Rocketo;
        x->Nhap();
        list.push_back(x);
    }

    cout << "\n*****Nhap so phi thuyen Shieldato: ";
    cin >> S;
    for (int i = 0; i < S; i++)
    {
        PhiThuyen *x = new Shieldato;
        x->Nhap();
        list.push_back(x);
    }
};

void QLPT::Xuat() const
{
    cout << "\nDanh sach phi thuyen: \n";
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->Xuat();
    }
    cout << endl;
};

void QLPT::XuatTongNhienLieuTheoLoai(const int &T) const
{
    int sumA = 0;
    int sumR = 0;
    int sumS = 0;

    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getLoai() == LoaiPhiThuyen::ApolloSpaceShip)
        {
            sumA += list[i]->NhienLieuTieuThu(T);
        }
        if (list[i]->getLoai() == LoaiPhiThuyen::RocketoSpaceShip)
        {
            sumR += list[i]->NhienLieuTieuThu(T);
        }
        if (list[i]->getLoai() == LoaiPhiThuyen::ShieldatoSpaceShip)
        {
            sumS = +list[i]->NhienLieuTieuThu(T);
        }
    };

    cout << "\n\tTong nhien lieu tieu thu cua Apollo trong " << T << " giay: " << sumA;
    cout << "\n\tTong nhien lieu tieu thu cua Rocketo trong " << T << " giay: " << sumR;
    cout << "\n\tTong nhien lieu thieu thu cua Shieldato trong " << T << " giay: " << sumS;
};

void QLPT::XuatTongNhienLieu(const int &T) const
{
    int sum = 0;
    for (int i = 0; i < list.size(); i++)
    {
        sum += list[i]->NhienLieuTieuThu(T);
    };
    cout << "\n\tTong nhien lieu tieu thu Tat Ca phi thuyen trong " << T << " giay: " << sum;
}; // by all

istream &operator>>(istream &is, QLPT &q)
{
    int A = 0;
    int R = 0;
    int S = 0;

    cout << "\n*****Nhap so phi thuyen Apollo: ";
    is >> A;
    for (int i = 0; i < A; i++)
    {
        PhiThuyen *x = new Apollo;
        x->Nhap();
        q.list.push_back(x);
    }

    cout << "\n*****Nhap so phi thuyen Rocketo: ";
    is >> R;
    for (int i = 0; i < R; i++)
    {
        PhiThuyen *x = new Rocketo;
        x->Nhap();
        q.list.push_back(x);
    }

    cout << "\n*****Nhap so phi thuyen Shieldato: ";
    is >> S;
    for (int i = 0; i < S; i++)
    {
        PhiThuyen *x = new Shieldato;
        x->Nhap();
        q.list.push_back(x);
    }
    return is;
};

ostream &operator<<(ostream &os, QLPT *q)
{
    os << "\nDanh sach  phi thuyen: \n";
    for (int i = 0; i < q->list.size(); i++)
    {
        q->list[i]->Xuat();
    }
    os << endl;
};