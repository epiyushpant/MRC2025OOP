#include<iostream>
using namespace std;
const int SIZE=3;
class vector
{
    private:
        int v[SIZE];
    public:
        vector(); //constructs null vector
        vector(int *x); //constructs vector from array
        friend vector operator *(int a,vector b);//friend 1
        friend vector operator *(vector b,int a);
        friend istream & operator >> (istream &,vector &);
        friend ostream & operator << (ostream &,vector &);
};
vector::vector()
{
    for(int i=0;i<SIZE;i++)
    v[i]=0;
}
vector ::vector(int *x)
{
    for(int i=0;i<SIZE;i++)
    v[i]=x[i];
}
vector operator *(int a, vector b)
{
    vector c;
    for(int i=0;i<SIZE;i++)
        c.v[i]=a*b.v[i];
    return c;
}
vector operator *(vector b,int a)
{
    vector c;
    for (int i=0;i<SIZE;i++)
        c.v[i]=b.v[i]*a;
    return c;
}
istream & operator >>(istream &din, vector&b)
{
    for (int i=0;i<SIZE;i++)
        din>>b.v[i];
    return (din);
}
ostream & operator <<(ostream &dout, vector &b)
{
    dout<<"("<<b.v[0];
    for (int i=1;i<SIZE;i++)
        dout<<"," <<b.v[i];
        dout<<")";
    return dout;
}

int x[SIZE]={2,4,6};
int main()
{
    vector m; //invokes constructor 1;
    vector n=x;//invokes constructor 2;
    cout<<"Enter elements of vector m"<<"\n";
    cin>>m ;
    cout<<"\n";
    cout << "m="<<m<<"\n"; //invokes operator <<()
    vector p,q;
    p=2*m;
    q=n*2;
    cout<<"\n";
    cout<<"p="<<p<<"\n"; //invokes operator <<()
    cout<<"q="<<q<<"\n"; //invokes operator <<()
    return 0;
}
