//adswitch.cpp
//demonstrates switch with adventure
#include<iostream>
#include<conio.h>//for getche()
using namespace std;
int main() 
{
    char dir = 'a';
    int x=10,y=10;
    
    while(dir!='\r')
    {
        cout<<"Your location is"<<x <<","<<y;
        cout<<"\nEnter direction (n,s,e,w)";
        dir = getche(); //get character
        switch(dir)
        {
            case 'n': y++;break; //go north
            case 's':y--;break;//go south
            case 'e':x++;break;//go east
            case 'w':x--;break;//go west
            case '\r':cout<<"Exiting\n";break;
            default : cout<<"Try again\n";
        }//end of switch
    }//end of while
    if (x=8,y=8)
    {
        cout<<" you've found castle";
    }
    return 0;
}//end of main