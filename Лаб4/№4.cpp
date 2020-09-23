#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, s, p, r, ch;
	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;
	s = a * a + b * b;
	p = a * a * b * b;
	r = abs(a * a - b * b);
	ch = (a * a) / (b * b);
	cout << "Cумма равна  " << s << '\n'
		<< "Произведение равно " << p << '\n'
		<< "Разность равна " << r << '\n'
		<< "Частное равно " << ch << '\n';
	return 0;
