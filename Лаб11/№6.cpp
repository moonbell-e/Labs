#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Type value of number a: ";
    cin >> a;
    if (a < 10)
    {
        if (a % 2 == 0)
            cout << "a is an even number";
        else
            cout << "a is an odd number";
    }
    else if (a < 100)
    {
        if (a % 2 == 0)
            cout << "a is an even two-digit number";
        else
            cout << "a is an odd two-digit number";
    }
    else if (a < 1000)
    {
        if (a % 2 == 0)
            cout << "a is an even three-digit number";
        else
            cout << "a is an odd three-digit number";
    }
}