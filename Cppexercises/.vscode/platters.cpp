//platters.cpp
//demonstrates switch statement
//if your output depends same variable you can use switch statement 
//instead of if...else ladder and else...if ladder
#include<iostream>
using namespace std;

int main() 
{
    int speed; //turntable speed
    cout<<"\nEnter speed 38,45 or 78:";
    cin >>speed; //enter users speed
    switch(speed) //selection based on speed
    {
        case 38:
        cout<<"LP album\n";
        break;
        case 45:
        cout<<"Single selection";
        break;
        case 78:
        cout<<"Obsulute format\n";
        break;
    }    
return 0;
}