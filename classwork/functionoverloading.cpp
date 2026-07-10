#include<iostream>
using namespace std;
//area of rectangle
void Area(double l,double b)
{
    cout<<"Area of rectangle is "<<l*b;
}
//arear of circle
void Area(double r)
{

    cout<<"area is:"<<3.14159*r*r<<endl;
}
//area of square
void Area(double side,bool isSquare)
{
    if(isSquare)
    {
        cout<<"Area is"<<side*side<<endl;
    }
    else
    {
        cout<<"invalid";
    }
}

int main()
{
    Area(3.0,5.0);
    cout<<endl;
    Area(6.0);
    Area(4.0,true);
    return 0;
}