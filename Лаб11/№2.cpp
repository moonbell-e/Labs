#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cout << "Type value of numbers A, B and C through space bar: ";
    cin >> A >> B >> C;
    if (A > B)
    {
        if (B > C)
        {
            cout << "Sum of two largest numbers = " << A + B;
        }
        else
        {
            cout << "Sum of two largest numbers = " << A + C;
        }
    }
    else
    {
        if (A > C)
        {
            cout << "Sum of two largest numbers = " << A + B;
        }
        else
        {
            cout << "Sum of two largest numbers = " << C + B;
        }
    }
}
