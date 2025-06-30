#include <iostream>
using namespace std;

int main()
{
    char ch;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == '+')
    {

        cout << "Sum of two numbers is: " << a + b << endl;
    }
    else
    {
        cout << "Invalid character." << endl;
    }
    return 0;
}