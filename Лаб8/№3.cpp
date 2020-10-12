#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cout << "Type A and B through space bar: ";
	cin >> A >> B;
	cout << "A line segment of length A contains the maximum possible number of line segments of length B";
	cout << "\nNumber of line segments B on line segment A is: " << A / B;
}
