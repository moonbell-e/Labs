#include<iostream>
using namespace std;
int main()
{
	int A, B, x;
	cout << "Type the value of A and B through space bar: ";
	cin >> A >> B;
	x = A;
	if (A > B) {
		cout << "B should be larger than A";
	}
	else {
		cout << "All numbers from A to B: \n";
		for (int i = 1; i <= (B - x - 1); i++) {
			A += 1;
			for (int j = 1; j <= A; j++) {
				cout << A << "\n";
			}
		}
	}
}
