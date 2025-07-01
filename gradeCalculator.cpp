// write a program to check what grade a student achieves on certain marks.

#include <iostream>
using namespace std;

int main()
{

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 50)
    {
        cout << "Fail" << endl;
    }
    else if (marks < 60)
    {
        cout << "C grade" << endl;
    }
    else if (marks < 70)
    {
        cout << "B grade" << endl;
    }
    else if (marks < 80)
    {
        cout << "A Grade" << endl;
    }
    else if (marks >= 80)
    {
        cout << "A1 grade" << endl;
    }

    return 0;
}