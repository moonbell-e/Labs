#include<iostream>
using namespace std;
int main()
{
	int N, m, k;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	m = k = 0;
	for (m = 0; m < N; m++) { // 
		for (int i = m + 1; i < N; i++) {
			if (arr[m] == arr[i]) {
				for (k = i; k < N - 1; k++) {
					arr[k] = arr[k + 1];
				}
				N--;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "  ";
	}
}
