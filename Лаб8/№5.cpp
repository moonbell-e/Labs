#include <iostream>
using namespace std;
int main()
{
	int A;
	cout << "Type triple digits: ";
	cin  >> A;
	cout << "Opposite triple digits: " << A % 100 * 10 + A / 100;
}

