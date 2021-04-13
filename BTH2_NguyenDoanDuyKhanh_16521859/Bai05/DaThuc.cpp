#include "DaThuc.h"

DaThuc::DaThuc()
{
    n = 0;
    a = new int[n + 1];
    a[0] = 0;
}
DaThuc::~DaThuc()
{
}

void DaThuc::Nhap()
{
    cout << "Nhap bac cua da thuc: ";
    cin >> n;

    a = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cout << "Nhap he so a[" << i << "] :";
        cin >> a[i];
    }
}

void DaThuc::Xuat()
{
    cout << "\tDa thuc: ";
    for (int i = n; i >= 1; i--)
    {
        cout << a[i] << "*x^" << i << "+";
    }
    cout << a[0] << endl;
}

int DaThuc::TinhGiaTri(int x)
{
    int sum = 0;
    for (int i = n; i >= 1; i--)
    {
        sum += (a[i] * pow(x, i));
    }
    sum += a[0];
    return sum;
}

DaThuc DaThuc::Cong(const DaThuc &a) const
{
    DaThuc kq;
    if (this->n >= a.n)
    {
        /*bậc của kq = bậc đa thức lớn hơn hoặc bằng*/
        kq.n = this->n;
        kq.a = new int[n + 1];
        for (int i = 0; i <= this->n; i++)
        {
            kq.a[i] = this->a[i];
        }
        for (int i = 0; i <= this->n; i++)
        {
            kq.a[i] += a.a[i];
        }
    }
    else
    {
        kq.n = a.n;
        kq.a = new int[a.n + 1];
        for (int i = 0; i <= a.n; i++)
        {
            kq.a[i] = a.a[i];
        }
        for (int i = 0; i <= a.n; i++)
        {
            kq.a[i] += this->a[i];
        }
    }
    return kq;
}

DaThuc DaThuc::Tru(const DaThuc &a) const
{
    DaThuc kq;
    if (this->n >= a.n)
    {
        /*bậc của kq = bậc đa thức lớn hơn hoặc bằng*/
        kq.n = this->n;
        kq.a = new int[n + 1];
        for (int i = 0; i <= this->n; i++)
        {
            kq.a[i] = this->a[i];
        }
        for (int i = 0; i <= this->n; i++)
        {
            kq.a[i] -= a.a[i];
        }
    }
    else
    {
        kq.n = a.n;
        kq.a = new int[a.n + 1];
        for (int i = 0; i <= a.n; i++)
        {
            kq.a[i] = a.a[i];
        }
        for (int i = 0; i <= a.n; i++)
        {
            kq.a[i] -= this->a[i];
        }
    }
    return kq;
}