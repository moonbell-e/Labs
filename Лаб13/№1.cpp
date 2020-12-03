#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "Type the price for the 1 kilogram of candies: ";
	cin >> x;
	for (float i = 1; i <= 10; i++) {
		float a = i / 10;
		cout << a << " kg of candies costs: " << x * a << "\n";
	}
}

