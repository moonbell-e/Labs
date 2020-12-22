#include<iostream>
using namespace std;
int main()
{
	int N, K, L;
	double sum, am, aver;
	int arr[100];
	cout << "Type the integer number N: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cout << "\nType the integer numbes K and L through space bar: ";
	cin >> K >> L;
	sum = am = 0;
	for (int i = K - 1; i < L; i++) {
		sum += arr[i];
		am += 1;
	}
	aver = sum / am;
	cout << "Average is: " << aver;
}
