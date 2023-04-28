// 27.04(6).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int start_hour, start_min, start_sec;
    int end_hour, end_min, end_sec;

    cout << "Введіть час початку дзвінка (hh mm ss): ";
    cin >> start_hour >> start_min >> start_sec;

    cout << "Введіть час завершення дзвінка (hh mm ss): ";
    cin >> end_hour >> end_min >> end_sec;

    int start_time = start_hour * 3600 + start_min * 60 + start_sec;
    int end_time = end_hour * 3600 + end_min * 60 + end_sec;
    int duration = end_time - start_time;

    double cost = (duration / 60.0) * 0.15;
    cout << "Вартість розмови складає " << cost << " гривень" << endl;

    return 0;
}
