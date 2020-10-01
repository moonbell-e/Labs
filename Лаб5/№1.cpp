#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, y1, x2, y2;
	cout << "Введите координаты точек через пробел: ";
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "Расстояние между точками равно:  ";
	cout << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return 0;
}
