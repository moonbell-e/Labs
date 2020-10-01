#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	cout << "Введите значения точек A, B, C через пробел: ";
	cin >> A >> B >> C;
	cout << "Длина отрезка AC равна: " << abs(A - C) << "\nДлина отрезка BC равна: " << abs(B - C)
		<< "\nСумма длин отрезков равна: " << abs(A - C) + abs(B - C);
	return 0;
}
