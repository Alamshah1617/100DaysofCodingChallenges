
// Day 19 coding Statement : Write a program to identify if the number is Armstrong number or not
// Description: Get an input number from user and check whether the given number is an Armstrong number or not.
// E.g. Let the number be 1634,
// Here 1^4 + 6^4 + 3 ^4 + 4^4 = 1634
// Therefore, this is an Armstrong number
// Input: 153
// Output: Armstrong number
// Input: 121
// Output: Not an Armstrong number

#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int num, originalNum, remainder, n = 0, result = 0, power;
   cout << "Enter an integer: ";
   cin >> num;

   originalNum = num;

   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }
   originalNum = num;

   while (originalNum != 0) {
      remainder = originalNum % 10;

      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;
   }

   if (result == num)
      cout << "Armstrong number.";
   else
      cout << "Not an Armstrong number.";
   return 0;
}