#include<iostream>
using namespace std;
int main()
{
	int N;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < N; i++) {
		if (arr[i] > 0) {
			arr[i - 1] = 0;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "  ";
	}
}

