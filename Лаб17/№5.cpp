#include<iostream>
using namespace std;
int main()
{
	int N, d;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	d = arr[1] - arr[0];
	for (int i = 1; i < N - 1; i++) {
		if (arr[i + 1] - arr[i] != d) {
			d = 0;
		}
	}
	if (d != 0) {
		cout <<  d;
	}
	else {
		cout << "0";
	}
}