// write a program to check how much the bill is for used units
#include <iostream>
using namespace std;

int main()
{
    double units;
    cout << "Enter number of units used: ";
    cin >> units;

    if (units < 100)
    {
        cout << "Monthly bill is: " << units * 25 << endl;
    }
    else if (units < 300)
    {
        cout << "Monthly bill is: " << units * 30 << endl;
    }
    else if (units < 500)
    {
        cout << "Monthly bill is: " << units * 35 << endl;
    }
    else if (units >= 700)
    {
        cout << "Monthly bill is: " << units * 40 << endl;
    }
    else
    {
        cout << "WARNING: You are using too much electricity!!" << endl;
    }

    return 0;
}