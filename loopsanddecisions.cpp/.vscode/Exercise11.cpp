/*program that uses three function calculator to add sub and multiply
old british money system and allows you to multiply money with a floating 
point number*/

#include<iostream>
using namespace std;
int main()
{
    float p = 0, s = 0, pe = 0, p1, s1, pe1, p2, s2, pe2, p3, s3, pe3;
    char ope, dot1, dot2;
    float x;
    char ans;
    cout << "Enter first amount (pounds.shillings.pence): " ;
    cin >> p1 >> dot1 >> s1 >> dot1 >> pe1;
    cout << "\nEnter second amount (pounds.shillings.pence): " ;
    cin >> p2 >> dot2 >> s2 >> dot2 >> pe2;
    cout << "\nEnter an operator (-, +, *): " ;
    cin >> ope;
    switch (ope)
    {
    case '*':
    pe=pe1*pe2;
    if(pe>11)
    {
    s++;
    pe-=12;
    }
    s=s*s;
    if(s>19)
    {
    p++;
    s-=20;
    }
    p=p1+p2;
    break;

    case '+':
    pe = pe1+pe2;
    if (pe>11)
    {
    s++;
    pe -=12;
    }
    s=s1+s2;
    if (s>19)
    {
    p++;
    s-=20;
    }
    p=p1+p2;
    break;

    case '-':
    pe = pe1-pe2;
    if(pe<0)
    {
    s--;
    pe+=12;
    }
    s=s1-s2;
    if(s<0)
    {
    p--;
    s+=20;
    break;
    }
    cout<<p<<dot1<<s<<dot2<<pe;
    cout<<"Do you want to multiply continue(y/n):";
    cin >> ans;
    if(ans=='y')
    {
        cout<<"Enter amount ";
        cin>>p3>>dot1>>s3>>dot2>>pe3;
        cout<<"Enter floating point number";
        cin >>x;
        pe=pe3*x;
        if(pe>11)
        {
            s++;
            pe-=12;
        }
        if(s>20)
        {
            p++;
            s-=20;
        }
        cout<<p<<dot1<<s<<dot2<<pe;
    }
}
    return 0;
}