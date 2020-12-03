#include<iostream>
using namespace std;
int main()
{
	int N;
	double a;
	cout << "Type the value of N: ";
	cin >> N;
	a = 1;
	for (double i = 1; i <= N; i++) {
		a *= 1 + i / 10;
	}
	cout << "Product of multipliers is: " << a << "\n";
}
