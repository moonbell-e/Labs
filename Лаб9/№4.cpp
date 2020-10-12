#include <iostream>
using namespace std;
int main()
{
	int A, B, C, N, K;
	cout << "Type A and B(sides of the rectangle): ";
	cin >> A >> B;
	cout << "Type C(side of the square): ";
	cin >> C;
	N = A / C;
	K = B / C;
	cout << "Quantity of squares that can be fitted in rectangle: "
		<< N * K << "\nUnused part of the rectangle: " << A * B - N * K * (C * C);

}
