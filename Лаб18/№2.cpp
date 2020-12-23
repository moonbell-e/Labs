#include<iostream>
using namespace std;
int main()
{
	int N;
	double sum, k;
	double A[100], B[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	sum = k = 0;
	for (int i = 1; i <= N; i++) {
		sum += A[i];
		k += 1;
		B[i] = sum / k;
	}
	for (int i = 1; i <= N; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;
	for (int i = 1; i <= N; i++) {
		cout << B[i] << "  ";
	}
}
