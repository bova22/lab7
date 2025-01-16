using namespace std;
#include <iostream>
#include <cmath>
#include <iomanip>



int main(){
	setlocale(LC_ALL, "ru");

	//Задание 1(3)
	float x,skidka;
	cout << "введите сумму покупки: ";
	cin >> x;
		
	if (x <= 1000) {
		cout << "цена покупки: " << x << "р";
	}
	else {
		skidka = x / 100 * 10;
		x -= skidka;
		cout << x << "p";
	}

	//Задание 2(3) 
	/*float R, a;

    cout << "Введите радиус окружности R: ";
    cin >> R;

    cout << "Введите сторону треугольника a: ";
    cin >> a;

    float requiredR = a / sqrt(3);
  
    if (R >= requiredR) {
        cout << "Равносторонний треугольник со стороной " << a 
                  << " может быть описан окружностью радиусом " << R << "." << endl;
    } else {
       cout << "Равносторонний треугольник со стороной " << a 
                  << " не может быть описан окружностью радиусом " << R << "." << endl;
    }*/
	
	//Задание 3(3)
    /*string cityCode;
    int duration;


   cout << "Вычисление стоимости разговора по телефону." << endl;
    cout << "Город\t\tКод\tЦена минуты, руб." << endl;
    cout << "Владивосток\t423\t2.2" << endl;
    cout << "Москва\t\t095\t1.0" << endl;
    cout << "Мурманск\t815\t1.2" << endl;
    cout << "Самара\t\t846\t1.4" << endl;

   
    cout << "Введите код города: ";
    cin >> cityCode;
    cout << "Длительность (целое количество минут) -> ";
    cin >> duration;

    
    string cityName;
    double pricePerMinute = 0.0;

    
    if (cityCode == "423") {
        cityName = "Владивосток";
        pricePerMinute = 2.2;
    }
    else if (cityCode == "095") {
        cityName = "Москва";
        pricePerMinute = 1.0;
    }
    else if (cityCode == "815") {
        cityName = "Мурманск";
        pricePerMinute = 1.2;
    }
    else if (cityCode == "846") {
        cityName = "Самара";
        pricePerMinute = 1.4;
    }
    else {
        cout << "Некорректный код города!" << endl;
        return 1; 
    }

    
    double totalCost = pricePerMinute * duration;

    
    cout << "Город: " << cityName
        << " Цена минуты: " << fixed << setprecision(2) << pricePerMinute
        << " руб. Стоимость разговора: " << totalCost << " руб." << endl;*/
     //Задание 4(3)
   
       /* int birthYear, birthMonth, birthDay;
        int currentYear, currentMonth, currentDay;

        cout << "Введите год рождения (YYYY): ";
        cin >> birthYear;
        cout << "Введите номер месяца рождения (1-12): ";
        cin >> birthMonth;
        cout << "Введите день рождения (1-31): ";
        cin >> birthDay;

        cout << "Введите текущий год (YYYY): ";
        cin >> currentYear;
        cout << "Введите текущий номер месяца (1-12): ";
        cin >> currentMonth;
        cout << "Введите текущий день (1-31): ";
        cin >> currentDay;

        int age = currentYear - birthYear;

        if (currentMonth < birthMonth ||
            (currentMonth == birthMonth && currentDay < birthDay)) {
            age--; 
        }

        cout << "Возраст человека: " << age << " полных лет." << endl;*/

         



	return 0;
}

