#include <iostream>
using namespace std;

int main()
{

    char dayOfWeek;
    cout << "Enter any day of week(M, T, W, T, F, S, S): ";
    cin >> dayOfWeek;

    switch (dayOfWeek)
    {
    case 'M':
        cout << "Your entered day is Monday." << endl;
        break;
    case 'T':
        cout << "Your entered day is Tuesday." << endl;
        break;
    case 'W':
        cout << "Your entered day is Wednesday." << endl;
        break;
    case 'Th':
        cout << "Your entered day is Thursday." << endl;
        break;
    case 'F':
        cout << "Your entered day is Friday." << endl;
        break;
    case 'S':
        cout << "Your entered day is Saturday." << endl;
        break;
    case 'Su':
        cout << "Your entered day is Sunday" << endl;
        break;
    default:
        cout << "You entered wrong number!!" << endl;
        break;
    }

    return 0;
}