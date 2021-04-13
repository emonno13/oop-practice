#include "ThiSinh.h"

class DanhSachThiSinh
{
private:
    ThiSinh *list;
    int n;

public:
    DanhSachThiSinh();
    ~DanhSachThiSinh();

    void Nhap();
    void Xuat();
    void XuatThiSinhTongDiemTren15();
};
