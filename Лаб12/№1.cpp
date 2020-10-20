#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string* months = new string[12]{ " января", " февраля", " марта", " апреля", " мая", " июня", " июля", " августа", " сентября", " октября", " ноября", " декабря" };
    string* t = new string[9]{ "первое", "второе", "третье" , "четвёртое" , "пятое" , "шестое" , "седьмое", "восьмое", "девятое" };
    int day, month;
    cout << "Введите день и месяц\n";
    cin >> day >> month;

    month--;
    string gen = "";

    switch (day / 10) {
    case 0:
        gen += t[(day % 10) - 1];
        gen += months[month];
        break;
    case 1:
        switch (day % 10)
        {
        case 0:
            gen += "Десятое ";
            break;
        case 1:
            gen += "Одиннадцатое ";
            break;
        case 2:
            gen += "Двенадцатое ";
            break;
        case 3:
            gen += "Тринадцатое ";
            break;
        case 4:
            gen += "Четырнадцатое ";
            break;
        case 5:
            gen += "Пятнадцатое ";
            break;
        case 6:
            gen += "Шестнадцатое ";
            break;
        case 7:
            gen += "Семнадцатое ";
            break;
        case 8:
            gen += "Восемнадцатое ";
            break;
        case 9:
            gen += "Девятнадцатое ";
            break;
        }
        gen += months[month];
        break;
    case 2:
        if (day % 10 != 0) {
            gen += "Двадцать ";
            gen += t[(day % 10)];
        }
        else gen += "Двадцатое ";
        gen += months[month];
        break;
    case 3:
        if (day % 10 == 0) {
            gen += "Тридцатое ";
            gen += months[month];
        }
        else if (day % 10 == 1) {
            gen += "Тридцать первое ";
            gen += months[month];
        }
        break;
    }

    cout << gen;
}