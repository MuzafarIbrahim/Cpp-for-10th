#include <iostream>
using namespace std;

int main()
{

    int age;
    int marks;

    cout << "Enter your age and Marks: ";
    cin >> age >> marks;

    cout << "Is the student older than 18 and pass?"
         << (age > 18 && marks >= 33) << endl;

    return 0;
}