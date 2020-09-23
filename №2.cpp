#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int d;
	float L, π;

	π = 3.14;
	cout << "Введите диаметр окружности: ";
	cin >> d;
	L = d * π;
	cout << "Длина окружности равна " << L << '\n';

	return 0;
}
