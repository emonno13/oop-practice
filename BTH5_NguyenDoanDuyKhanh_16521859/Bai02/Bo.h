#pragma once

#include "GiaSuc.cpp"

class Bo : public GiaSuc
{
private:
    const string keu = "BoBoBo";

public:
    Bo();
    ~Bo();

    void Xuat() const;
    void Keu() const;
};