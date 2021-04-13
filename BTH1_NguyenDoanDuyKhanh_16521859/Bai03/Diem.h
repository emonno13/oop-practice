class Diem
{
private:
    float x;
    float y;

public:
    Diem();
    Diem(float x, float y);
    Diem(const Diem &);
    void Nhap();
    void Xuat();
    float KhoangCach(Diem &diem) const;
    ~Diem();
};
