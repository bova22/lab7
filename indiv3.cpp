#include <iostream>
#include <cmath>    
#include <iomanip>  

using namespace std;

const double PI = 3.141592653589793;  
long double factorial(int с) {
    if (с == 0 || с == 1) return 1.0;
    long double result = 1.0;
    for (int i = 2; i <= с; ++i) {
        result *= i;
    }
    return result;
}

double S(int n, double x) {
    double sum = 1.0;   
    double term = 1.0;  
    
    for (int i = 1; i <= n; ++i) {
        term *= (x * cos(PI / 4)) / factorial(i); 
        sum += term;  // Добавляем к сумме
    }
    return sum;
}

// Функция Y
double Y(double x) {
    return exp(x * cos(PI / 4)) * cos(x * sin(PI / 4));
}

int main() {
    setlocale(LC_ALL, "Rus");

    const double a = 0.1, b = 1;
    const int n = 120;  
    int steps = 10; 
    double h = (b - a) / steps;  // Шаг по x

    cout << "x: \t \t | S(x) \t \t | Y(x) \n";
    cout << "-----------------------------\n";

    for (int i = 0; i <= steps; ++i) {
        double x = a + i * h;
        cout << fixed << setprecision(6) << x << "\t | "
            << fixed << setprecision(6) << S(n, x) << "\t | "
            << fixed << setprecision(6) << Y(x) << endl;
    }

    return 0;
}
