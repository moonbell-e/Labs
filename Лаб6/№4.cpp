#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y;
	cout << "Введите значение x: ";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "Значение функции равно: " << y;
}

