//extern.cpp
//demonstrates global variables
#include<iostream>
using namespace std;
#include<conio.h> //for getch()

char ch='a';

void getachar(); //function declarations
void putachar();
int main()
{
    while(ch!='\r')
    {
        getachar();
        putachar();
    }
cout<<endl;
return 0;
}
void getachar() //getachar accesses ch
{
    ch=getch();
}
void putachar()
{
    cout<<ch;
    
}