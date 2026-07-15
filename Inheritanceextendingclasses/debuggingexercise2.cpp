#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"A";
        }
};
class B:public A 
{
    public:
        B()
        {
            cout<<"B";
        }
};
class C:public B 
{
    public:
        C()
        {
            cout<<"C";
        }
};
class D
{
    public:
        D()
        {
            cout<<"D";
        }
};
class E:public C, public D 
{
    public:
        E()
        {
            cout<<"E";
        }
};
class F:virtual E 
{
    public:
        F()
        {
            cout<<"F";
        }
};
int  main()
{
    F f;
    return 0;
}