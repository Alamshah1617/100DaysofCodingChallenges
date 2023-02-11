
// Write a program to find the Factors of a number
// Description: Get an input from the user and find the factors of the number.
// Input: 4
// Output: 1,2,4  


#include<iostream>
using namespace std;

int main(){

    int n, i;
    cout<<"Enter input number: ";
    cin>>n;

    for ( i = 1; i <=n; ++i)
    {
        if (n % i == 0)
            cout<< i << " ";   
    }
    
    return 0;
}