#include<iostream>
using namespace std;
class A
{
    protected:
        int a,b;
    public:
        A():a(0),b(0)
        {}
        A(int x,int y)
        {
            a=x;
            b=y;
        }
        virtual void print();
};
class B:public A 
{
    private:
        float p,q;
    public:
        B()
        {}
        B(float u,float v):A(a,b)
        {
            p=u;
            q=v;
        }
        void print();
};
void A::print(void)
{
    cout<<"A values :"<<a <<" "<<b<<"\n";
}
void B::print()
{
    cout<<"B values:"<<p<<" "<<q<<"\n";
}
int main()
{
    A a1(10,20);
    B B1(7.5,3.142);
    A *ptr;
    B *ptr1;
    ptr=&a1;
    ptr->print();
    ptr1=&B1;
    ptr1->print();
    return 0;
}
