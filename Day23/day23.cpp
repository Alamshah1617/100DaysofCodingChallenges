
// Day 23 coding Statement : Write a program to Replace all 0’s with 1 in a given integer
// Description: Get a number as input from the user and find the zeros present in that number.
// Then convert the zeros into one and then print it.
// Input: 310020
// Output: 311121

#include <iostream>
using namespace std;
int main()
{
    int num, num2 = 0;

    cout << "Enter input: ";
    cin >> num;

    if (num == 0)
        num2 = 1;

    while (num > 0)
    {
        int rem = num % 10;
        if (rem == 0)
            rem = 1;
        num = num / 10;
        num2 = num2 * 10 + rem;
    }

    num = 0;

    while (num2 > 0)
    {
        int r = num2 % 10;
        num = num * 10 + r;
        num2 /= 10;
    }

    cout << num;

    return 0;
}