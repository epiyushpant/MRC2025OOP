#include<iostream>
using namespace std;
class X
{
    private:
        int x1=5;
    protected:
        int x2=10;
    public :
        int x3=15;
    int showx1()
    {
       return x1;
    }
    int showx2()
    {
        return x2;
    }
};
class Y :public X
{
    public:
        void f()
        {
            int y1,y2,y3;
            y1=showx1();
            y2=x2;
            y3=x3;
        }
};
class Z: public X
{
    public:
        void f()
        {
            int z1,z2,z3;
            z1=showx1();
            z2=x2;
            z3=x3;
        }
};
int main()
{
    int m,n,p;
    Y y;
    m=y.showx1();
    n=y.showx2();
    p=y.x3;
    Z z;
    m=z.showx1();
    n=z.showx2();
    p=z.x3;
    cout<<m<<" "<<n<<" "<<p<<endl;
    cout<<m<<" "<<n<<" "<<p<<endl;
    return 0;
}