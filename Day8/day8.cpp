
// // Day 8 coding Statement:  Write a program to find roots of a quadratic equation
// // Description: Get the values of a, b and c (coefficients of quadratic equation) as input from the user and calculate the roots and print as the output.
// // Input
// // Enter the value of a, b and c : 1 -6 9
// // Output
// // Roots are equal
// // Root 1= root 2 = 3.00
// /*  C++ Program to Find Roots of Quadratic Equation using if else  */

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {

//     double a, b, c, root1, root2, determinant, realPart, imaginaryPart;
//     cout << "Enter value a : ";
//     cin >> a ;
//     cout << "\nEnter value b : ";
//     cin >> b ;
//     cout << "\nEnter value c : ";
//     cin >> c ;

//     determinant = b*b - 4*a*c;

//     if (determinant > 0)
//     {
//         root1 = (-b + sqrt(determinant)) / (2*a);
//         root2 = (-b - sqrt(determinant)) / (2*a);
//         cout << "\nRoots are real and different." << endl;
//         cout << "\nroot1 = " << root1 << endl;
//         cout << "\nroot2 = " << root2 << endl;
//     }

//     else if (determinant == 0)
//     {
//         cout << "\nRoots are equal" << endl;
//         root1 = (-b + sqrt(determinant)) / (2*a);
//         cout << "\nRoot1 = root2 = " << root1 << endl;
//     }

//     else
//     {
//         realPart = -b/(2*a);
//         imaginaryPart =sqrt(-determinant)/(2*a);
//         cout << "\nRoots are different."  << endl;
//         cout << "\nroot1 = " << realPart << "+" << imaginaryPart << "i" << endl;
//         cout << "\nroot2 = " << realPart << "-" << imaginaryPart << "i" << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    double a, b, c, d, root1, root2, real, imag;
    cout << "Enter value of a, b and c: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        cout << "There are two Real Roots\n";
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "root1 =" << root1 << "root2 = " << root2;
    }
    else if (d == 0)
    {
        cout << "Roots are equal\n";
        root1 = root2 = -b / (2 * a);
        cout << "root1 = root2 = " << root1;
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        cout << "No Real Roots\n";
        cout << "root1 = " << real << "+" << imag << " root2 = " << real << "-" << imag;
    }
    return 0;
}
