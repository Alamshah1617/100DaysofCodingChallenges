
// Day 16 coding Statement : Write a program to identify if the number is Perfect number or not
// Description: Get the input from the user and check whether that number is a perfect number or not.
// E.g. Let number is 28, factors of 28 are 1,2,4,7,14. Now the sum of all these factors are 28 itself.
// Input: 28
// Output: Perfect Number
// Input: 4
// Output: Not a perfect number 

#include<iostream>
using namespace std;
int main()
{ 
    int n, sum = 0;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }else{
            sum = sum;
        }
        
    }
    if (n == sum)
    {
        cout<<"Perfect Number";
    }else{
        cout<<"Not a perfect number";
    }
    

   return 0;
}