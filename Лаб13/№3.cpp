#include<iostream>
using namespace std;
int main()
{
	int N, a;
	cout << "Type the value of N: ";
	cin >> N;
	a = 0;
	for (int i = 1; i <= N; i++) {
		a += (2 * i) - 1;
		cout << a << "\n";
	}
	cout << "The square of the N is: " << a << "\n";
}
