#include<iostream>

using namespace std;

double PowerA3(double A) {
	double B;
	B = A * A * A;
	return B;
}
int main()
{
	double a;
	for (int i = 2; i < 7; i++) {
		cout << "Type the number: ";
		cin >> a;
		PowerA3(a);
		cout << a << " to the third power is " << PowerA3(a) << endl;
	}
}
