#include<iostream>
using namespace std;
int main()
{
	int A, B, x, y;
	cout << "Type the value of A and B through space bar: ";
	cin >> A >> B;
	x = A;
	y = B;
	if (B > A) {
		cout << "A should be larger than B";
	}
	else {
		for (int i = 1; i <= (x / y); i++) {
			A -= B;
		}
		cout << "A line segment of length A contains the maximum possible number of    line segments of length B"
			<< "\nThe unoccupied part of line segment of lentgh A is : " << A << "\n";
	}
}
