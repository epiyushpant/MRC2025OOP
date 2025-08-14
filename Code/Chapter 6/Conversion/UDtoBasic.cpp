
/*

In user-defined to basic type conversion, a class object is converted into a built-in (basic) data type like int, float, double, char, etc.
This is achieved by defining a type conversion function inside the class using the following syntax:

 Syntax:

operator BasicType() {
    // return appropriate value
}
    
*/ 

#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
public:
    Distance(int m) {
        meters = m;
    }

    // User-defined to basic type conversion (Distance -> int)
    operator int() {
        return meters;
    }

    void display() {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    Distance d(150);

    int m = d;  // user-defined to basic type conversion

    cout << "Converted value (int): " << m << " meters" << endl;

    return 0;
}
