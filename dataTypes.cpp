#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 23;  // only integer values
    float b = 2.4; // only decimal numbers
    double c = 25; // decimal as well as integer numbers.
    double d = 25.5;
    string name = "Muzafar Ibrahim"; 
    // full letters and characeters, paragraphs, lines etc
    char grade = 'A';                // only letters or characters

    cout << "My name is "<< name;

    return 0;
}

// getline method to read more than one word and spaces.
// getline(cin, academyName);