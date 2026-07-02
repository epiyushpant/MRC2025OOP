//overload.cpp
//demonstrates function overload
//using same function name for different number of arguments
#include<iostream>
using namespace std;

void repchar() ;//function declarations
void repchar(char);
void repchar(char,int);

int main()
{
    repchar();
    repchar('+');
    repchar('=',30);
return 0;
}
void repchar()
{
    for(int j=0;j<45;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
void repchar(char ch)
{
    for(int j=0;j<45;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}
void repchar(char ch,int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}
