#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "ru");
    //задание1
    /*int a, b;
    float sum, neg, del, umno;
    cout << "Введите число а и b:";
    cin >> a >> b;
    sum = a + b;
    neg = a - b;
    del = a / b;
    umno = a * b;
    cout << "сумма: " << sum << endl << "разность: " << neg << endl << "частное: " << del << endl << "произведение: " << umno;*/


    //задание 2
        /*int x1 = 2, y1 = 1; 
        int x2 = 2, y2 = -2; 
        bool a = !(x1 * y1 < 0) && (y1 > x1);
        cout << "Результат выражения а: " << (a ? "TRUE" : "FALSE") << endl;
        bool b = (x2 >= 2) || (y2*2 != 5);
        cout << "Результат выражения б: " << (b ? "TRUE" : "FALSE") <<endl;*/

        
    //задание3
    /*float p = 3.14;
    float R,L,S;
    cout << "Введите радиус: ";
        cin >> R;
        S  =  p * R * R;
        L = 2 * p * R;
        
        cout << "длина окружности: " << L << endl << "площадь круга: " << S;*/


    //задание4
    /*int N;
    cout << "Введите число: ";
    cin >> N;

    int y = 0;

    while (N > 0) {
        int units = N % 10;
        y = y * 10 + units;
        N = N / 10;
    }

    cout << "Число, полученное при перестановке: " << y;*/

    //задание5

    int a;
    int b{};
    cout << "введеите два числа: ";
    cin >> a, b;
    bool ab = (a >= 0 || b < -2);
    cout <<  (ab ? "TRUE" : "FALSE") << endl; 




    return 0;
}