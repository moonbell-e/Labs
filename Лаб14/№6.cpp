#include<iostream>
using namespace std;
int main()
{
	int N, F1, F2, K;
	cout << "Type the integer number N: ";
	cin >> N;
	F1 = 1;
	F2 = 1;
	K = 2;
	if (N <= 1) {
		cout << "N should be larger than 1";
	}
	else {
		while (N > F2) {
			F2 = F1 + F2;
			F1 = F2 - F1;
			K += 1;
		}
		cout << "The ordinal number of the Fibonacci number is: " << K;
	}
}
