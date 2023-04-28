#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;

    int int_sum = int(num1) + int(num2);

    float float_sum = (num1 - int(num1)) + (num2 - int(num2));

    cout << "Сума цілих частин: " << int_sum << endl;
    cout << "Сума дробових частин: " << float_sum << endl;

    return 0;
}
