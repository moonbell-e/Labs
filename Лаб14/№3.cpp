#include<iostream>
using namespace std;
int main()
{
	int N, K, sum;
	cout << "Type the integer number N: ";
	cin >> N;
	sum = 0;
	K = 0;
	if (N <= 1) {
		cout << "N should be larger than 1";
	}
	else {
		while (sum < N) {
			K = K + 1;
			sum += K;
		}
		cout << "The smallest integer K for which the sum is larger or equal to N: " << K
			<< "\nThe sum is: " << sum;
	}
}
