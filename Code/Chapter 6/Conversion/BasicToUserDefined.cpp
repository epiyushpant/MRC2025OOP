/* In basic to user-defined type conversion, we convert a built-in type (like int, float, double, etc.)
 into a user-defined type (like a class or struct). 
 This is done by defining a constructor in the user-defined class that accepts a basic type as a parameter.
 
 Syntax 
 class ClassName {
    public:
        ClassName(BasicType value) {
            // conversion logic
        }
};

 */ 

#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
public:
    // Constructor for conversion from int to Distance
    Distance(int m) {
        meters = m;
    }

    void display() {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    int d = 100;

    // Basic to user-defined conversion using constructor
    Distance dist = d;  // or Distance dist(d);

    dist.display();

    return 0;
}

 

