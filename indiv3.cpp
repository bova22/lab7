#include <iostream>
#include <cmath>    
#include <iomanip>  

using namespace std;

const double PI = 3.141592653589793;  // Явное указание значения PI
long double factorial(int с) {
    if (с == 0 || с == 1) return 1.0;
    long double result = 1.0;
    for (int i = 2; i <= с; ++i) {
        result *= i;
    }
    return result;
}

// Разложение функции в ряд
double S(int n, double x) {
    double sum = 1.0;   // Начальный член ряда
    double term = 1.0;  // Инициализация первого члена ряда

    for (int i = 1; i <= n; ++i) {
        term *= (x * cos(PI / 4)) / factorial(i);  // Величина каждого члена ряда
        sum += term;  // Добавляем к сумме
    }
    return sum;
}

// Функция Y, которую нужно сравнить с разложением
double Y(double x) {
    return exp(x * cos(PI / 4)) * cos(x * sin(PI / 4));
}

int main() {
    setlocale(LC_ALL, "Rus");

    const double a = 0.1, b = 1;
    const int n = 120;  // Число членов ряда
    int steps = 10;  // Количество шагов
    double h = (b - a) / steps;  // Шаг по x

    cout << "x: \t \t | S(x) \t \t | Y(x) \n";
    cout << "-----------------------------\n";

    // Вычисление значений и вывод
    for (int i = 0; i <= steps; ++i) {
        double x = a + i * h;
        cout << fixed << setprecision(6) << x << "\t | "
            << fixed << setprecision(6) << S(n, x) << "\t | "
            << fixed << setprecision(6) << Y(x) << endl;
    }

    return 0;
}
