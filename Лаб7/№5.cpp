#include <iostream>
using namespace std;
int main()
{
	double A, B;
	cout << "Type coefficient A : ";
	cin >> A;
	cout << "Type coefficient B: ";
	cin >> B;
	cout << "The equation has the form: " << A << "x + " << B << " = 0";
	cout << "\n x = " << (double)-B / A;
	return 0;
}
