#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double byte, kilobyte;
	cout << "Type size of the file in bytes: ";
	cin >> byte;
	kilobyte = ceil(byte / 1024);
	cout << "Size of the file in kilobytes: " << kilobyte;
}
