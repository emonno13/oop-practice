#include "NhanVien.cpp"

class GiangVien : public NhanVien
{
private:
    int sotietday, sodetaikhoaluan;

public:
    GiangVien();
    GiangVien(string, string, string, int, int);
    GiangVien(const GiangVien &);
    ~GiangVien();

    void Nhap();
    void Xuat() const;
    bool XetLaoDongTienTien() const;
};