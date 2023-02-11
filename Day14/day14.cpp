
// Day 14 coding Statement : Write a program to reverse a given number
// Description: Get an input from the user and the print the reverse of the given number as the output
// E.g. let the number be 324 then the reverse of the number is 423
// Input: 675
// Output: 576

#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Input: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Output: " << reversed_number;

  return 0;
}