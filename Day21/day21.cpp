
// Day 21 coding Statement : Write a program to identify if the number is Palindrome or not
// Description: Get a number as input from the user and check whether that number is a Palindrome or not.
// Input: 121
// Output: Palindrome
// Input: 34
// Output: Not a Palindrome

#include<iostream>
using namespace std;

int main(){

    int n, num, digit, rev = 0;
    cout<<"Enter an Integer: ";
    cin>>num;
    n = num;

    while (num!=0)
    {
        digit = num%10;
        rev = (rev * 10) + digit;
        num = num/10;
    }
    if (n==rev)
    {
        cout<<"Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
    

    return 0;
}