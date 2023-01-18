/*Day 2 coding Statement : Write a program to identify if the character is an alphabet or not.
Description: Take an input character from user and check whether it is an alphabet or not.
Input :A
Output: Alphabet
Input:7
Output:Not an alphabet*/

#include <iostream>
using namespace std;
int main()
{
    char charInput;
    cout << "Enter a Character: ";
    cin >> charInput;
    if ((charInput >= 'a' && charInput <= 'z') || (charInput >= 'A' && charInput <= 'Z'))
    {
        cout << "Alphabet";
    }
    else
    {
        cout << "Not an Alphabet";
    }

    return 0;
}