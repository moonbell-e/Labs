#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Type the sides of triangle: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        {
            cout << "The statement is true";
        }
        else
        {
            cout << "The statement is not true";
        }
    }
    else if (b > c && b > a)
    {
        if (pow(b, 2) == pow(a, 2) + pow(c, 2))
        {
            cout << "The statement is true";
        }
        else
        {
            cout << "The statement is not true";
        }

    }
    else
    {

        if (pow(c, 2) == pow(b, 2) + pow(a, 2))
        {
            cout << "The statement is true";
        }
        else
        {
            cout << "The statement is not true";
        }
    }

}
