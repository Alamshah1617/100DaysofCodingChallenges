#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isdigit(ch)){
        cout << "Invalid Input";
        }
    else if ((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'i') || (ch == 'I') || (ch == 'o') || (ch == 'O') || (ch == 'u') || ch == 'U')
        {
            cout << "Vowel";
        }
        else
        {
            cout << "Consonant";
        }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if (((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'i') || (ch == 'I') || (ch == 'o') || (ch == 'O') || (ch == 'u') || ch == 'U'))
//     {
//         cout << "Vowel";
//     }
//     else
//     {
//         cout << "Consonent";
//     }

//     return 0;
// }