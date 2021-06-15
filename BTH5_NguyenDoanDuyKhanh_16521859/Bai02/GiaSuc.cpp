#include "GiaSuc.h"

void GiaSuc::setSoLuongCon(const int &x)
{
    this->soluongcon = x;
};

void GiaSuc::setSoLitSua(const float &x)
{
    this->solitsua = x;
};

void GiaSuc::setTiengKeu(const string &x)
{
    this->tiengkeu = x;
};

int GiaSuc::getSoLuongCon() const
{
    return this->soluongcon;
};

float GiaSuc::getSoLitSua() const
{
    return this->solitsua;
};

string GiaSuc::getTiengKeu() const
{
    return this->tiengkeu;
};

GiaSuc::GiaSuc()
{
    setSoLitSua(0);
    setSoLuongCon(0);
    setTiengKeu("");
};

GiaSuc::GiaSuc(int soluongcon, float solitsua, string tiengkeu)
{
    setSoLitSua(soluongcon);
    setSoLuongCon(solitsua);
    setTiengKeu(tiengkeu);
};

GiaSuc::GiaSuc(const GiaSuc &x)
{
    setSoLitSua(x.soluongcon);
    setSoLuongCon(x.solitsua);
    setTiengKeu(x.tiengkeu);
};

GiaSuc::~GiaSuc(){};

void GiaSuc::Xuat() const
{
    cout << "So luong con: " << getSoLuongCon() << " | "
         << "So lit sua: " << getSoLitSua() << " | "
         << "Tieng keu: " << getTiengKeu() << endl;
}
