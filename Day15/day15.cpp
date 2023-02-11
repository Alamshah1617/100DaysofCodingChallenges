
// Day 15 coding Statement : Write a program to identify if the number is Strong number or not
// Description: Get a number as input from user and then check whether that number is a strong number or not. A number is said to be strong number if the sum of the factorial of each digit in the number is same as that of the number.
// E.g. let the number be 145
// Here 1! + 4! + 5! is 1 + 24 + 120 which is equal to 145 itself.
// Input: 121
// Output: Not a strong number
// Input: 2
// Output: Strong number

#include <iostream>
using namespace std;

int main()
{
    int i, n, n1, s1 = 0, j;
    long fact;
    cout << " Input: ";
    cin >> n;
    n1 = n;
    for (j = n; j > 0; j = j / 10) {
        fact = 1;
        for (i = 1; i <= j % 10; i++) {
            fact = fact * i;
        }
        s1 = s1 + fact;
    }
    if (s1 == n1) {
        cout << "Output: " << "Strong number." << endl;
    }
    else {
        cout << "Output: " << "Not a Strong number." << endl;
    }
}
