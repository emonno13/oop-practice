#include "GiangVien.cpp"

class NghienCuuVien : public NhanVien
{
private:
    int sodetai, sobaibao;

public:
    NghienCuuVien();
    NghienCuuVien(string, string, string, int, int);
    NghienCuuVien(const NghienCuuVien &);
    ~NghienCuuVien();

    void Nhap();
    void Xuat() const;
    bool XetLaoDongTienTien() const;
};
