#include <iostream>
using namespace std; 
int main()
{
	double A1, B1, A2, B2, C1, C2, key, key1, key2;
	cout << "Type coefficient A1 and A2 through rhe space bar: ";
	cin  >> A1 >> A2;
	cout << "Type coefficient B1 and B2 through the space bar: ";
	cin  >> B1 >> B2;
	cout << "Type coefficient C1 and C2 through the space bar: ";
	cin  >> C1 >> C2;
	cout << "The system of linear equations has the form: "
		 << "\n" << A1 << "x + " << B1 << "y = " << C1 
		 << "\n" << A2 << "x + " << B2 << "y = " << C2;
	key = A1 * B2 - B1 * A2;
	key1 = C1 * B2 - B1 * C2;
	key2 = A1 * C2 - C1 * A2;
	cout << "x = " << key1 / key << "\ny = " << key2 / key;
	return 0;
}