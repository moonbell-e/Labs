#include<iostream>
using namespace std;
int main()
{
	int N, A, B;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	cout << "\nType the first and the second array elements through space bar: ";
	cin >> A >> B;
	arr[0] = A;
	arr[1] = B;
	for (int i = 0; i < N; i++) {
		arr[i + 2] = arr[i + 1] + arr[i];
	}
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
