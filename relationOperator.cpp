#include <iostream>
using namespace std;

int main()
{
    /*
        More relational operators:

        ==
        <
        >
        <=
        >=
        !=



        
        Logical Operators

        && returns 1 if all conditions are true
        || returns 1 if any condition is true

*/
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Are they equal? " << (a != b) << endl;

    // int math, science;
    // cout << "Enter your marks of Maths & Science: ";
    // cin >> math >> science;

    // cout << "Pass in both subjects: " << (math >= 33 && science >= 33) << endl; //use of AND operator 1 or 0
    // cout << "Pass in at least one subject: " << (math >= 33 || science >= 33) << endl;  //use of OR operator 1 or 0

    return 0;
}

// if true it will print 1
// if false it will print 0
