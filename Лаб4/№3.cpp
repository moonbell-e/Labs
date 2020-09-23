#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, average;
	cout << "Введите два числа: ";
	cin >> a >> b;
	average = (a + b) / 2;
	cout << "Среднее арифмитическое равно " << average << '\n';
	return 0;
}
