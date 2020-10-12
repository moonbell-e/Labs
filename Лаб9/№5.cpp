#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A;
	cout << "Type A(number of the year): ";
	cin  >> A;
	cout << "Number of the century: " << (A - 1) / 100 + 1;
}

