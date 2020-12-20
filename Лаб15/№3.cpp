#include<iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

double RingS(double R1, double R2) {
	return pow(R1, 2) * M_PI - pow(R2, 2) * M_PI;
}
int main()
{
	double a, b;
	for (int i = 1; i < 4; i++) {
		cout << "Type the radius values through space bar: ";
		cin >> a >> b;
		cout << "The area of the ring is: " << RingS(a, b) << endl;
	}
}
