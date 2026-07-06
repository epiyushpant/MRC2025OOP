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
        Fraction(int n,int d):numerator(n),denominator(d)
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
        Fraction add(Fraction a, Fraction b); //declaration
};
Fraction Fraction:: add(Fraction a, Fraction b)
{
    Fraction sum;
    sum.numerator=a.numerator*b.denominator+b.numerator*a.denominator;
    sum.denominator=a.denominator*b.denominator;
    return sum;
}
int main()
{
    Fraction f1,f2,f3;
    f1.input();
    f2.input();
    f3=f3.add(f1,f2);

    f3.display();
    return 0;
}