#include "NghienCuuVien.h"

NghienCuuVien::NghienCuuVien()
{
    this->sodetai = 0;
    this->sobaibao = 0;
};

NghienCuuVien::NghienCuuVien(string maso, string hoten, string ngaysinh, int sodetai, int sobaibao)
    : NhanVien(maso, hoten, ngaysinh)
{
    this->sodetai = sodetai;
    this->sobaibao = sobaibao;
};

NghienCuuVien::NghienCuuVien(const NghienCuuVien &x) : NhanVien(x)
{
    this->sodetai = x.sodetai;
    this->sobaibao = x.sobaibao;
};

NghienCuuVien::~NghienCuuVien(){};

void NghienCuuVien::Nhap()
{
    NhanVien::Nhap();
    fflush(stdin);
    cout << "\nNhap so de tai: ";
    cin >> this->sodetai;
    cout << "\nNhap so bai bao: ";
    cin >> this->sobaibao;
};

void NghienCuuVien::Xuat() const
{
    NhanVien::Xuat();
    cout << " | So de tai: " << this->sodetai
         << " | So bai bao: " << this->sobaibao;
};

bool NghienCuuVien::XetLaoDongTienTien() const
{
    if (this->sodetai >= 1 && this->sobaibao >= 2)
        return true;
    return false;
};