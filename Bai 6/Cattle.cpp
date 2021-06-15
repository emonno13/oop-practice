#include <iostream>
#include "Cattle.h"
#include <random>
#include <time.h>
using namespace std;
//Cattle definition
//Constructor and destructor
Cattle::Cattle()
{
    SetLiterMilk(0);
    SetNumChild(0);
    SetSayToFeed("");
}
Cattle::Cattle(int numchild, int milk, const string say)
{
    SetLiterMilk(milk);
    SetNumChild(numchild);
    SetSayToFeed(say);
}
Cattle::~Cattle()
{
}
//Setter
void Cattle::SetNumChild(int num)
{
    NumChild = num;
}
void Cattle::SetLiterMilk(int milk)
{
    LiterMilk = milk;
}
void Cattle::SetSayToFeed(string say)
{
    SayToFeed = say;
}
void Cattle::Print()
{
    cout << "has " << GetNumChild() << " childs and provide " << GetLiterMilk() << " liters of milk, say " << GetSayToFeed() << " when get hungry.";
}

//definition cow
//Constructor and Destructor
Cow::Cow()
{
    SetSayToFeed(say);
    SetLiterMilk(rand() % 20 + 1);
    SetNumChild(rand() % 10 + 1);
}
Cow::~Cow()
{
}
//other method
void Cow::Say()
{
    cout << say;
}
void Cow::Print()
{
    cout << "Cow ";
    Cattle::Print();
}

//Sheep definition
//Constructor and Destructor
Sheep::Sheep()
{
    SetSayToFeed(say);
    SetLiterMilk(rand() % 5 + 1);
    SetNumChild(rand() % 10 + 1);
}
Sheep::~Sheep()
{
}
//other method
void Sheep::Say()
{
    cout << say;
}
void Sheep::Print()
{
    cout << "Sheep ";
    Cattle::Print();
}

//Goat definition
//Constructor and Destructor
Goat::Goat()
{
    SetSayToFeed(say);
    SetLiterMilk(rand() % 10 + 1);
    SetNumChild(rand() % 10 + 1);
}
Goat::~Goat()
{
}
//other method
void Goat::Say()
{
    cout << say;
}
void Goat::Print()
{
    cout << "Goat ";
    Cattle::Print();
}
