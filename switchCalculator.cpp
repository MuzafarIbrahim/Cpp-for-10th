#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;

    int choice;
    cout << "Enter your choice of operation (1 - 5):\n";
    cout << "1. Add\t\t";
    cout << "2. Multiply\n";
    cout << "3. Subtract\t";
    cout << "4. Divide\n";
    cout << "5. Remainder\n";
    cin >> choice;

    cout << "Enter 2nd number: ";
    cin >> num2;

    switch (choice)
    {
    case 1:
        cout << "Addition of your numbers is " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Multiplication of your numbers is " << num1 * num2 << endl;
        break;
    case 3:
        cout << "Subtraction of your numbers is " << num1 - num2 << endl;
        break;
    case 4:
        cout << "Division of your numbers is " << num1 / num2 << endl;
        break;
    case 5:
        cout << "Remainder of your numbers is " << num1 % num2 << endl;
        break;
    default:
        cout << "Wrong choice!!" << endl;
        break;
    }
    return 0;
}
