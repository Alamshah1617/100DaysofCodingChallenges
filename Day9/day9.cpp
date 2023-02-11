
// Day9 coding Statement : Write a program to find Number of digits in an integer
// Description: Take an integer as the input from the user and then calculate the number of digits in the given input and print it as the output.
// Input 3241
// Output 4
// Input 6
// Output 1

// #include <iostream>
// using namespace std;

// int main(){
//     int num, count;
    
//     cout << "Input: ";
//     cin >> num;
    
//     for (count = 0; num > 0; count++){
//         num = num / 10;
//     }
    
//     cout << "Output: " << count << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int num, count;
    cout<<"Input: ";
    cin>>num;

    for (count = 0; num < 0; count++)
    {
        num = num / 10;
    }
     cout <<"output: "<< count << endl;
     return 0;
}