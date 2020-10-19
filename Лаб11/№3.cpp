#include <iostream>
using namespace std;

int main()
{
	float A, B, C;
	cout << "Type value of points in the plane A, B and C through space bar: ";
	cin >> A >> B >> C;
	if (abs(C - A) < abs(B - A))
	{
		cout << "The nearest point to A is C" <<
			"\nThe distance between points is: " << (abs(C - A));

	}
	else
	{
		cout << "The nearest point to A is B" <<
			"\nThe distance between points is: " << (abs(B - A));
	}
}
