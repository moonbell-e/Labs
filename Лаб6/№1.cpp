#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, B, t;
	cout << "Введите значение первой переменной: ";
	cin >> A;
	cout << "Введите значение второй переменной: ";
	cin >> B;
	t = A;
	A = B;
	B = t;
	cout << "Первая переменная равна: " << A << "\nВторая переменная равна: " << B;
}
