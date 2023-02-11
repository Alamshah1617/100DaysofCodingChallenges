
// Day 7 coding Statement:  Write a program to find Number of days in a given month of a given year
// Description: Get the number of month and year as input from the user and check the number of days present in that month.
// Input
// Enter month : 2
// Enter year : 2000
// Output : 29

#include <iostream>
using namespace std;

int main() {
    int month, year; //Declaring varibles
    cout <<"Enter month (1-12): ";
    cin >> month;                        //Taking month as input
    cout <<  "Enter year: ";
    cin >> year;                        // Taking year as year
    // the program uses an if-else if statement to check the value of the month
    int days;
    // If the month is equal to 2, it checks whether the year is a leap year or not.
    // If it's a leap year, the days variable is set to 29, otherwise it's set to 28.
    if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            days = 29; // leap year
        } else {
            days = 28;
        }
        // If the month is equal to 4, 6, 9, or 11, it sets the days variable to 30.
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31; //Otherwise, it sets the days variable to 31.
    }

    cout << "Number of days in month: " << days << endl;

    return 0;
}
