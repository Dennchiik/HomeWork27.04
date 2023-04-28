#include <iostream>

using namespace std;
#include<Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float distance, speed;
    cout << "Введіть відстань у кілометрах: ";
    cin >> distance;
    cout << "Введіть швидкість у метрах за секунду: ";
    cin >> speed;

    float time_in_seconds = distance * 1000 / speed;

    int hours = time_in_seconds / 3600;
    int minutes = (time_in_seconds - hours * 3600) / 60;
    int seconds = time_in_seconds - hours * 3600 - minutes * 60;

    cout << "Час в дорозі: " << hours << " годин " << minutes << " хвилин " << seconds << " секунд" << endl;

    return 0;
}
