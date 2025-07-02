// write a switch program to give remarks about grades.
#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter your grade in 9th class(A - F): ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
        // case 2
    case 'B':
        cout << "Good" << endl;
        break;
    // case 3
    case 'C':
        cout << "Average" << endl;
        break;
    // case 4
    case 'D':
        cout << "Poor" << endl;
        break;
    // case 5
    case 'F':
        cout << "Fail" << endl;
        break;
    // default
    default:
        cout << "You have entered wrong grade." << endl;
        break;
    }
    return 0;
}

/*
+---------------------+
|    Start Program    |
+---------------------+
          |
          v
+---------------------+
|    Read Input       |
+---------------------+
          |
          v
+---------------------+
|     switch(value)   |
+---------------------+
   /       |       \
  v        v        v
+------+ +------+ +------+
|case 1| |case 2| |case 3|
|code  | |code  | |code  |
|break | |break | |break |
+------+ +------+ +------+
          \
           v
       +----------+
       | default  |
       |  code    |
       +----------+
           |
           v
+---------------------+
|     End Program     |
+---------------------+


*/