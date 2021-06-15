#include "NghienCuuVien.h"
#include <algorithm>

NghienCuuVien::NghienCuuVien()
{
    // this->duan.push_back();
    this->sonamkn = 0;
}

NghienCuuVien::NghienCuuVien(string hoten, string ngaysinh, string maso, vector<string> duan, int sonamkn)
    : NhanSu(hoten, ngaysinh, maso)
{
    for (string i : duan)
    {
        this->duan.push_back(i);
    }
    this->sonamkn = 0;
};

NghienCuuVien::NghienCuuVien(const NghienCuuVien &x) : NhanSu(x)
{
    for (string i : x.duan)
    {
        this->duan.push_back(i);
    };
    this->sonamkn = x.sonamkn;
};

NghienCuuVien::~NghienCuuVien(){};

void NghienCuuVien::Nhap()
{
    NhanSu::Nhap();
    fflush(stdin);
    int soduan = 0;
    string tenduan;
    cout << "\nNhap danh sach du an: ";
    cout << "\n\tNhap so du: ";
    cin >> soduan;
    fflush(stdin);
    for (int i; i < soduan; i++)
    {
        cout << "\n\tMa du an thu " << i + 1 << ": ";
        getline(cin, tenduan);
        if (trim(tenduan).size() != 0)
            this->duan.push_back(trim(tenduan));
    };
    cout << "\nNhap so nam kinh nghiem: ";
    cin >> this->sonamkn;
};

void NghienCuuVien::Xuat() const
{
    NhanSu::Xuat();
    cout << "\n\tDanh sach du an: [";
    for (int i = 0; i < this->duan.size(); i++)
    {
        cout << " '" << this->duan[i] << "' ";
    }
    cout << "]";
    cout << "\n\tSo nam kinh nghiem: " << this->sonamkn
         << "\n\tSo du an bat dau bang D: " << this->SoDuAnD()
         << "\n\tLuong: " << this->TinhLuong();
};

int NghienCuuVien::SoDuAnD() const
{
    int soduanD = 0;
    for (int i = 0; i < this->duan.size(); i++)
    {
        if (this->duan[i].at(0) == 'D')
        {
            soduanD++;
        }
    }
    return soduanD;
};

float NghienCuuVien::TinhLuong() const
{
    return (this->sonamkn * 2 + this->SoDuAnD()) * 20000;
};

const std::string WHITESPACE = " \n\r\t\f\v";
