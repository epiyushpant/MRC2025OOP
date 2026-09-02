#include <iostream>
using namespace std;

// Define a struct named 'Person'
struct Person {
    string name;
    int age;
    double height;
};

int main() {
    // Create an instance of Person
    Person p1;

    // Assign values to the members
    p1.name = "Alice";
    p1.age = 30;
    p1.height = 5.5;

    // Access and print the values
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << " feet" << endl;

    return 0;
}


/* 

In C++, a structure (struct) is a user-defined data type that allows you to group variables of
different types under a single name. 

It is primarily used to represent a record.

Members of a structure can be of different data types.
Memory is allocated only when you create a variable of the structure.
You can access members using the dot (.) operator.

Why Struct ? 
To organize related data (like a record).
To improve readability and maintainability of code.
Often used in collections, like arrays of structures.

*/ 