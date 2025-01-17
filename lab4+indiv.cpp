#include <iostream>
#include <string>
using namespace std;

int main() {

    setlocale(LC_ALL, "ru");
    //Задание 1 
    /*


    int const n=5;
    int array[n];


    cout << "Введите " << n << " элементов массива: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int summinus = 0, sumplus = 0;
    int countminus = 0;


    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            summinus += array[i];
            countminus++;
        }
        else if (array[i] > 0) {
            sumplus += array[i];
        }
    }

    cout << "Сумма отрицательных чисел: " << summinus << endl;
    cout << "Количество отрицательных чисел: " << countminus << endl;
    cout << "Сумма положительных чисел: " << sumplus << endl;*/

    //Задание 2
    /*const int rows = 3;
    const int cols = 4;
    string array[rows][cols] = {
        {"можете", "banana", "Убрать", "date"},
        {"две", "fox", "Энки", "hippo"},
        {"практики", "jaguar", "Пожалуйста", "lemon"}
    };

    cout << "Слова, образованные четными элементами каждой строки:\n";

    for (int i = 0; i < rows; ++i) {
        string result = "";
        for (int j = 0; j < cols; j += 2) {
            result += array[i][j];
        }
        cout << result << endl;
    }*/

    //Задание 3
    /*const int rows = 4;
    const int cols = 4;

    int array[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = (i + j) % 2;
        }
    }

    cout << "Результат заполнения массива:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }*/

    //индив4
    const int k = 10;
    int array[k] = { 1, 2, 3, 1, 2, 1, 4, 1, 2, 2 };

    int povtorok = 0;
    int maxchislo = 0;

    for (int i = 0; i < k; ++i) {
        int count = 0;

        for (int j = 0; j < k; ++j) {
            if (array[j] == array[i]) {
                ++count;
            }
        }

        if (count > povtorok) {
            povtorok = count;
            maxchislo = array[i];
        }
    }


    cout << "Наиболее часто встречающееся число: " << maxchislo << endl;
    cout << "Частота: " << povtorok << endl;


    return 0;
}
