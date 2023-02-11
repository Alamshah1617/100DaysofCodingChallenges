
// Day 22 coding Statement : Write a program to express a number as a sum of two prime numbers
// Description: Get a number as input from the user and express that number as sum of two prime numbers.
// Input: 4
// Output: 4 can be expressed as sum of 2 and 2
#include <iostream>
using namespace std;

bool check_prime(int n);

int main() {

  int n, i;
  bool flag = false;

  cout << "Enter an  integer: ";
  cin >> n;

  for(i = 2; i <= n/2; ++i) {
    if (check_prime(i)) {
      if (check_prime(n - i)) {
        cout << n << " can be expressed as sum of " << i << " and " << n-i << endl;
        flag = true;
      }
    }
  }

  if (!flag)
    cout << n << " can't be expressed as sum of two prime numbers.";

  return 0;
}

bool check_prime(int n) {
  int i;
  bool is_prime = true;

  if (n == 0 || n == 1) {
    is_prime = false;
  }
  
  for(i = 2; i <= n/2; ++i) {
    if(n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
