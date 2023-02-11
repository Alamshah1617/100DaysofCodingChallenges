
// Day 18 coding Statement : Write a program to Add two fractions
// Description: Get the values for numerator and denominator of two fractions, then add that fractions. Consider the following format
// x3/y3 = (x1/y1) + (x2/y2)
// here x3 = (x1*y2) + (x2*y1) and y3 = (y1*y2)
// Input: 2  3
//        4  3
// Output: 2/1

#include <iostream>
using namespace std;

int main()
{

    int x1, y1, x2, y2, x3, y3, Div, i;
    cout << "Enter value for x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter value for x2 and y2: ";
    cin >> x2 >> y2;

    x3 = (x1 * y2) + (x2 * y1);
    y3 = y1 * y2;

    if (x3 > y3)
        Div = y3;
    else
        Div = x3;
    for (i = Div; i > 0; i--)
    {
        if (x3 % i == 0 && y3 % i == 0)
        {
            x3 = x3 / i;
            y3 = y3 / i;
        }
    }
    cout << "Sum of two fractions is " << x3 << "/" << y3;

    return 0;
}