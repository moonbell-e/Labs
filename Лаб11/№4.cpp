#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Type value of point that is not located on axes OX and OY: ";
	cin >> x >> y;
	if (x > 0 && y > 0)
	{
		cout << "The point is located on first coordinate quarter";
	}
	else if (x < 0 && y > 0)
	{
		cout << "The point is located on second coordinate quarter";
	}
	if (x < 0 && y < 0)
	{
		cout << "The point is located on third coordinate quarter";
	}
	if (x > 0 && y < 0)
	{
		cout << "The point is located on fourth coordinate quarter";
	}
}
