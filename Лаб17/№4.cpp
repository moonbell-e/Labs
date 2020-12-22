#include<iostream>
using namespace std;
int main()
{
	int N, loc_min;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	loc_min = 1;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = N - 1; i >= 2; i--) {
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
			if (arr[i] < arr[loc_min]) {
				loc_min = i;
			}
		}
	}
	cout << "The last local minimum element of the array is: " << arr[loc_min] << endl
		<< "Number of the last local minimum is: " << loc_min + 1;
}
