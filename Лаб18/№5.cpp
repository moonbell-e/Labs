#include<iostream>
using namespace std;
int main()
{
	int N, t;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			t = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = t;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "  ";
	}
}
