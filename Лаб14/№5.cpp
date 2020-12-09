#include<iostream>
using namespace std;
int main()
{
	int A, B;
	cout << "Type the value of A and B through space bar: ";
	cin >> A >> B;
	while (A != 0 && B != 0) {
		if (A > B) {
			A = A % B;
		}
		else {
			B = B % A;
		}
	}
	cout << "The greatest common divisor of A and B is: " << (A + B);
}
