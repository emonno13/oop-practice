#include "NongTrai.cpp"
#include <conio.h>

void pressAnyKey()
{
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
};

int main(int argc, char const *argv[])
{

    NongTrai FARM;

    bool on = {true};

    while (on)
    {
        cout << "\n          CHUONG TRINH QUAN LY GIA SUC              \n";
        cout << "************************ MENU ************************\n";
        cout << "** 1.Them con bo                                    **\n";
        cout << "** 2.Them con cuu                                   **\n";
        cout << "** 3.Them con de                                    **\n";
        cout << "** 4.Xuat danh sach gia suc                         **\n";
        cout << "** 5.Tieng keu doi nghe duoc khi chu vang nha       **\n";
        cout << "** 6.Thoat chuong trinh                             **\n";
        cout << "\tNhap tuy chon: ";
        int key;
        cin >> key;

        switch (key)
        {
        case 1:
            FARM.Nhap(key);
            pressAnyKey();
            break;
        case 2:
            FARM.Nhap(key);
            pressAnyKey();
            break;
        case 3:
            FARM.Nhap(key);
            pressAnyKey();
            break;
        case 4:
            FARM.Xuat();
            pressAnyKey();
            break;
        case 5:
            FARM.KeuKhiDoi();
            pressAnyKey();
            break;
        case 6:
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
