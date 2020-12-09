#include<iostream>
using namespace std;
int main()
{
	int K, V;
	float S, P;
	V = 1000;
	K = 0;
	S = V;
	cout << "Type the persent of contribution: ";
	cin >> P;
	if ((P < 0) || (P > 25)) {
		cout << "P should be larger than 0 and smaller than 25";
	}
	else {
		while (S <= 1100) {
			K = K + 1;
			S += float(S * (P / 100));
		}
		cout << "The final size of contribution: " << S << "\nThe amount of months: " << K;
	}
}
