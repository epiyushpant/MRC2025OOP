//chcount.cpp
//counts characters and words typed in 
#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
    int chcount=0;//counts non-space characters
    int wdcount=1;//counts spaces between words
    char ch ='a'; //ensure it isn't '/r'

    cout<<"Enter a phrase";
    while(ch!='\r')
    {
        ch=getche(); //read one character
        if (ch== ' ') // if it's a space
        wdcount++;
        else
        chcount++;
    }
    cout<<"\nwords=" <<wdcount<<endl
        <<"letters=" <<(chcount-1) <<endl;
    return 0;
}
