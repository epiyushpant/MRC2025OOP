#include<iostream>
using namespace std;
class shape
{
    protected:
        float x;
        float y;
    public:
        shape():x(0),y(0)
        {}
        shape(float a,float b)
        {
            x=a;
            y=b;
        }
        void getdata(float a,float b)
        {
            x=a;
            y=b;
        }
        virtual void display()
        {
        }
};
class triangle:public shape
{
    public:
    triangle()
    { }
    triangle(float a, float b):shape(x,y)
    {
        a=x;
        b=y;
    }
    void display(){
        cout<<"Area of triangle:"<<0.5*x*y;}
};
class rectangle:public shape
{
    public:
        rectangle()
        {}
        rectangle(float a,float b):shape(x,y)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<"Area of rectangle:"<<x*y;
        }
};
int main()
{
    shape *ptr;
    triangle t1;
    t1.getdata(2,3);
    ptr=&t1;
    ptr->display();
    cout<<endl;
    rectangle r1;
    r1.getdata(2,3);
    ptr=&r1;
    ptr->display();
    return 0;
}