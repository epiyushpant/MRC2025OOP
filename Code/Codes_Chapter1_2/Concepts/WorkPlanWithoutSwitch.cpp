#include <iostream>
#include <string>

using namespace std;

int main() {
    string day;

    cout << "Enter a day of the week: ";
    cin >> day;

    // Convert input to lowercase for case-insensitive comparison
    for (char &c : day) {
        c = tolower(c);
    }

    if (day == "monday") {
        cout << "Monday: Work and Team Meetings.\n";
    } else if (day == "tuesday") {
        cout << "Tuesday: Project Development and Coding.\n";
    } else if (day == "wednesday") {
        cout << "Wednesday: Client Discussions and Documentation.\n";
    } else if (day == "thursday") {
        cout << "Thursday: Training and Learning Sessions.\n";
    } else if (day == "friday") {
        cout << "Friday: Weekly Review and Report Submission.\n";
    } else if (day == "saturday") {
        cout << "Saturday: Leisure Activities and Sports.\n";
    } else if (day == "sunday") {
        cout << "Sunday: Family Time and Relaxation.\n";
    } else {
        cout << "Invalid day entered. Please enter a valid weekday name.\n";
    }

    return 0;
}


