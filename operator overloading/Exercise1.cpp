#include<iostream>
using namespace std;
class Float{
    private:
        float f;
    public:
    Float():f(0)
    {}
    Float(float a):f(a)
    {}
    void getdata(float a)
    {
        f=a;
    }
    void display()
    {
        cout<<f<<endl;
    }
    void operator +();
    void operator -();
    void operator *();
    //void operator /();
};
void Float:: operator +()
{
    f=f+f;
}
void Float ::operator -()
{
    f=f-f;
}
void Float ::operator *()
{
    f=f*f;
}
/*void Float :: operator /()
{
     f=f/f;
}
     */
int main()
{
    Float f1,f2,f3,f4;
    f1.getdata(8);
    +f1;
    f1.display();
    f2.getdata(4);
    -f2;
    f2.display();
    f3.getdata(5);
    *f3;
    f3.display();
    f4.getdata(10);
    // /f4;
    // f4.display();
    return 0;  
}