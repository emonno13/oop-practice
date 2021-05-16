#include "DanhSachHocSinh.h"
#include <fstream>
#include <stdlib.h>
#include <sstream>

DanhSachHocSinh::DanhSachHocSinh(/* args */)
{
    // this->list = vector<HocSinh *>(n);
}

DanhSachHocSinh::~DanhSachHocSinh()
{
    list.clear();
}

void DanhSachHocSinh::Nhap()
{
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nHoc sinh thu " << i + 1 << endl;
        HocSinh a;
        cin >> a;
        while (kiemTraTenTrung(a.getHoTen()))
        {
            cout << "\nDa co hoc sinh '" + a.getHoTen() + "' trong lop !!\n";
            a = HocSinh();
            cin >> a;
        }
        cout << "\nThem hoc sinh thanh cong!! \n";
        this->list.push_back(a);
    }
}

void DanhSachHocSinh::Xuat()
{
    cout << "\nDanh sach hoc sinh: \n";
    for (int i = 0; i < list.size(); i++)
    {
        cout << "\nHoc sinh thu " << i + 1 << endl;
        cout << list[i];
    }
}

void DanhSachHocSinh::XuatHocSinhDiemTBHon8()
{
    cout << "\nDanh sach hoc sinh diem TB hon 8: \n";
    for (HocSinh hocsinh : list)
    {
        if (hocsinh.getDiemTB() > 8)
            cout << hocsinh;
    }
}

void DanhSachHocSinh::Xoa()
{
    string hoten;
    cout << "\n\tNhap ho ten hoc sinh can xoa: ";
    cin >> hoten;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i].getHoTen() == hoten)
        {
            list.erase(list.begin() + i);
            cout << "\nXoa thanh cong hoc sinh!!\n";
            return;
        }
    }
    cout << "\nKhong co hoc sinh trong lop !!\n";
    return;
}

void DanhSachHocSinh::NhapTuFile()
{
    fstream LopHocFile;
    LopHocFile.open("LopHoc.txt", fstream::in);
    if (LopHocFile.fail())
    {
        cout << "\nFailed to open this file!!\n";
        return;
    }
    else
    {
        cout << "\nLopHoc.txt opened !\n";
    }
    vector<string> lines;
    while (!LopHocFile.eof())
    {
        string line;
        getline(LopHocFile, line);
        if (line != "")
        {
            lines.push_back(line);
        }
    }

    /* Lay so luong hoc sinh*/
    int soLuongHocSinh = 0;
    stringstream str2num(lines[0]);
    str2num >> soLuongHocSinh;
    cout << "\n\tSoluonghocsinh: " << soLuongHocSinh << endl;
    int startIndexByStudent = 1;

    for (int i = 0; i < soLuongHocSinh; i++)
    {
        //tung hang cua mot hoc sinh
        int lastIndexByStudent = startIndexByStudent + 4;

        cout << "\n\tNhap hoc sinh thu " << i + 1;

        HocSinh a;
        for (int j = startIndexByStudent; j < lastIndexByStudent; j++)
        {
            if (j == 4 * (i + 1) - 3)
                a.setHoTen(lines[j]);
            if (j == 4 * (i + 1) - 2)
                a.setMaSo(lines[j]);
            if (j == 4 * (i + 1) - 1)
                a.setSDT(lines[j]);
            if (j == 4 * (i + 1) - 0)
                a.setDiemTB(stof(lines[j]));
            startIndexByStudent++;
        };
        if (kiemTraTenTrung(a.getHoTen()))
        {
            cout << "\n\tDa co hoc sinh '" + a.getHoTen() + "' trong lop !!\n\n";
        }
        else
        {
            this->list.push_back(a);
            cout << "\nThem hoc sinh thanh cong!! \n\n";
        }
    }

    LopHocFile.close();
}

bool DanhSachHocSinh::kiemTraTenTrung(const string &x)
{
    for (HocSinh i : list)
    {
        if (x == i.getHoTen())
            return true;
    }
    return false;
}
