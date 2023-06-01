#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Обчислення сантиметрів" << endl;
    const double koef = 2.54;
    double inches;
    double santimetres;
    cout << "Введіть розмір в дюймах" << endl;
    cin >> inches;
    santimetres = inches * koef;
    cout << "Це буде " << santimetres << " сантиметрів." << endl;
    return 0;
}