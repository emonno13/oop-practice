#include "PhanSo.h"

int PhanSo::getTu() const
{
    return *this->TuSo;
};

void PhanSo::setTu(const int &tu)
{
    // *this->TuSo = tu;
    this->TuSo = new int(tu);
}

int PhanSo::getMau() const
{
    return *this->MauSo;
};

void PhanSo::setMau(const int &mau)
{
    // *this->MauSo = mau;
    this->MauSo = new int(mau);
}

PhanSo::PhanSo()
{
    // *this->TuSo = 0;
    // this->MauSo = 1;
    // this->TuSo = new int(0);
    // this->MauSo = new int(1);
    setTu(0);
    setMau(0);
}

PhanSo::PhanSo(const int &TuSo, const int &MauSo)
{
    // this->TuSo = new int(TuSo);
    // this->MauSo = new int(MauSo);
    setTu(TuSo);
    setMau(MauSo);
}

PhanSo::PhanSo(const PhanSo &x)
{
    // this->TuSo = x.TuSo;
    // this->MauSo = x.MauSo;
    setTu(*x.TuSo);
    setMau(*x.MauSo);
}

PhanSo::~PhanSo()
{
    delete this->TuSo;
    delete this->MauSo;
}

void PhanSo::Nhap()
{
    cout << "\nNhap tu so: ";
    cin >> *this->TuSo;
    cout << "\nNhap mau so: ";
    cin >> *this->MauSo;
}

void PhanSo::Xuat()
{
    cout << this->getTu() << "/" << this->getMau() << endl;
}

istream &operator>>(istream &is, PhanSo &p)
{
    cout << "\nNhap tu so: ";
    is >> *p.TuSo;
    cout << "\nNhap mau so: ";
    is >> *p.MauSo;
    while (!p.MauSo)
    {
        cout << "Nhap lai mau so : ";
        is >> *p.MauSo;
    }
    p.RutGon();
    return is;
}
ostream &operator<<(ostream &os, PhanSo &ps)
{
    os << "\nPhan so: ";
    os << *ps.TuSo;
    if (*ps.TuSo != 0 && *ps.MauSo != 1)
        os << "/" << *ps.MauSo << endl;
    return os;
}

void PhanSo::XuatThapPhan()
{
    cout << (float)(float(*this->TuSo) / *this->MauSo) << endl;
}

int PhanSo::UCLN(int x, int y)
{
    int r;
    x = abs(x);
    y = abs(y);
    if (x == 0 || y == 0)
        return 1;
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

PhanSo *PhanSo::RutGon()
{
    int n = UCLN(*this->TuSo, *this->MauSo);
    // this->TuSo = new int(*this->TuSo / n);
    // this->MauSo = new int(*this->MauSo / n);
    setTu(*this->TuSo / n);
    setMau(*this->MauSo / n);
    return new PhanSo(*this->TuSo, *this->MauSo);
}
// ------------------------------------------------- CONG ----------------------------------------------------------------------
PhanSo *PhanSo::Cong(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getMau() + this->getMau() * b->getTu(), this->getMau() * b->getMau());
    // kq->setTu(*this->TuSo * b->getMau() + *this->MauSo * b->getTu());
    // kq->setMau(*this->MauSo * b->getMau());
    return kq->RutGon();
}
PhanSo *PhanSo::operator+(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getMau() + this->getMau() * b->getTu(), this->getMau() * b->getMau());
    return kq->RutGon();
}
PhanSo *PhanSo::operator+(const int &i)
{
    PhanSo *kq = new PhanSo(getTu() + i * getMau(), getMau());
    return kq->RutGon();
}

PhanSo *operator+(const int &i, PhanSo &ps)
{
    PhanSo *clone;
    clone->setTu(*ps.TuSo);
    clone->setMau(*ps.MauSo);
    PhanSo *kq = new PhanSo(i * clone->getMau() + clone->getTu(), clone->getMau());
    return kq->RutGon();
}
// -------------------------------------------------- TRU ---------------------------------------------------------------------

