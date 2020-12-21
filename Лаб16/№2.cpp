#include<iostream>
using namespace std;
int main()
{
	int N;
	double A, D;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	cout << "\nType the first term and denominator of the geometric progression through space bar: ";
	cin >> A >> D;
	arr[0] = A;
	int s = 1;
	for (int i = 0; i < N; i++) {
		arr[i] = A * s;
		s *= D;
	}
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
