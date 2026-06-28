//englarea.cpp
//demonstrates nested structures
#include<iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance Width;
};
int main() 
 {
    Room dining;
    dining.length.feet=13;
    dining.length.inches =6.5;
    dining.Width.feet=10;
    dining.Width.inches = 0.0;
    //convert lenght and width
    float l=dining.length.feet+dining.length.inches/12;
    float w=dining.Width.feet+dining.Width.inches/12;
    cout<<"Dining room area is"<<l*w<< "square feet \n";
    return 0;
 }