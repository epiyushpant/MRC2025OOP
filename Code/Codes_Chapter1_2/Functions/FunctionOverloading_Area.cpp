// calculate area of a rectancgle, circle , square using function overloading C++

#include <iostream>
using namespace std;
// Function to calculate area of rectangle
void  area(double length, double width) {
    cout << "Area of rectangle: " << length * width  << endl;
}
// Function to calculate area of circle
void area(double radius) {
  cout << "Area of circle : " << 3.14 * radius * radius  << endl;

}
// Function to calculate area of square
void  area(double side, bool isSquare) {
    if (isSquare) {
       cout << "Area of square : " << side * side   << endl;
    }
    else {
    cout << "Invalid input for square area calculation." << endl;
    }
}


void  area(int side) {
     cout << "Area of square : " << side * side   << endl;
}


int main() {
    double length = 5.0, width = 3.0;
    double radius = 2.0;
    double side = 4.0;
    int l = 5; 

    area(length, width); // Calls rectangle area
    area (radius);
    //area(side, true); // Calls square area
    area(l); 


    return 0;
}