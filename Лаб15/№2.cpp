#include<iostream>

using namespace std;

int Sign(double X) {
	if (X == 0) {
		return X = 0;
	}
	if (X < 0) {
		return X = -1;
	}
	else {
		return X = 1;
	}
}
int main()
{
	double A, B, sum;
	cout << "Type the value of A and B through space bar: ";
	cin >> A >> B;
	sum = Sign(A) + Sign(B);
	cout << "The value of the expression is: " << sum;
}
