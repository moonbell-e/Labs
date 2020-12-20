#include<iostream>

using namespace std;
double Fact2(int N) {
	if (N % 2 == 0) {
		if (N == 0) {
			return 0;
		}
		if (N == 2) {
			return 2;
		}
		return N * Fact2(N - 2);
	}
	else {
		if (N == 0) {
			return 0;
		}
		if (N == 1) {
			return 1;
		}
		return N * Fact2(N - 2);
	}
}
int main()
{
	int N;
	cout << "Type value of number N: ";
	cin >> N;
	cout << "Factorial of the number N is: " << Fact2(N);
}


