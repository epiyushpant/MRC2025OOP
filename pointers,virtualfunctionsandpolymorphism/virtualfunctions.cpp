#include<iostream>
using namespace std;
class Base
{
    public:
        void display(){ cout<<"\nDisplay base";}
        virtual void show(){cout<<"\nshow base";}
};
class Derived:public Base
{
    public:
        void display(){cout<<"\nDisplay derived";}
        void show(){cout<<"\nShow derived";}
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    cout<<"\nbptr points to Base\n";
    bptr = &B;
    bptr->display(); //calls base version
    bptr->show(); //calls base version
    cout<<"\n\n bptr points to derived\n";
    bptr = & D;
    bptr ->display();//calls base version
    bptr ->show();//calls derived version
    return 0;
}