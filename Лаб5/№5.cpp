#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x1, y1, x2, y2, x3, y3, a, b, c;
	cout << "Введите координаты точек через пробел: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	cout << "Длины сторон треугольника равны:  " << "\na = " << a
		<< "\nb = " << b
		<< "\nc = " << c
		<< "\nПериметр треугольника равен: " << a + b + c;
	float p = (a + b + c) / 2;
	cout << "\nПлощадь треугольника равна: " << sqrt(p * (p - a) * (p - b) * (p - c));
	return 0;
}
