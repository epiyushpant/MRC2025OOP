/*adding fractions using structures*/
#include<iostream>
using namespace std;
struct fraction
{
    int numerator;
    int denominator;
    char ch;
};
int main()
{
    fraction f1,f2,f3;
    f3.ch='/';
    cout<<"Enter first fraction:";
    cin>>f1.numerator>>f1.ch>>f1.denominator;
    cout<<"Enter second fraction:";
    cin>>f2.numerator>>f2.ch>>f2.denominator;
    f3.numerator=(f1.numerator*f2.denominator)+(f2.numerator*f1.denominator);
    f3.denominator = f1.denominator*f2.denominator;
    cout<<"Answer is:"<<f3.numerator<<f3.ch<<f3.denominator;
    return 0;
}