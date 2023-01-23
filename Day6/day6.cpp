// Day 6 coding Statement:  Write a program to find the Quadrants in which coordinates lie
// Get the value of x and y coordinates as input from the user and check in which quadrant the point lies and print it.

// Input 10 20
// Output This point lies in first quadrant.
// Input -10 20
// Output This point lies in second quadrant.

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "This point lies on the first quadrant." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "This point lies on the second quadrant." << endl;
    }
    else
    {
        cout << "This point lies on the x or y axis." << endl;
    }

    return 0;
}
