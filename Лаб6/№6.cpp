#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, oleg, oleg2;
	cout << "Введите число A: ";
	cin >> A;
	oleg = A * A;
	A = oleg * oleg;
	oleg = A * A;
	cout << "Число А в восьмой степени равно: " << oleg;
}
