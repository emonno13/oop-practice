#include "Apollo.h"

void Apollo::setN(const int &N) { this->N = N; };
int Apollo::getN() const { return this->N; };

Apollo::Apollo(){};

Apollo::Apollo(string sohieu, string ten, int hesoAlpha, int N) : PhiThuyen(sohieu, ten, hesoAlpha)
{
    setN(N);
};

Apollo::~Apollo(){};