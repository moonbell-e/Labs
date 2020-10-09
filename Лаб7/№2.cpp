#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double a, rad;
	cout << " Type the angle value in radians: ";
	cin >> rad;
	a = (rad * 180) / M_PI;
	cout << " Angle value in degrees is: " << a;
	return 0;
}
