#include <iostream>
using namespace std;
int main()
{
	int A;
	cout << "Type double digits: ";
	cin >> A;
	cout << "Opposite double digits: " << A % 10 * 10 + A / 10;
}
