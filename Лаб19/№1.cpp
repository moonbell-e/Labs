#include<iostream>
using namespace std;
int main()
{
	int N, k;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	k = 0;
	for (int i = 1; i < N; i++) {
		if (arr[k] != arr[i]) {
			k++;
			arr[k] = arr[i];
		}
	}
	k++;
	for (int i = 0; i < k; i++) {
		cout << arr[i] << "  ";
	}
}
