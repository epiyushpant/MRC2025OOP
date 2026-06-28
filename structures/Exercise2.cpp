/*A point on the two dimensional place can be represented by two number: an x coordinate
and a y-coordinate for example (4,5) represent a point 4 unilts to right of vertical axis 
and 5 units up from the horizontal axis .The sum of two points scan be defined as a new point whose x coordinates
is the sum of x coordinates of the tow points and whose y coordinate 
is the sum of y coordinates WAP that uses a styructue called point to model a point. Define three points and have the user input to 
two of them .Then let the third pint equal to the sum of the other two and display the value of
new point interaction with the program might look like this
Enter coordinates for p1:3 4
Enter coordinates for p2:5 7
Coordinates of P1+p2 are:8, 11*/
#include<iostream>
using namespace std;
struct point{
    int x ;
    int y;
};
int main() 
{
    point p1,p2,p3;
    cout<<"Enter coordinates of p1:";
    cin>>p1.x>> p1.y;
    cout<<"Enter coordinates of p2:";
    cin>>p2.x>> p2.y;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    cout<<"Coordinates of p1+p2 are:"<<p3.x<<", "<<p3.y;
    return 0;
}
