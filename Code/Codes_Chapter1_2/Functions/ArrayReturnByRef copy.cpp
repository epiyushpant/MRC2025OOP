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

// #include<iostream>
// using namespace std;
// void Calcarea(float l, float b){
//     float area = l*b;
//     cout<<"The area of the rectangle is :"<<area<<endl;

// }
// void Calcarea(float side=10.9f){
//     float area = side*side;
//     cout<<"The area of the square is:"<<area<<endl;

// }
// void calcarea(float r){
//     float area = 3.14*r*r;
//     cout<<"The area of circle is"<<area;
// }

// int main(){
//     Calcarea(2.5f, 2.5f);
//     Calcarea();
//     Calcarea(10.0f);
//     return 0;
// }