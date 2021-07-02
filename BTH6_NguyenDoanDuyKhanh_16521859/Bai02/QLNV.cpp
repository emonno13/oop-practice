#include "QLNV.h"

QLNV::QLNV(){};

QLNV::~QLNV(){};

void QLNV::Nhap(const int &loai)
{
    NhanVien *x;

    if (loai == 1)
    {
        x = new GiangVien;
        list.push_back(x);
        cout << "\nNhap thanh cong !!";
    }
    else if (loai == 2)
    {
        x = new GiangVien;
        list.push_back(x);
        cout << "\nNhap thanh cong !!";
    }
    else if (loai == 3)
    {
        x = new GiangVien;
        list.push_back(x);
        cout << "\nNhap thanh cong !!";
    }
    else
    {
        cout << "\nKhong tim thay gia suc can nhap !";
    };
};

void QLNV::Xuat() const
{
    for (int i = 0; i < this->list.size(); i++)
    {
        list[i]->Xuat();
    };
};

istream &operator>>(istream &is, QLNV &x)
{
    cout << "\n------Nhap so luong nhan vien----";
    cout << "\n\tSo luong nhan vien: ";
    is >> x.sonv;

    NhanVien *nv;

    cout << "\n--------Nhap nhan vien: ";
    cout << "\n\tLoai nhan vien: ";
    cout << "\n\t1.Giang vien \n\t2.Nghien cuu vien \n\t3.Nhan vien van phong";

    for (int i = 0; i < x.sonv; i++)
    {
        int loai;
        cout << "\n\n ==>> Nhan vien thu " << i + 1;

        do
        {
            cout << "\nChon loai nhan vien: ";
            cin >> loai;
        } while (loai < 1 || loai > 3);

        switch (loai)
        {
        case 1:
            nv = new GiangVien;
            break;
        case 2:
            nv = new NghienCuuVien;
            break;
        case 3:
            nv = new NhanVienVanPhong;
            break;
        default:
            break;
        }

        nv->Nhap();
        x.list.push_back(nv);
    }

    return is;
};

ostream &operator<<(ostream &os, QLNV x)
{
    os << "\n\n====================Danh sach nhan vien du tieu chuan lao dong======================  \n";
    for (int i = 0; i < x.list.size(); i++)
    {
        if (x.list[i]->XetLaoDongTienTien())
        {
            x.list[i]->Xuat();
        }
    }
    os << "\n";
};