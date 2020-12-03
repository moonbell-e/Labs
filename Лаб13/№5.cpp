#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int N;
	double A, sum;
	sum = 1;
	cout << "Type the value of N and A through space bar: ";
	cin >> N >> A;
	for (double i = 1; i <= N; i++) {
		sum += pow(A, i) * pow(-1, i);
	}
	cout << "The value of expression is: " << sum << "\n";
}
