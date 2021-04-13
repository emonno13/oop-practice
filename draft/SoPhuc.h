class SoPhuc
{
private:
    double PhanThuc;
    double PhanAo;

public:
    SoPhuc();
    SoPhuc(double, double);
    SoPhuc(const SoPhuc &);
    ~SoPhuc();
    void Nhap();
    void Xuat();
    SoPhuc Cong(SoPhuc &) const;
    SoPhuc Tru(SoPhuc &) const;
    SoPhuc Nhan(SoPhuc &) const;
    SoPhuc Chia(SoPhuc &) const;
};
