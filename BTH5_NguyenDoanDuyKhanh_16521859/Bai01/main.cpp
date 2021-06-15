#include "TruongDaiHoc.cpp"
#include <conio.h>

void pressAnyKey()
{
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
};

int main(int argc, char const *argv[])
{

    TruongDaiHoc UIT;

    while (true)
    {
        cout << "\n          CHUONG TRINH QUAN LY NHAN SU              \n";
        cout << "************************ MENU ************************\n";
        cout << "** 1.Them Giang Vien                                **\n";
        cout << "** 2.Them Tro Giang                                 **\n";
        cout << "** 3.Them Nghien Cuu Vien                           **\n";
        cout << "** 4.Them Chuyen Vien                               **\n";
        cout << "** 5.Xuat danh sach nhan su                         **\n";
        cout << "** 6.Tinh tong luong                                **\n";
        cout << "\tNhap tuy chon: ";
        int key;
        cin >> key;

        switch (key)
        {
        case 1:
            UIT.Nhap(key);
            pressAnyKey();
            break;
        case 2:
            UIT.Nhap(key);
            pressAnyKey();
            break;
        case 3:
            UIT.Nhap(key);
            pressAnyKey();
            break;
        case 4:
            UIT.Nhap(key);
            pressAnyKey();
            break;
        case 5:
            UIT.Xuat();
            pressAnyKey();
            break;
        case 6:
            cout << UIT.TinhTongLuongNhanSu();
            pressAnyKey();
            break;
        default:
            cout << "Xin hay chon chuc nang khac" << endl;
            pressAnyKey();
            break;
        }
    }

    system("pause");
    return 0;
}
