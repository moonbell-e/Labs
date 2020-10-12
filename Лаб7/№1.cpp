#include <iostream> // код на английском, потому что гитхаб не отображает кириллицу корректно
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	float a, rad, p;
	cout << "Type the angle value in degrees: ";
	cin >> a;
	rad = a * (M_PI / 180);
	cout << "Angle value in radians is: " << rad;
	return 0;
}
