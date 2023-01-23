// Day 4 coding Statement:  Write a program to identify of the a number is positive or negative

// Description:
// Get an input number from the user and check whether it is a positive or negative number.

// Input : -10
// Output : Negative number
// Input : 0
// Output : Neither positive nor negative
// Input : 15
// Output : Positive number

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Positive number";
    }
    else if (number < 0)
    {
        cout << "Negative number";
    }
    else
    {
        cout << "Neither positive nor negative";
    }
    return 0;
}