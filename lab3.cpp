
#include <cmath>
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");

	// Задание 1
	float price, kg, pricekg;
	cout << "введите цену 1 кг конфет: ";
	cin >> pricekg;
	for (kg = 1.2; kg < 2.1; kg += 0.2) {
		price = kg * pricekg;
		cout << "цена " << kg << "кг конфет = " << price << "р" << endl;
	}

	//Задание 2
	/*int N, K;
	int count = 0;

	cout << "введите первый делитель: ";
	cin >> N;
	cout << "введите второй делитель: ";
	cin >> K;
	int ostatok = N;
	while (ostatok >= K) {
		ostatok -= K;
		count++;
	}
	cout << "Частное: " << count;
	cout << "\nОстаток: " << ostatok;*/

	//Задание 3
	/*int N;
	cout << "Введите целое число N (N > 0): ";
	cin >> N;

	int y = 0;

	while (N > 0) {
		int units = N % 10;
		y = y * 10 + units;
		N = N / 10;
	}

	cout << "Число, полученное при прочтении N справа налево: " << y;*/





	return 0;

}

