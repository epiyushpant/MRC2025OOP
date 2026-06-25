//chcnt2.cpp
//counts characters and words typed in
#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
    int chcount = 0;
    int wdcount =1;
    char ch ;

    cout<<"Enter a phrase\n";
    while((ch=getche()) !='\r')
    {
        if (ch==' ')
        {
            wdcount++;
        }
        else 
        {
            chcount++;
        }
    }
    cout<<"words=" <<wdcount<<endl
    <<"letters=" <<chcount<<endl;
    return 0;
}