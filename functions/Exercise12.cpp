/*draw four function calculator with fadd(),fsub(),fmul(),fdiv()*/
#include<iostream>
using namespace std;
struct fraction{
    int numerator;
    int denominator;
};
fraction fadd(fraction,fraction);
fraction fsub(fraction,fraction);
fraction fmul(fraction,fraction);
fraction fdiv(fraction,fraction);
void engldisp(fraction);
char ch;
char ope;
int main()
{
    fraction f1,f2,A,S,M,D;
    cout<<"Enter first fraction:";
    cin>>f1.numerator>>ch>>f1.denominator;
    cout<<"Enter second fraction:";
    cin>>f2.numerator>>ch>>f2.denominator;
    cout<<"select operator:";
    cin>>ope;
    switch(ope)
    {
        case '+':
        A=fadd(f1,f2);
        engldisp(A);
        break;
        case '-':
        S=fsub(f1,f2);
        engldisp(S);
        break;
        case '*':
        M=fmul(f1,f2);
        engldisp(M);
        break;
        case'/':
        D=fdiv(f1,f2);
        engldisp(D);
        break;
    }
return 0;
}
fraction fadd(fraction n,fraction d)
{
fraction FA;
FA.numerator = n.numerator*d.denominator+n.denominator*d.numerator;
FA.denominator=n.denominator*d.denominator;
return FA;
}
fraction fsub(fraction n, fraction d)
{
fraction FS;
FS.numerator =n.numerator*d.denominator-n.denominator*d.denominator;
FS.denominator=n.denominator*d.denominator;
return FS;
}
fraction fmul(fraction n,fraction d)
{
fraction FM;
FM.numerator=n.numerator*d.numerator;
FM.denominator=n.denominator*d.denominator;
return FM;
}
fraction fdiv(fraction n, fraction d)
{
fraction FD;
FD.numerator=n.numerator*d.denominator;
FD.denominator=n.denominator*d.numerator;
return FD;
}
void engldisp(fraction Fdisp)
{
cout<<Fdisp.numerator<<ch<<Fdisp.denominator;
}