#include "Apollo.cpp"

class Rocketo : public PhiThuyen
{
private:
    int M;

public:
    Rocketo();
    Rocketo(string, string);
    ~Rocketo();

    void setM(const int &);
    int getM() const;

    void Nhap();
    void Xuat() const;
    int NhienLieuTieuThu(const int &) const;
};