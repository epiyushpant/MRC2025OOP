#include <iostream>
using namespace std;

// Abstract class
class Document {
public:
    virtual void open() = 0; // Pure virtual function
};

// Concrete class: PDF file
class PDFDocument : public Document {
public:
    void open() override {
        cout << "Opening PDF document..." << endl;
    }
};

// Concrete class: Word file
class WordDocument : public Document {
public:
    void open() override {
        cout << "Opening Word document..." << endl;
    }
};

int main() {
    Document* doc;

    PDFDocument pdf;
    WordDocument word;

    doc = &pdf;
    doc->open();  // Output: Opening PDF document...

    doc = &word;
    doc->open();  // Output: Opening Word document...

    return 0;
}

// Output:
// Concrete class show function called.
// This code demonstrates the use of an abstract class in C++ with a pure virtual function.


//An abstract class in C++ is a class that cannot be instantiated directly and is designed to be inherited by other classes.
//It must contain at least one pure virtual function.

//A pure virtual function is a virtual function that has no implementation in the base class. It is declared using = 0.

//Why to use it 
//1. To define a common interface for derived classes.
//2. To enforce that derived classes implement specific functions.

/*

| Feature                | Explanation                                     |
| ---------------------- | ----------------------------------------------- |
| Abstract Class         | Contains at least one pure virtual function     |
| Cannot be instantiated | You can't create objects of an abstract class   |
| Used for               | Interface design and enforcing derived behavior |
| Must be inherited      | To provide real functionality                   |



A concrete class is a class that:
Can be instantiated (you can create objects of it).
Provides implementations for all its functions, including any abstract (pure virtual) functions it inherits.
Does not have any pure virtual functions itself.
*/

