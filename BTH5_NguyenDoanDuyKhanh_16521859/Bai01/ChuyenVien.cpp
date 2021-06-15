#include "ChuyenVien.h"

ChuyenVien::ChuyenVien()
{
    // this->duan.push_back("");
    this->sonamkn = 0;
}

ChuyenVien::ChuyenVien(string hoten, string ngaysinh, string maso, vector<string> duan, int sonamkn)
    : NhanSu(hoten, ngaysinh, maso)
{
    for (string i : duan)
    {
        this->duan.push_back(i);
    }
    this->sonamkn = 0;
};

ChuyenVien::ChuyenVien(const ChuyenVien &x) : NhanSu(x)
{
    for (string i : x.duan)
    {
        this->duan.push_back(i);
    };
    this->sonamkn = x.sonamkn;
};

ChuyenVien::~ChuyenVien(){};

void ChuyenVien::Nhap()
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

void ChuyenVien::Xuat() const
{
    NhanSu::Xuat();
    cout << "\n\tDanh sach du an: [";
    for (int i = 0; i < this->duan.size(); i++)
    {
        cout << " '" << this->duan[i] << "' ";
    }
    cout << "]";
    cout << "\n\tSo nam kinh nghiem: " << this->sonamkn
         << "\n\tSo du an bat dau bang T: " << this->SoDuAnT()
         << "\n\tLuong: " << this->TinhLuong();
};

int ChuyenVien::SoDuAnT() const
{
    int soduanT = 0;
    for (int i = 0; i < this->duan.size(); i++)
    {
        if (this->duan[i].at(0) == 'T')
        {
            soduanT++;
        }
    }
    return soduanT;
};

float ChuyenVien::TinhLuong() const
{
    return (this->sonamkn * 4 + this->SoDuAnT()) * 18000;
};