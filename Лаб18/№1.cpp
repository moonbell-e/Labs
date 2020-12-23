#include<iostream>
using namespace std;
int main()
{
	int N, t;
	int A[100], B[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < N; i++) {
		t = A[i];
		A[i] = B[i];
		B[i] = t;
	}
	for (int i = 0; i < N; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		cout << B[i] << "  ";
	}
}
