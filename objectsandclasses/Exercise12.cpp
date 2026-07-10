#include <iostream>
using namespace std;
class fraction
{
    private:
        int numerator;
        int denominator;
    public:
        fraction():numerator(0),denominator(0)
        { }
        fraction(int n,int d):numerator(n),denominator(d) 
        { }
        
        void input(){
            char ch;
            cout<<"Enter denominator or fraction:";
            cin>>numerator>>ch>>denominator;
        }
        int getDenominator() const{
            return denominator;
        }
        void display() {
            cout<<numerator<<"/"<<denominator;
        }
        void lowterm();
        fraction add(fraction a , fraction b);
        fraction multiply(fraction a,fraction b);
};
void fraction::lowterm()
{
    long tnum,tden,temp,gcd;
    tnum=labs(numerator);
    tden=labs(denominator);
    if(tden==0)
    {
        cout<<"Illegal";
        exit(1);
    }
    if (tnum==0)
    {
        numerator=0;
        denominator=1;
        return;
    }
    if(tnum<tden)
    {
        temp=tnum;tnum=tden;tden=tnum;
        tnum=tnum-tden;
    }
    gcd=tden;
    numerator=numerator/gcd;
    denominator=denominator/gcd;
}
fraction fraction ::add(fraction a,fraction b)
{
   fraction c;
   c.numerator=a.numerator*b.denominator+b.numerator*a.denominator;
   c.denominator=a.denominator*b.denominator;
   return c;
}
fraction fraction::multiply(fraction a,fraction b)
{
    fraction c;
    c.numerator=a.numerator*b.numerator;
    c.denominator=a.denominator*b.denominator;
    return c;
}

int main()
{
    fraction f1,f2,sum,product;
    f1.input();
    for(int i=1;i<f1.getDenominator();i++)
    {
        cout<<"      ";
        sum=sum.add(f1,f2);
        sum.display();cout<<" ";
    }
    for(int j=1;j<f1.getDenominator();j++)
    { 
        cout<<endl;
        sum=sum.add(f1,f2);
        for(int j=1;j<f1.getDenominator();j++)
        sum.display();
        cout<<endl;
}
return 0;
}