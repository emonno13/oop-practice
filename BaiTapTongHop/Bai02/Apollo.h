#include "PhiThuyen.cpp"

class Apollo : public PhiThuyen
{
private:
    int N;

public:
    Apollo();
    Apollo(string, string, int, int);
    ~Apollo();

    void setN(const int &);
    int getN() const;

    void Nhap();
    void Xuat() const;
    int NhienLieuTieuThu(const int &) const;
};