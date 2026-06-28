/*four function calculator using structures*/
#include<iostream>
using namespace std;
struct 
fraction {
    int n;
    int d;
};
int main()
{
fraction f1,f2;
char ch;
char ope;
cout<<"Enter first fraction operator and second fraction:";
cin>>f1.n>>ch>>f1.d>>ope>>f2.n>>ch>>f2.d;
switch(ope)
{
    case '+':
    cout<<"Adding";
    cout<<(f1.n*f2.d+f2.n*f1.d)<<ch<<f1.d*f2.d;
    break;
    case '-':
    cout<<"subtracting";
    cout<<(f1.n*f2.d - f2.n*f1.d)<<ch<<f1.d*f2.d;
    break;
    case '*':
    cout<<"Multiplying";
    cout<<f1.n*f2.n<<ch<<f1.d*f2.d;
    break;
    case '/':
    cout<<"Dividing";
    cout<<f1.n*f2.d<<ch<<f1.d*f2.n;
}
return 0; 
}