#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, time;

    cout << "Введіть відстань до аеропорту (км): ";
    cin >> distance;
    cout << "Введіть час подорожі (хв): ";
    cin >> time;

    double speed = distance / (time / 60);

    cout << "Щоб дістатися до аеропорту вчасно, потрібно рухатися зі швидкістю " << speed << " км/год" << endl;

    return 0;
}
