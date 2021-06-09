#include <iostream>
#include "Phanso.cpp"
using namespace std;

int main(int argc, char *argv[])
{

    // PhanSo *cong = new PhanSo, *congnguyen = new PhanSo, *nguyencong = new PhanSo;
    // PhanSo tru, trunguyen, nguyentru;
    // PhanSo nhan, nhannguyen, nguyennhan;
    // PhanSo chia, chianguyen, nguyenchia;
    // int n = 5;
    // int *m = new int(10);

    // int temp = 4;

    // cout << n << endl;     // value
    // cout << *(&n) << endl; // value
    // cout << &n << endl;    //  address

    // m = new int(temp);          // assign
    // *m = temp;                  // assign ( no ref to temp)
    // m = &temp;                  // assign (ref to temp)
    // *m = 1;                     // assign
    // cout << *m << temp << endl; // content
    // cout << m << endl;          // address

    // a->Nhap();
    // // a->RutGon();
    // a->Xuat();
    // b->Nhap();
    // // b->RutGon();
    // b->Xuat();
    // cout << *a << " ---- " << *b;
    // cout << *a << " ---- " << *b;
    cout << "\n---------Nhap phan so -------\n";
    PhanSo *a = new PhanSo;
    PhanSo *b = new PhanSo;

    cin >> *a;
    cout << *a;
    cin >> *b;
    cout << *b;

    cout << "\n---------- Tong ------------\n";

    PhanSo *cong = new PhanSo;
    cong = a->Cong(b);
    cong = *a + b;
    PhanSo *congnguyen = *a + 1;
    PhanSo *nguyencong = 1 + *a;

    cout << *cong << *congnguyen << *nguyencong;

    cout << "\n------------------ Tru  ---------------------\n";
    PhanSo *tru = *a - b;
    PhanSo *trunguyen = *a - 1;
    PhanSo *nguyentru = 1 - *a;

    cout << *tru << *trunguyen << *nguyentru;

    cout << "\n------------------ Nhan  ---------------------\n";
    PhanSo *nhan = *a * b;
    PhanSo *nhannguyen = *a * 2;
    PhanSo *nguyennhan = 2 * *a;

    cout << *nhan << *nhannguyen << *nguyennhan;

    cout << "\n------------------ Chia  ---------------------\n";

    PhanSo *chia = *a / b;
    PhanSo *chianguyen = *a / 3;
    PhanSo *nguyenchia = 3 / *a;

    cout << *chia << *chianguyen << *nguyenchia;

    cout << "\n------------------ [ += ] ---------------------\n";
    PhanSo *t1 = new PhanSo(2, 3);
    PhanSo *congbang = new PhanSo(2, 3);
    *congbang += t1;
    cout << *congbang;

    cout << "\n------------------ [ -= ] ---------------------\n";
    PhanSo *t2 = new PhanSo(1, 3);
    PhanSo *trubang = new PhanSo(2, 3);
    *trubang -= t2;
    cout << *trubang;

    cout << "\n------------------ [ *= ] ---------------------\n";
    PhanSo *t3 = new PhanSo(2, 3);
    PhanSo *nhanbang = new PhanSo(2, 3);
    *nhanbang *= t3;
    cout << *nhanbang;

    cout << "\n------------------ [ /= ] ---------------------\n";
    PhanSo *t4 = new PhanSo(2, 3);
    PhanSo *chiabang = new PhanSo(2, 3);
    *chiabang /= t4;
    cout << *chiabang;

    cout << "\n------------------ [ == | <= | >= ] ---------------------\n";
    PhanSo *t5 = new PhanSo(1, 2);
    if (*a == *t5)
        cout << "\n\tA == 1/2";
    if (*a >= *t5)
        cout << "\n\tA >= 1/2";
    if (*a <= *t5)
        cout << "\n\tA <= 1/2";

    cout << "\n------------------ [ != ] ---------------------\n";
    PhanSo *t6 = new PhanSo(3, 2);
    if (*a != *t6)
        cout << "\n\tA != 3/2";

    cout << "\n------------------ [ < ] ---------------------\n";
    PhanSo *t7 = new PhanSo(5, 2);
    if (*a < *t7)
        cout << "\n\tA < 5/2";

    cout << "\n------------------ [ > ] ---------------------\n";
    PhanSo *t8 = new PhanSo(1, 50);
    if (*a > *t8)
        cout << "\n\tA > 1/50";

    cout << "\n------------------ [ ++ -- ] ---------------------\n";

    PhanSo *c = new PhanSo(1, 2);
    cout << *c;
    ++*c;
    cout << *c;
    *c->operator++();
    cout << *c;
    --*c;
    cout << *c;
    *c->operator--();
    cout << *c;

    cout << "\n------------------ [ = ] ---------------------\n";
    PhanSo *d = new PhanSo(5, 7);
    PhanSo *e = new PhanSo;
    *e = *d;
    cout << *e;

    cout << "\n------------- Check Initial Values ----------------------";
    cout << *a << " ---- " << *b;
    cout << *a << " ---- " << *b;
    a->Xuat();
    b->Xuat();

    // cout << "\nChuyen kieu \n";
    // PhanSo chuyenkieutoantu, chuyenkieuconstructor = 5;
    // chuyenkieutoantu = a + b;
    // cout << (float)chuyenkieutoantu << endl;
    // cout << (float)a << endl;

    // cout << "\nGan \n";
    // PhanSo d1(5, 6), d2;
    // d2 = d1;
    // d1.Xuat();
    // d2.Xuat();

    // cout << "\nNhap va xuat \n";
    // PhanSo ps;
    // cin >> ps;
    // cout << ps << endl;
    // system("pause");
    return 0;
}