/* 

User-defined to user-defined type conversion means converting one class type to another. 
This is achieved using either:

A conversion constructor in the target class
A conversion operator in the source class

Two Approaches:
Approach                     Description                                        Defined in 
Conversion Constructor: 	Constructor that takes an object of another class	Target class
Conversion Operator: 	    Operator that returns another user-defined object	Source class



Approach 1: Conversion Constructor
This approach uses a constructor in the target class to convert from one user-defined type to another
Rectangle to Square conversion example
Sorce : Rectangle class 
Target : Square Calss
Put the conversion constructor in the Square class : Rectangle class and call the getSide() method to get the smaller side of the rectangle 

*/ 

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    int getSide() {
        return (length < breadth) ? length : breadth;
    }

};

class Square {
private:
    int side;
    int area;
public:
    // Conversion constructor: Rectangle -> Square
    Square(Rectangle r) {
        side = r.getSide();  // choose smaller side
        //area = r.area(); // get the area of the rectangle
    }

    void display() const {
        cout << "Square with side: " << side 
             << " and area: " << area << endl;
    }
};

int main() {
    Rectangle rect(10, 5);

    // Convert Rectangle to Square using constructor
    Square sq = rect;

    sq.display();

    return 0;
}
