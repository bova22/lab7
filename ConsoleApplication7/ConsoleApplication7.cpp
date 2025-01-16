#include <iostream>
#include <cstdlib>  // Для функции rand()
#include <ctime> 
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    //Задание1
    /*int n;
    cout << "Введите размер матрицы: ";
    cin >> n;

    // Динамическое выделение памяти для матрицы
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new int[n];

    // Ввод элементов матрицы
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    bool found = false;

    // Поиск седловой точки
    for (int i = 0; i < n; ++i) {
        int maxRow = matrix[i][0];
        int colIndex = 0;

        // Находим максимальный элемент в строке
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] > maxRow) {
                maxRow = matrix[i][j];
                colIndex = j;
            }
        }

        // Проверяем, является ли этот элемент минимальным в столбце
        bool isMinInCol = true;
        for (int k = 0; k < n; ++k) {
            if (matrix[k][colIndex] < maxRow) {
                isMinInCol = false;
                break;
            }
        }

        if (isMinInCol) {
            cout << "Седловая точка найдена: " << maxRow << " на позиции (" << i << ", " << colIndex << ")" << endl;
            found = true;
            break;
        }
    }

    for (int i = 0; i < n; ++i)
        delete[] matrix[i];
    delete[] matrix;*/

    //задание2
    int n;
    cout << "Введите количество элементов массива (n < 10): ";
    cin >> n;

    // Выделение динамической памяти для массива
    int* A = new int[n];

    // Инициализация генератора случайных чисел
    srand(time(0));
    cout << "Инициализированный массив: ";
    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 100 + 1;  // Генерация положительных чисел от 1 до 100
        cout << A[i] << " ";
    }
    cout << endl;

    // Добавление нового элемента перед i-м элементом
    int X, pos;
    cout << "Введите значение X для добавления: ";
    cin >> X;
    cout << "Введите позицию (i), перед которой нужно вставить X (0 <= i <= " << n << "): ";
    cin >> pos;



    // Расширение массива
    int* newA = new int[n + 1];
    for (int i = 0, j = 0; i < n + 1; ++i) {
        if (i == pos) {
            newA[i] = X;  // Вставка нового элемента на позицию pos
        }
        else {
            newA[i] = A[j];  // Копирование оставшихся элементов
            j++;
        }
    }

    // Освобождение памяти старого массива
    delete[] A;

    // Новый массив становится текущим
    A = newA;
    n++;

    // Вывод обновленного массива
    cout << "Обновленный массив: ";
    for (int i = 0; i < n; ++i) {
        cout << *(A + i) << " ";  // Использование указателя для доступа к элементам
    }
    cout << endl;

    // Освобождение памяти
    delete[] A;



    return 0;
}
