#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday: Work and Team Meetings.\n";
            break;
        case 2:
            cout << "Tuesday: Project Development and Coding.\n";
            break;
        case 3:
            cout << "Wednesday: Client Discussions and Documentation.\n";
            break;
        case 4:
            cout << "Thursday: Training and Learning Sessions.\n";
            break;
        case 5:
            cout << "Friday: Weekly Review and Report Submission.\n";
            break;
        case 6:
        case 7:
            cout << "Sunday: Family Time and Relaxation.\n";
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7.\n";
    }
    return 0;
} 

/*

This program uses a switch statement to display a work plan based on the day of the week.
The user inputs a number from 1 to 7, and the program outputs the corresponding day's activities. 


Improved Readability – Each case is clearly structured. 
More Efficient – switch jumps directly to the matched case. 
Less Code Duplication – Easier to manage than multiple if-else conditions. 
Works Best for Fixed Inputs – Ideal for cases like menu selection, weekdays, or grading systems.

However, if-else is still useful when handling complex comparisons or ranges (e.g., checking for temperatures, scores, or conditions that switch can't handle).

*/
