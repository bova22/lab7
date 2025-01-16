#include <iostream>
#include <string>

using namespace std;

struct Discipline {
    string name;
    int grade;
};

struct Student {
    string fio;
    Discipline* disciplines;
    int num_disciplines; 
};

int main() {
    int num_students;
    cout << "Введите количество студентов: ";
    cin >> num_students;

    Student* students = new Student[num_students];

    for (int i = 0; i < num_students; ++i) {
        cout << "Введите Ф.И.О. студента " << i + 1 << ": ";
        cin >> ws; 
        getline(cin, students[i].fio);

        cout << "Введите количество дисциплин для " << students[i].fio << ": ";
        cin >> students[i].num_disciplines;

        students[i].disciplines = new Discipline[students[i].num_disciplines];

        for (int j = 0; j < students[i].num_disciplines; ++j) {
            cout << "Введите название дисциплины " << j + 1 << ": ";
            cin >> ws; 
            getline(cin, students[i].disciplines[j].name);
            cout << "Введите оценку по дисциплине " << students[i].disciplines[j].name << ": ";
            cin >> students[i].disciplines[j].grade;
        }
    }

    for (int i = 0; i < num_students; ++i) {
        cout << "Студент: " << students[i].fio << endl;
        for (int j = 0; j < students[i].num_disciplines; ++j) {
            cout << "Дисциплина: " << students[i].disciplines[j].name
                << ", Оценка: " << students[i].disciplines[j].grade << endl;
        }
    }

    string discipline2;
    cout << "Введите название дисциплины для расчета среднего балла: ";
    cin >> ws; 
    getline(cin, discipline2);

    int totalGrades = 0;
    int count = 0;

    for (int i = 0; i < num_students; ++i) {
        for (int j = 0; j < students[i].num_disciplines; ++j) {
            if (students[i].disciplines[j].name == discipline2) {
                totalGrades += students[i].disciplines[j].grade;
                count++;
            }
        }
    }

    if (count > 0) {
        double average = static_cast<double>(totalGrades) / count;
        cout << "Средний балл по дисциплине " << discipline2 << ": " << average << endl;
    }
    else {
        cout << "Дисциплина " << discipline2 << " не найдена." << endl;
    }

    for (int i = 0; i < num_students; ++i) {
        delete[] students[i].disciplines; 
    }
    delete[] students;

    return 0;
}
