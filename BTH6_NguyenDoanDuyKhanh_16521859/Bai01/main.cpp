#include "CongTy.cpp"
#include <conio.h>

void pressAnyKey()
{
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
};

int main(int argc, char const *argv[])
{

    CongTy ABC;

    bool on = {true};

    while (on)
    {
        cout << "\n          CHUONG TRINH QUAN LY CAN BO               \n";
        cout << "************************ MENU ************************\n";
        cout << "** 1.Them can bo bien che                           **\n";
        cout << "** 2.Them can bo hop dong                           **\n";
        cout << "** 3.Xuat danh sach can bo                          **\n";
        cout << "** 4.Tinh tong luong cong ty phai tra               **\n";
        cout << "** 5.Thoat chuong trinh                             **\n";
        cout << "\tNhap tuy chon: ";
        int key;
        cin >> key;

        switch (key)
        {
        case 1:
            ABC.Nhap(key);
            pressAnyKey();
            break;
        case 2:
            ABC.Nhap(key);
            pressAnyKey();
            break;
        case 3:
            ABC.Xuat();
            pressAnyKey();
            break;
        case 4:
            cout << "\nTong Tien luong phai tra: " << ABC.TongTienLuongPhaiTra();
            pressAnyKey();
            break;
        case 5:
            on = false;
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