PhanSo *PhanSo::Tru(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getMau() - this->getMau() * b->getTu(), this->getMau() * b->getMau());
    return kq->RutGon();
}
PhanSo *PhanSo::operator-(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getMau() - this->getMau() * b->getTu(), this->getMau() * b->getMau());
    return kq->RutGon();
}
PhanSo *PhanSo::operator-(const int &i)
{
    PhanSo *kq = new PhanSo(this->getTu() - i * getMau(), this->getMau());
    return kq->RutGon();
}
PhanSo *operator-(const int &i, const PhanSo &ps)
{
    PhanSo *clone = new PhanSo(*ps.TuSo, *ps.MauSo);
    PhanSo *kq = new PhanSo(i * clone->getMau() - clone->getTu(), clone->getMau());
    return kq->RutGon();
}

// --------------------------------------------------- NHAN --------------------------------------------------------------------

PhanSo *PhanSo::Nhan(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getTu(), this->getMau() * b->getMau());
    return kq->RutGon();
}
PhanSo *PhanSo::operator*(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getTu(), this->getMau() * b->getMau());
    return kq->RutGon();
}
PhanSo *PhanSo::operator*(const int &i)
{
    PhanSo *kq = new PhanSo(this->getTu() * i, this->getMau());
    return kq->RutGon();
}
PhanSo *operator*(const int &i, const PhanSo &ps)
{
    PhanSo *clone = new PhanSo(*ps.TuSo, *ps.MauSo);
    PhanSo *kq = new PhanSo(i * clone->getTu(), clone->getMau());
    return kq->RutGon();
}

// -------------------------------------------------- CHIA ---------------------------------------------------------------------
PhanSo *PhanSo::Chia(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getMau(), this->getMau() * b->getTu());
    return kq->RutGon();
}
PhanSo *PhanSo::operator/(const PhanSo *b) const
{
    PhanSo *kq = new PhanSo(this->getTu() * b->getMau(), this->getMau() * b->getTu());
    return kq->RutGon();
}
PhanSo *PhanSo::operator/(const int &i)
{
    PhanSo *kq = new PhanSo(this->getTu(), this->getMau() * i);
    return kq->RutGon();
}
PhanSo *operator/(const int &i, const PhanSo &ps)
{
    PhanSo *clone = new PhanSo(*ps.TuSo, *ps.MauSo);
    PhanSo *kq = new PhanSo(i * clone->getMau(), clone->getTu());
    return kq->RutGon();
}

// -------------------------------------------------- GAN BANG ---------------------------------------------------------------------

PhanSo *PhanSo::operator+=(const PhanSo *b)
{
    this->setTu(this->getTu() * b->getMau() + this->getMau() * b->getTu());
    this->setMau(this->getMau() * b->getMau());
    return this->RutGon();
}

PhanSo *PhanSo::operator-=(const PhanSo *b)
{
    this->setTu(this->getTu() * b->getMau() - this->getMau() * b->getTu());
    this->setMau(this->getMau() * b->getMau());
    return this->RutGon();
};
PhanSo *PhanSo::operator*=(const PhanSo *b)
{
    this->setTu(this->getTu() * b->getTu());
    this->setMau(this->getMau() * b->getMau());
    return this->RutGon();
};
PhanSo *PhanSo::operator/=(const PhanSo *b)
{
    this->setTu(this->getTu() * b->getMau());
    this->setMau(this->getMau() * b->getTu());
    return this->RutGon();
};

// -------------------------------------------------- SO SANH -------------------------------------------

bool PhanSo::operator==(const PhanSo &b) const
{
    if (this->getTu() * *b.MauSo == this->getMau() * *b.TuSo)
        return true;
    else
        return false;
};
bool PhanSo::operator==(const int &i)
{
    if (this->getTu() == i * this->getMau())
        return true;
    else
        return false;
};
bool operator==(const int &i, const PhanSo &ps)
{
    if (i * *ps.MauSo == *ps.TuSo)
        return true;
    else
        return false;
};

