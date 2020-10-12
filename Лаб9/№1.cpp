#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Type quantity of seconds that passed from the start of the day: ";
	cin >> N;
	cout << "Quantity of seconds that passed from the start of the minute: " << N % 60;
}
