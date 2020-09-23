#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, s, p, r, ch;
	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;
	s = abs(a) + abs(b);
	p = abs(a) * abs(b);
	r = abs(abs(a) - abs(b));
	ch = abs(a) / abs(b);
	cout << "Cумма равна  " << s << '\n' 
		 << "Произведение равно " << p << '\n' 
		 << "Разность равна " << r << '\n' 
		 << "Частное равно " << ch << '\n';
	return 0;
}