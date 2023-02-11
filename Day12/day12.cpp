
// Day 12 coding Statement:  Write a program to find Sum of digits of a number
// Description: Get a number from user and then find the sum of the digits in the given number.
// E.g. let the number = 341
// Sum of digits is 3+4+1= 8
// Input: 4521
// Output: 12

#include <iostream>
using namespace std;

int main()
{
	int number, reminder, digitSum;
	
	cout << "Input: ";
	cin >> number;
	
	for(digitSum = 0; number > 0; number = number / 10)
	{
    	reminder = number % 10;
    	digitSum += reminder;
    	
	}
	cout << "Output: " << digitSum;

		
 	return 0;
}
