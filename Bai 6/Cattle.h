#pragma once
#include <string>
using namespace std;
class Cattle
{
private:
    int NumChild;
    int LiterMilk;
    string SayToFeed;

public:
    //Constructor and destructor
    Cattle();
    Cattle(int numchild, int milk, const string say);
    virtual ~Cattle();
    //Getter
    int GetNumChild() { return NumChild; }
    int GetLiterMilk() { return LiterMilk; }
    string GetSayToFeed() { return SayToFeed; }
    //Setter
    void SetNumChild(int num);
    void SetLiterMilk(int milk);
    void SetSayToFeed(string say);
    //other method
    virtual void Say() = 0;
    virtual void Print();
};
class Cow : public Cattle
{
private:
    const string say = "CowCowCow";

public:
    //Constructor and Destructor
    Cow();
    ~Cow();
    //other method
    virtual void Say();
    void Print();
};
class Sheep : public Cattle
{
private:
    const string say = "SheepSheepSheep";

public:
    //Constructor and Destructor
    Sheep();
    ~Sheep();
    //other method
    virtual void Say();
    void Print();
};
class Goat : public Cattle
{
private:
    const string say = "GoatGoatGoat";

public:
    //Constructor and Destructor
    Goat();
    ~Goat();
    //other method
    virtual void Say();
    void Print();
};
