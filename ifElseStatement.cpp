#include <iostream>
using namespace std;

int main()

{
    char operation;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; // getting numbers from user

    cout << "Enter the operation you want to perform: ";
    cin >> operation; // getting operation from user

    if (operation == '+')
    {
        cout << "Sum of two numbers is: " << a + b << endl;
    }
    else if (operation == '-')
    {
        cout << "Difference of two numbers is: " << a - b << endl;
    }
    else if (operation == '!')
    {
        cout << "Product of two numbers is: " << a * b << endl;
    }
    else if (operation == '/')
    {
        cout << "Division of two numbers is: " << a / b << endl;
    }
    else if (operation == '%')
    {
        cout << "Remainder of two numbers is: " << a % b << endl;
    }
    else
    {
        cout << "Enter valid symbol." << endl;
    }
    return 0;
}