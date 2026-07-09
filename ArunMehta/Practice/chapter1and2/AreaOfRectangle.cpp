#include <iostream>
using namespace std;

int main() {
    float length, breadth, area; 

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout <<endl;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;  

    area = length * breadth; 
    cout <<endl;
    cout << "Area of rectangle is " << area; 
    return 0; 
}