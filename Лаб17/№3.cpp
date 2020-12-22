#include<iostream>
using namespace std;
int main()
{
	int N, min;
	int A[100];
	cout << "Type the integer number N: ";
	cin >> N;
	min = INT_MAX;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		if (A[i] % 2 == 0) {
			if (A[i] < min) {
				min = A[i];
			}
		}
	}
	cout << "Minimum even element of the array is: " << min;
}
