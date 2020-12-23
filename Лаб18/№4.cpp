#include<iostream>
using namespace std;
int main()
{
	int N, min, max, min_i, max_i;
	min = INT_MAX;
	max = INT_MIN;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
			if (arr[i] < min) {
				min = arr[i];
				min_i = i;
			}
			if (arr[i] > max) {
				max = arr[i];
				max_i = i;
			}
	}
	if (max_i > min_i) {
		for (int i = min_i + 1; i < max_i; i++) {
			arr[i] = 0;
		}
	}
	else {
		for (int i = max_i + 1; i < min_i; i++) {
			arr[i] = 0;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "  ";
	}
}


