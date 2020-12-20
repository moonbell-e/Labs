#include<iostream>

using namespace std;

int Quarter(double x, double y) {
	if (x > 0 && y > 0)
	{
		x = 1;
	}
	else if (x < 0 && y > 0)
	{
		x = 2;
	}
	if (x < 0 && y < 0)
	{
		x = 3;
	}
	else if (x > 0 && y < 0)
	{
		x = 4;
	}
	return x;
}
int main()
{
	double a, b;
	for (int i = 1; i < 4; i++) {
		cout << "Type coordinates of point that is not located on axes OX and OY: ";
		cin >> a >> b;
		cout << "The number of coordinate quarter is: " << Quarter(a, b) << endl;
	}
}
