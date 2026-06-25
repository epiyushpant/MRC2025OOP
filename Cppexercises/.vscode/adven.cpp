//adven.cpp
//Demonstrates AND logical operator
#include<iostream>
using namespace std;
#include<process.h> //for exit()
#include<conio.h> //for getche()

int main()
{
    char dir='a';
    int x=10,y=10;
    while(dir!='\r')
    {
        cout<<"\n Your location is " <<x<<","<<y;
        cout<<"\nEnter direction(n,s,w,e)";
        dir = getche();
        switch(dir)
        {
            case 'n':y++;break;
            case 's':y--;break;
            case 'e':x++;break;
            case 'w':x--;break;
        }
        if(x==7 && y==11)
        {
            cout<<"\nyou've found the treasure";
            exit(0);
        }
    } // end of while
    return 0;
}