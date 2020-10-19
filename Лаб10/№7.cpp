#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Type the sides of triangle: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "The statement is true";
    }
    else
    {
        cout << "The statement is not true";
    }
}