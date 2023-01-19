/*Get an input character from the user and give the ASCII value of the given input as the output.
Using C++
Input: b
Output: 98
Input: B
Output: 66*/

#include <iostream>
using namespace std;

int main()
{
    char input;
    cout << "Enter a Character: ";
    cin >> input;
    cout << "ASCII valve of " << input << " is: " << (int)input << endl;
    return 0;
}