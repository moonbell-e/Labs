#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, S, P;
	cout << "Введите стороны прямоугольника: ";
	cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь S равна " << S << '\n' << "Периметр P равен " << P;
	return 0;
}
