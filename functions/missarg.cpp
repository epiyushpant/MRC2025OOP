//miss arg.cpp
//demonstrates missing and default arguments
#include<iostream>
using namespace std;
void repchar(char='*',int=45);//declaration with default arguments
int main()
{
    
    repchar('=');
    repchar('+',30);
    repchar();
    return 0;
}
//repchar()
//displays line of characters
void repchar(char ch,int n) //default supplied if necessary
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}