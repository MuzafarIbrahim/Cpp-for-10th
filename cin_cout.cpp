#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;
    char grade;

    cout << "What is your age? ";
    cin >> age; // takes input from user.
    cout << "What is your grade in 10th? " << endl;
    cin >> grade;

    cin.ignore(); // <-- This line clears the leftover newline from buffer

    cout << "What is your name? ";
    getline(cin, name);

    cout << "My name is " << name << " and I am " 
    << age << " years old. I got " << grade 
    << " in 10th class" << endl;

    return 0;
}

/*
cin doesnt accept any word or character
after the first word.


getline(cin, name)

*/