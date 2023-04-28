#include <iostream>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int seconds;
    cout << "Введіть кількість секунд: ";
    cin >> seconds;

    int days = seconds / (24 * 60 * 60);
    seconds = seconds % (24 * 60 * 60);
    int hours = seconds / (60 * 60);
    seconds = seconds % (60 * 60);
    int minutes = seconds / 60;
    seconds = seconds % 60;

    cout << days << " днів, " << hours << " годин, " << minutes << " хвилин, " << seconds << " секунд";

    return 0;
}
