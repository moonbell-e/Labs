#include<iostream>
using namespace std;
int main()
{
	int N, odd;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] % 2 != 0) {
			odd = arr[i];
		}
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] += odd;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "  ";
	}
}
