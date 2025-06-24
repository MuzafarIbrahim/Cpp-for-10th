#include <iostream>
using namespace std;

int main()
{

    double temp;
    cout << "Enter room temperature: ";
    cin >> temp;

    cout << " Is it too hot OR too cold? " << (temp < 16 || temp > 25) << endl;
    // if too hot or cold it will return 1
    // if in comfortable region it will give 0

    return 0;
}

// truth table

/*
        int age, marks;
        cout << "Enter your age and marks: ";
        cin >> age >> marks;

        cout << "Is age ≥ 18 AND marks ≥ 50? " << (age >= 18 && marks >= 50);


*/