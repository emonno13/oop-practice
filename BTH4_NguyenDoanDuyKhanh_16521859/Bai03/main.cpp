#include "MangSoNguyen.cpp"

int main(int argc, char const *argv[])
{

    MangSoNguyen arr, arr2;
    cin >> arr >> arr2;
    cout << "\nMang 1:" << arr << "\nMang 2:" << arr2;
    cout << "\n-----------Mang 1 = Mang 2----------------\n";
    arr = arr2;
    cout << arr;
    cout << "\n------------Mang 1 + Mang 3----------------\n";
    MangSoNguyen arr3, arr13;
    cin >> arr3;
    cout << arr << " + " << arr3;
    arr13 = arr + arr3;
    cout << arr13;

    cout << "\n------------- [ a++ |  ++a ] ----------------\n";
    MangSoNguyen arr4;
    cin >> arr4;
    cout << "========= A =========: " << arr4;
    ++arr4;
    cout << "========= [ ++A ] =======: " << arr4;
    arr4++;
    cout << "========= [ A++ ] =======: " << arr4;
    system("pause");
    return 0;
}
