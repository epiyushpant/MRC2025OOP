
// A class template allows you to define a class with generic data types,
// so it can work with different types of data.

// A class template allows you to write a generic class that works with any data type (int, float, string, etc.) 
// without rewriting the code for each type.

// Feature	Description
// Generic code	Write once, use for any type
// Type safety	Compiler checks type at compile time
// Reusability	One class works for many types

#include <iostream>
using namespace std;

// Class template
template <class T>
class Box {
private:
    T value;
public:
    void set(T val) {
        value = val;
    }
    T get() {
        return value;
    }
};

int main() {
    Box<int> intBox;
    intBox.set(100);
    cout << "Integer Box contains: " << intBox.get() << endl;

    Box<string> strBox;
    strBox.set("Template Class");
    cout << "String Box contains: " << strBox.get() << endl;

    return 0;
}
