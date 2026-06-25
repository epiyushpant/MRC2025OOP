/*make a four function calculator to calcualte the fractions*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    char ch,ope;
    cout<<"Enter 1st fraction ,operator and second fraction:";
    cin>>a>>ch>>b>>ope>>c>>ch>>d;
    switch(ope)
    {
        case '*':
        cout<<(a*c)<<ch<<(b*d);
        break;
        case '+':
        cout<<((a*d)+(b*c))<<ch<<(b*d);
        break;
        case '-':
        cout<<((a*d)-(b*c))<<ch<<(b*d);
        break;
        case '/':
        cout<<(a*b)<<ch<<(b*c);
        break;
    }
    return 0;
}