#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x1, y1, x2, y2, x3, y3, a, b, c;
	cout << "Введите координаты точек через пробел: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	cout << "Длины сторон треугольника равны:  " << "\na = " << a
		<< "\nb = " << b
		<< "\nc = " << c
		<< "\nПериметр треугольника равен: " << a + b + c;
	float p = (a + b + c) / 2;
	cout << "\nПлощадь треугольника равна: " << sqrt(p * (p - a) * (p - b) * (p - c));
	return 0;
}
