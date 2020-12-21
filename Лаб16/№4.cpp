#include<iostream>
using namespace std;
int main()
{
	int N;
	int A[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N / 2; i++) {
		cout << " " << A[i];
		cout << " " << A[N - i - 1];
	}
	if (N % 2 != 0) {
		cout << " " << A[(N / 2)];
	}
}
