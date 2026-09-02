/* calculatea area of rectangle, square,  circle  using function overloading */

#include <iostream>
using namespace std;


void  CalcaulteArea(float  length, float breadth) {
    float area = length * breadth;
    cout << "Area of rectangle is: " << area << endl;
}

void CalcaulteArea(float side) {
    float area = side * side;
    cout << "Area of square is: " << area << endl;
}

void CalcaulteArea(float radius, bool isCircle) {
    if (isCircle) {
        float area = 3.14 * radius * radius;
        cout << "Area of circle is: " << area << endl;
    }
}
int main() { 
    CalcaulteArea(5.0f, 10.0f); // Rectangle
    CalcaulteArea(4.0f); // Square
    CalcaulteArea(3.0f, true); // Circle
    return 0;
}
