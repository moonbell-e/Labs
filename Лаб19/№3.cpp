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
	arr[max_i + 1] = arr[min_i - 1] = 0;
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "  ";
	}
}
