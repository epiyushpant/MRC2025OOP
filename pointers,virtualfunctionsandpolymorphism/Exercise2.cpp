#include<iostream>
using namespace std;
class shape
{
    protected:
        int radius;
    public:
    shape()
    {}
    shape(int rad)
    {
        radius=rad;
    }
    void getdata(int rad)
    {
        radius=rad;
    }
    virtual void display()
    {
    }
};
class circle:public shape
{
    public:
    void display(){
    cout<<"Area of circle:"<<3.1415*radius*radius;}
};
int main()
{
    shape *ptr;
    circle c1;
    c1.getdata(5);
    ptr=&c1;
    ptr->display();
    return 0;
}