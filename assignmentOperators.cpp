#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    --a;               // a = 1-a
    cout << a << endl; // 8 7
    a++;               // a = a+1
    cout << a << endl; // 9
    a += 5;            // a = a+5
    cout << a << endl;

    return 0;
}