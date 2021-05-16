#include "DanhSachHocSinh.cpp"
#include <conio.h>

void pressAnyKey()
{
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
};

int main(int argc, char const *argv[])
{
    DanhSachHocSinh ds;
    int key;
    while (true)
    {
        cout << "\n             CHUONG TRINH QUAN LI LOP HOC           \n";
        cout << "************************ MENU ************************\n";
        cout << "** 1.Them n hoc sinh                                **\n";
        cout << "** 2.Xoa mot hoc sinh                               **\n";
        cout << "** 3.Hien thi danh sach hoc sinh                    **\n";
        cout << "** 4.Hien thi danh sach hoc sinh diem TB > 8        **\n";
        cout << "** 5.Tao danh sach hoc sinh tu tap tin Lophoc.txt   **\n";
        cout << "\tNhap tuy chon: ";
        cin >> key;
        switch (key)
        {
        case 1:
            ds.Nhap();
            pressAnyKey();
            break;
        case 2:
            ds.Xoa();
            pressAnyKey();
            break;
        case 3:
            ds.Xuat();
            pressAnyKey();
            break;
        case 4:
            ds.XuatHocSinhDiemTBHon8();
            pressAnyKey();
            break;
        case 5:
            ds.NhapTuFile();
            pressAnyKey();
            break;
        default:
            cout << "Xin hay chon chuc nang khac" << endl;
            pressAnyKey();
            break;
        }
    }

    // ds.Nhap();
    // ds.Xuat();
    system("pause");
    return 0;
}
