#include "NhanSu.h"

NhanSu::NhanSu()
{
    this->hoten = "";
    this->ngaysinh = "";
    this->maso = "";
};

NhanSu::NhanSu(string hoten, string ngaysinh, string maso)
{
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
    this->maso = maso;
}

NhanSu::NhanSu(const NhanSu &x)
{
    this->hoten = x.hoten;
    this->ngaysinh = x.ngaysinh;
    this->maso = x.maso;
}

NhanSu::~NhanSu(){};

void NhanSu::Nhap()
{
    fflush(stdin);
    cout << "\nNhap ho ten: ";
    getline(cin, this->hoten);
    cout << "\nNhap ngay sinh: ";
    getline(cin, this->ngaysinh);
    cout << "\nNhap ma so: ";
    getline(cin, this->maso);
};

void NhanSu::Xuat() const
{
    cout << "\n\t**-------------Thong tin nhan su: --------------**"
         << "\n\tHo ten: " << this->hoten
         << "\n\tNgay sinh: " << this->ngaysinh
         << "\n\tMa so:" << this->maso;
};

string NhanSu::trim(const string &s)
{
    auto start = s.begin();
    while (start != s.end() && isspace(*start))
    {
        start++;
    }

    auto end = s.end();
    do
    {
        end--;
    } while (distance(start, end) > 0 && isspace(*end));

    return string(start, end + 1);
}