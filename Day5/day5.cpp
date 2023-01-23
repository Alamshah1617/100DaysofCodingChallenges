// Day 5 coding Statement:  Write a program to identify if the number is even or odd
// Description: Get a number as input from the user and check whether the given number is odd or even
// Input 10
// Output Even
// Input 5
// Output Odd

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 ==0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}

