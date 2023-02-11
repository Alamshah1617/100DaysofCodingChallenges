
// Day 10 coding Statement:  Write a program to find Factorial of a number
// Description: Get a number from user for which you need to find the factorial, then calculate the factorial and give it as the output.
// Input: 4
// Output: 24

#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
	int res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}

int main()
{
	int num;
    cout << "Input: ";
    cin >> num;
	cout << "Output: " << factorial(num) << endl;
	return 0;
}
