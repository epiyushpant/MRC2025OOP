/*Define two classes polar and rectangle to represent points in polar and rectangle systems use conversion routines
to convert from one system to other*/
#include<iostream>
#include<cmath>
using namespace std;
class rectangle;

class polar{
    int radius;
    float angle;
    public:
        polar():radius(0),angle(0)
        {}
        polar(int r,float a)
        {
            radius=r;
            angle=a;
        }
        void getdata()
        {
            cout<<"Enter radius:";
            cin>>radius;
            cout<<"Enter angle:";
            cin>>angle;
        }
        void display()
        {
            cout<<radius<<","<<angle;
        }
        
        operator rectangle();
        
};
class rectangle
{
    int x;
    int y;
    public:
        rectangle()
        { x=0;
        y=0;}
        rectangle(int a,int b)
        {
            x=a;
            y=b;
        }
        void get()
        {
            cout<<"Enter x";
            cin>>x;
            cout<<"Enter y";
            cin>>y;
        }
        void display()
        {
            cout<<x<<","<<y;
        }
        operator polar()
        {
           
            float radius=sqrt(x*x+y*y);
            float angle=atan(y/x);
            return polar(radius,angle);
        }
        
};
polar ::operator rectangle()
{
        int x=radius*cos(angle);
        int y=radius*sin(angle);
        return rectangle(x,y);
}
int main()
{
polar p1;
rectangle r1;
p1.getdata();
r1=p1;
cout<<"After conversion:";
r1.display();
r1.get();
p1=r1;
cout<<"After conversion:";
p1.display();
return 0;
}