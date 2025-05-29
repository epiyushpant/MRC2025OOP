#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputStr;
    int number;
    double decimalValue;
    float floatValue;
    char grade;

    cout << "Enter a number as string: ";
    cin >> inputStr;

    // Explicit conversion: string to int using stoi()
    number = stoi(inputStr);

    cout << "Enter a decimal number: ";
    cin >> decimalValue;

    // Explicit conversion: double to int (truncation)
    int truncated = int(decimalValue);   // old-style cast
    int truncated2 = static_cast<int>(decimalValue); // modern explicit cast

    // Implicit conversion: int to float
    floatValue = number; // int is automatically converted to float

    cout << "Enter your grade (A/B/C): ";
    cin >> grade;

    // Explicit conversion: char to int (ASCII value)
    int asciiValue = int(grade);

    cout << "\n--- Output ---\n";
    cout << "String input converted to int: " << number << endl;
    cout << "Decimal number entered: " << decimalValue << endl;
    cout << "Truncated (old cast): " << truncated << endl;
    cout << "Truncated (static_cast): " << truncated2 << endl;
    cout << "Implicit int to float conversion: " << floatValue << endl;
    cout << "Grade: " << grade << ", ASCII: " << asciiValue << endl;

    return 0;
}
