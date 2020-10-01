#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	cout << "Введите значения точек A, C, B через пробел: ";
	cin >> A >> C >> B;
	cout << "Длина отрезка AC равна: " << abs(A - C) << "\nnДлина отрезка BC равна: " << abs(B - C)
		<< "\nПроизведение длин отрезков равно: " << abs(A - C) * abs(B - C);
	return 0;
}
