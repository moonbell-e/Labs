#include <iostream>
using namespace std;
int main()
{
	int A;
	cout << "Type value of number A: ";
	cin >> A;
	if (A % 2 == 0 && A > 9 && A < 100)
	{
		cout << "The statement is true";
	}

	else
	{
		cout << "The statement is not true";
	}
}
