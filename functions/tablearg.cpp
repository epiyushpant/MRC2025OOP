//tablearg.cpp
//demonstrates function argument
#include<iostream>
using namespace std;

void repchar(char, int); //function declaration
int main() 
{
    repchar('-',43);
    cout<<"Data Type\tRange"<<endl;
    repchar('=',23);
    cout<<"char\t\t-128 to 128"<<endl
    <<"short\t\t-32,768 to 32,767"<<endl
    <<"int\t\tsystem dependent"<<endl
    <<"double\t\t-2,147,483,648 to 2,147,483,647"<<endl;
    repchar('-',43);
    return 0;
}
//repchar
//function definition
void repchar(char ch,int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}
