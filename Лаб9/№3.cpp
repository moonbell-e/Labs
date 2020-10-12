#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cout << "Type  k(number of the day) and n(number of the week) through space bar: ";
	cin >> k >> n;
	cout << "Number of the  day of the week is: " << (k + n - 1) % 7;
}
