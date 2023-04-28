#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int totalSeconds, remainingSeconds, remainingHours;

    cout << "Введіть кількість секунд: ";
    cin >> totalSeconds;

    remainingSeconds = totalSeconds % (8 * 3600);
    remainingHours = remainingSeconds / 3600;

    cout << "Вам залишилось сидіти на роботі ще " << remainingHours << " годин" << endl;

    return 0;
}
