/*make a calculator and reduce its terms to lowest terms make 4 function calculator using switch and operator this is only add*/
#include<iostream>
using namespace std;
class Fraction
{
    private:
        int numerator;
        int denominator;
    public:
        Fraction():numerator(0),denominator(0)
        { }
        Fraction(int n, int d):numerator(n),denominator(d)
        { }
        void input()
        {
            char ch;
            cout<<"Enter fraction:";
            cin>>numerator>>ch>>denominator;
        }
        void display()
        {
            cout<<numerator<<"/"<<denominator;
        }
        void lowterms();
        Fraction add(Fraction a, Fraction b);
    };
    void Fraction :: lowterms()
    {
        long tnum,tden,temp,gcd;
        tnum=labs(numerator);
        tden=labs(denominator);
        if(tden==0)
        {
            cout<<"illegal";exit(1);
        }
        else if(tnum==0)
        {numerator=0;denominator=1;return;}
        if (tnum<tden)
        {temp=tnum;tnum=tden;tden=temp;
        tnum=tnum-tden;
        }
        gcd=tden;
        numerator=numerator/gcd;
        denominator=denominator/gcd;
    }
    Fraction Fraction::add(Fraction a, Fraction b)
    {
        Fraction c;
        c.numerator=a.numerator*b.denominator+b.numerator*a.denominator;
        c.denominator=a.denominator*b.denominator;
        return c;
    }
    int main()
    {
        Fraction f1,f2,f3;
        f1.input();
        f2.input();
        f3=f3.add(f1,f2);
        f3.lowterms();
        f3.display();
        return 0;
    }