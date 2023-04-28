#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float cena, skidka, suma;
    int kilkist;
    
    cout << "Введіть ціну одного ноутбука: ";
    cin >> cena;
    
    cout << "Введіть кількість ноутбуків: ";
    cin >> kilkist;
    
    cout << "Введіть відсоток знижки: ";
    cin >> skidka;

    suma = cena * kilkist * (1 - skidka / 100);

    cout << "Загальна сума: " << suma << endl;

    return 0;
}
