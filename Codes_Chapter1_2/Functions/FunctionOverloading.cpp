#include <iostream>
using namespace std;
// Overloaded function for integer
void printDetails(int age) {
    cout << "Age: " << age << endl;
}

// Overloaded function for string (name)
void printDetails(string name) {
    cout << "Name: " << name << endl;
}

// Overloaded function for both name and age
void printDetails(string name, int age) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

// Overloaded function for name, age, and height (double type)
void printDetails(string name, int age, double height) {
    cout << "Name: " << name << ", Age: " << age << ", Height: " << height << "m" << endl;
}

int main() {
    printDetails(25);                  // Calls age function
    printDetails("Piyush");             // Calls name function
    printDetails("Piyush", 25);         // Calls name & age function
    printDetails("Piyush", 25, 1.75);   // Calls name, age & height function
    return 0;
}


/*  

How It Works
✔ The same function name printDetails() is used for different parameter types. 
✔ The compiler chooses the correct function based on number and type of arguments. ✔ The function supports different data types (int, string, double).

Benefits of Function Overloading with Different Data Types
✅ Enhances code flexibility – One function handles various inputs. 
✅ Improves readability – No need to write separate function names. 
✅ Avoids redundancy – Instead of writing many similar functions, we overload them.

*/