#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, oleg, oleg2;
	cout << "Введите число A: ";
	cin  >> A;
	oleg = A * A;
	oleg2 = oleg * oleg;
	oleg = oleg2 * A;
	oleg2 = oleg * oleg * oleg;
	cout << "Число А в пятнадцатой степени равно: " << oleg2;
}