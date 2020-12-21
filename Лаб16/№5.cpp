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
		for (int i = 0; i < N; i++) {
			if (A[i] % 2 != 0) {
				cout << " " << A[i];
			}
		}
		for (int i = N - (N % 2) - 1; i >= 1; i -= 2) {
			if (A[i] % 2 == 0) {
				cout << " " << A[i];
			}
		}
}
		


	