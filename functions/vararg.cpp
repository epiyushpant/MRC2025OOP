//vararg.cpp
//demonstrates variable arguments
#include<iostream>
using  namespace std;

void repchar(char,int);

int main() 
{
    char chin;
    int nin;
    cout<<"Enter character to be displayed:";
    cin>>chin;
    cout<<"Enter number of times you want to repeat it:";
    cin>>nin;
    repchar(chin,nin);
    return 0;
}
//repchar()
//function definition
void repchar(char ch,int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}