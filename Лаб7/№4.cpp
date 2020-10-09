#include <iostream>
using namespace std;
int main()
{
	int V1, V2, S, St, sum, T;
	cout << "Type speed of the first car and second car through space bar : ";
	cin >> V1 >> V2;
	cout << "Type the distance between  cars : ";
	cin >> S;
	cout << "Type the time : ";
	cin >> T;
	sum = T * (V1 + V2);
	cout << "General distance is: " << sum;
	St = S + sum;
	cout << "\nThe distance between cars after T hours is: " << St;
	return 0;
}
