#include <iostream>
using namespace std;
int main()
{
	int A, a, b, c;
	cout << "Type value of three-digit number A: ";
	cin >> A;
	a = A / 100;
	b = A % 100 / 10;
	c = A % 10;
	if ((a > b && b > c) or (a < b && b < c))
	{
		cout << "The statement is true";
	}

	else
	{
		cout << "The statement is not true";
	}
}
