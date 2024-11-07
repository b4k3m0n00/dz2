#include <iostream>
#include "1.h"

using namespace std;

float celsius;

extern float far;
extern float heit;

int main()
{

    setlocale(LC_ALL, "Russian");

    static float fahrenheit;

    cout << "Введите температуру в градусах Цельсия: ";
    cin >> celsius;

    register auto tempfahrenheit = celsius * far + heit;

    fahrenheit = tempfahrenheit;

    cout << "Температура в градусах Фаренгейта: " << fahrenheit << endl;

    return 0;

}