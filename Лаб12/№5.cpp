#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Type the year: ";
    int year;
    cin >> year;
    string g = "";
    switch (year % 10) {
    case 0:
    case 1:
        g += "white ";
        break;
    case 2:
    case 3:
        g += "black ";
        break;
    case 4:
    case 5:
        g += "green ";
        break;
    case 6:
    case 7:
        g += "red ";
        break;
    case 8:
    case 9:
        g += "yellow ";
        break;
    }

    switch ((year + 8) % 12) {
    case 0:
        g += "rat";
        break;
    case 1:
        g += "cow";
        break;
    case 2:
        g += "tiger";
        break;
    case 3:
        g += "hare";
        break;
    case 4:
        g += "dragon";
        break;
    case 5:
        g += "snake";
        break;
    case 6:
        g += "horse";
        break;
    case 7:
        g += "sheep";
        break;
    case 8:
        g += "monkey";
        break;
    case 9:
        g += "hen";
        break;
    case 10:
        g += "dog";
        break;
    case 11:
        g += "pig";
        break;
    }
    cout << "The year of " << g;
}


