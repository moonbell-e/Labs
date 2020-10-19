#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "Type value of A and B through space bar: ";
	cin >> A >> B;
	if (A != B && A > B)
	{
		B = A;
	}
	else if (A != B && B > A)
	{
		A = B;
	}
	else
	{
		A = B = 0;
	}
	cout << "A = " << A << "\nB = " << B;
}

