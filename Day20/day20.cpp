
// Day 20 coding Statement : Write a program to identify if the number is Prime number or not
// Description: Get a number as input from the user and check whether that number is prime or not.
// A prime number is a number with factors as 1 and that number itself.
// Input: 1
// Output: 1 is not a prime number
// Input: 5
// Output: 5 is a prime number

#include<iostream>
using namespace std;
int main(){

    int i, n;
    bool is_prime = true;

    cout<<"Enter an interger: ";
    cin>>n;

    if (n==0 || n==1){
        is_prime = false;
    }

    for ( i = 2; i < n/2; --i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        } 
    }
    
    if (is_prime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
    
    return 0;
}