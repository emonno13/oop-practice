#include <iostream>
#include "SoPhuc.cpp"

int main(int argc, char *argv[])
{
    SoPhuc a, b;
    cin >> a >> b;
    cout << a << b;
    SoPhuc Cong, Tru, Nhan, Chia;
    Cong = a + b;
    Tru = a - b;
    Nhan = a * b;
    Chia = a / b;
    cout << Cong << Tru << Nhan << Chia << endl;

    if (a == b)
        cout << "\n A == B\n";
    if (a != b)
        cout << "\n A != B\n";

    system("pause");
    return 0;
}