#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Type value of number a: ";
	cin >> a;
	if (a > 0)
	{
		if (a % 2 == 0)
		{
			cout << "a is a positive even number";
		}
		else
		{
			cout << "a is a positive odd number";
		}
	}
	else if (a < 0)
	{
		if (a % 2 == 0)
		{
			cout << "a is a negative even number";
		}
		else
		{
			cout << "a is a negative odd number";
		}
	}
	else if (a == 0)
	{
		cout << "a is a zero number";
	}
}