bool PhanSo::operator!=(const PhanSo &b) const
{
    if (this->getTu() * *b.MauSo != this->getMau() * *b.TuSo)
        return true;
    else
        return false;
};
bool PhanSo::operator!=(const int &i)
{
    if (this->getTu() != i * this->getMau())
        return true;
    else
        return false;
};
bool operator!=(const int &i, const PhanSo &ps)
{
    if (i * *ps.MauSo != *ps.TuSo)
        return true;
    else
        return false;
};

bool PhanSo::operator<(const PhanSo &b) const
{
    if (this->getTu() * *b.MauSo < this->getMau() * *b.TuSo)
        return true;
    else
        return false;
};
bool PhanSo::operator<(const int &i)
{
    if (this->getTu() < i * this->getMau())
        return true;
    else
        return false;
};
bool operator<(const int &i, const PhanSo &ps)
{
    if (i * *ps.MauSo < *ps.TuSo)
        return true;
    else
        return false;
};

bool PhanSo::operator<=(const PhanSo &b) const
{
    if (this->getTu() * *b.MauSo <= this->getMau() * *b.TuSo)
        return true;
    else
        return false;
};
bool PhanSo::operator<=(const int &i)
{
    if (this->getTu() <= i * this->getMau())
        return true;
    else
        return false;
};
bool operator<=(const int &i, const PhanSo &ps)
{
    if (i * *ps.MauSo <= *ps.TuSo)
        return true;
    else
        return false;
};

bool PhanSo::operator>(const PhanSo &b) const
{
    if (this->getTu() * *b.MauSo > this->getMau() * *b.TuSo)
        return true;
    else
        return false;
};
bool PhanSo::operator>(const int &i)
{
    if (this->getTu() > i * this->getMau())
        return true;
    else
        return false;
};
bool operator>(const int &i, const PhanSo &ps)
{
    if (i * *ps.MauSo > *ps.TuSo)
        return true;
    else
        return false;
};

bool PhanSo::operator>=(const PhanSo &b) const
{
    if (this->getTu() * *b.MauSo >= this->getMau() * *b.TuSo)
        return true;
    else
        return false;
};
bool PhanSo::operator>=(const int &i)
{
    if (this->getTu() >= i * this->getMau())
        return true;
    else
        return false;
};
bool operator>=(const int &i, const PhanSo &ps)
{
    if (i * *ps.MauSo >= *ps.TuSo)
        return true;
    else
        return false;
};

// ---------------------------------------------------------------------------------------------------------------

// PhanSo::operator float()
// {
//     return (float)this->TuSo / this->MauSo;
// }
// PhanSo::PhanSo(int t)
// {
//     this->TuSo = t;
//     this->MauSo = 1;
// }

// ----------------------------------------------[ ++ -- ] -----------------------------------------------------------------

//  ++a
PhanSo *PhanSo::operator++()
{
    this->setTu(this->getTu() + this->getMau());
    this->setMau(this->getMau());
    return this->RutGon();
}

// a++
PhanSo *PhanSo::operator++(int)
{
    PhanSo *tmp = (this);
    this->setTu(this->getTu() + this->getMau());
    this->setMau(this->getMau());
    return tmp;
}

// --a
PhanSo *PhanSo::operator--()
{
    this->setTu(this->getTu() - this->getMau());
    this->setMau(this->getMau());
    return this->RutGon();
}

// a--
PhanSo *PhanSo::operator--(int)
{
    PhanSo *tmp = (this);
    this->setTu(this->getTu() - this->getMau());
    this->setMau(this->getMau());
    return tmp;
}

PhanSo &PhanSo::operator=(const PhanSo &ps)
{
    if (this != &ps)
    {

        // this->TuSo = ps.TuSo;
        // this->MauSo = ps.MauSo;
        this->setTu(*ps.TuSo);
        this->setMau(*ps.MauSo);
    }
    return *this;
}
