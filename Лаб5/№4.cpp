#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x1, y1, x2, y2, a, b;
	cout << "Введите координаты точек через пробел: ";
	cin >> x1 >> y1 >> x2 >> y2;
	a = abs(x1-x2);
	b = abs(y1-y2);
	cout << "Периметр прямоугольника  равен: " << 2 * (a + b)
		<< "\nПлощадь прямоугольника равна: " << a * b;
	return 0;
}
