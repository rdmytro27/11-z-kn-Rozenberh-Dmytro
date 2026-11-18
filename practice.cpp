#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    double a, b;

    // Ввудуння даних
    cout << "Введіть катет a: ";
    cin >> a;
    cout << "Введіть катет b: ";
    cin >> b;

    //Перевірка коректності вхідгих даних (згідно з умовою a > 0, b > 0)
    if (a <= 0 || b <= 0) {
        cout << "Помилка: довжинна катетів повинна бути більше 0." << endl;
        return 1; // Завершення програми з помилкою
    }

    // Математична модель
    double S=(a*b)/2.0;

    // Виведення результату
    cout << fixed << setprecision(2); 
    cout << "Площа трикутника: " << S << endl;

    return 0;
}