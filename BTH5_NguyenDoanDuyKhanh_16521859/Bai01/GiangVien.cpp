#include "GiangVien.h"

GiangVien::GiangVien()
{
    this->hocham = "";
    this->hocvi = "";
    this->sonamday = 0;
    // this->somonday = 0;
}

GiangVien::GiangVien(string hoten, string ngaysinh, string maso, string hocham, string hocvi, int sonamday, vector<string> monhoc)
    : NhanSu(hoten, ngaysinh, maso)
{
    this->hocham = hocham;
    this->hocvi = hocvi;
    // this->somonday = somonday;
    for (string i : monhoc)
    {
        this->monhoc.push_back(i);
    }
    this->sonamday = sonamday;
}

GiangVien::GiangVien(const GiangVien &x) : NhanSu(x)
{
    this->hocham = x.hocham;
    this->hocvi = x.hocvi;
    for (string i : x.monhoc)
    {
        this->monhoc.push_back(i);
    }
    // this->somonday = x.somonday;
    this->sonamday = x.sonamday;
}

GiangVien::~GiangVien(){};

void GiangVien::Nhap()
{
    NhanSu::Nhap();
    fflush(stdin);
    cout << "\nNhap hoc ham: ";
    getline(cin, this->hocham);
    cout << "\nNhap hoc vi: ";
    getline(cin, this->hocvi);
    cout << "\nNhap so nam giang day: ";
    cin >> this->sonamday;
    int somonhoc;
    cout << "\nNhap so mon giang day: ";
    cin >> somonhoc;
    cout << "\n==>Nhap danh sach mon giang day: ";
    string tenduan;
    fflush(stdin);
    for (int i; i < somonhoc; i++)
    {
        cout << "\n\tMa du an thu " << i + 1 << ": ";
        getline(cin, tenduan);
        if (trim(tenduan).size() != 0)
            this->monhoc.push_back(trim(tenduan));
    };
};

void GiangVien::Xuat() const
{
    NhanSu::Xuat();
    cout << "\n\tHoc ham:  " << this->hocham
         << "\n\tHoc vi: " << this->hocvi
         << "\n\tSo nam giang day: " << this->sonamday
         << "\n\tDanh sach mon hoc: [";
    for (int i = 0; i < this->monhoc.size(); i++)
    {
        cout << " '" << this->monhoc[i] << "' ";
    }
    cout << "]";
    cout << "\n\tLuong: " << this->TinhLuong();
};

float GiangVien::TinhLuong() const
{
    return (this->monhoc.size() * this->sonamday * 0.12) * 20000;
};