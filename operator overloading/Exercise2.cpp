#include<iostream>
#include<math.h>
using namespace std;
class Polar
{
    private:
    int radius;
    float angle;
    float x;
    float y;
    public:
    Polar():radius(0),angle(0)
    {}
    Polar(int r,float a):radius(r),angle(a)
    {}
    Polar operator +(Polar c);
    void get();
    void display();
    void calc();
    void rec();
};
Polar Polar::operator +(Polar c)
{
    Polar temp;
    temp.radius=radius+c.radius;
    temp.angle=angle+c.angle;
    return temp;
}
void Polar::get()
{
    cout<<"Enter r";
    cin>>radius;
    cout<<"Enter angle";
    cin>>angle;
}
void Polar::display()
{
    cout<<radius;
    cout<<" ";
    cout<<angle;
}
void Polar::rec()
{
    x=radius*cos(angle);
    y=radius*sin(angle);
}
void Polar::calc()
{
    
    angle=atan(y/x);
    radius=sqrt(x*x+y*y);
}
int main()
{
    Polar p1,p2,p3;
    p1.get();
    p2.get();
    p3=p1+p2;
    p3.rec();
    p3.calc();
    p3.display();
    return 0;
}