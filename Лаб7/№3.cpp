#include <iostream>
using namespace std;
int main()
{
	float X, A, n, Y;
	cout << "Type the amount of kilogramms(X) and price(A) through space bar: ";
	cin >> X >> A;
	n = A / X;
	cout << "1 kg of candies costs: " << n;
	cout << "\nType the amount of kilogramms(Y): ";
	cin >> Y;
	Y = n * Y;
	cout << "Y kg of candies costs: " << Y;
	return 0;
}
