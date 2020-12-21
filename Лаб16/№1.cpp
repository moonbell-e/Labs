#include<iostream>
using namespace std;
int main()
{
	int N;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		arr[i] = 1 + (i * 2);
	}
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
