#include <iostream>
using namespace std;
int main()
{
	int A, a, b, c, d;
	cout << "Type value of four-digit number A: ";
	cin >> A;
	a = A % 10;
	b = A % 100 / 10;
	c = A / 100 % 10;
	d = A / 1000;

	if (a == d && b == c)
	{
		cout << "The statement is true";
	}

	else
	{
		cout << "The statement is not true";
	}
}
