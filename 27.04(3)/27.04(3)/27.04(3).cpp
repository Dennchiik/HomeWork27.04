#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double amount;
    cout << "Введіть суму в гривнях: ";
    cin >> amount;

    int UAH = (int)amount;
    int kopiykas = (int)((amount - UAH) * 100);

    cout << UAH << " гривень " << kopiykas << " копійок" << endl;
    return 0;
}
