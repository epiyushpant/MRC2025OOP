//adelseif.cpp
//demonstrates elst...if with adventure program
#include<iostream>
#include<conio.h> //for getche()
using namespace std;

int main()
{
    char dir='a';
    int x=10,y=10;
    
    cout<<"Type enter to quit\n";
    while(dir != '\r')
    {
        cout<<"your location is" << x<<","<<y;
        cout<<"Enter directions to go(n,s,e,w):";
        
        dir = getche();

        if (dir =='n') //go north
        y--;
        else if (dir =='s') //go south
        y++;
        else if (dir =='e')//go east
        x++;
        else if (dir == 'w')//go west
        x--;
    }
    return 0;
}