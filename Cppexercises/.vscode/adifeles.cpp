//adifeles.cpp
//demonstrates if...else with adventure program
#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
    char dir='a';
    int x=10;
    int y=10;

    cout<<"Type enter to quit";
    while(dir != '\r')
    {
        cout<<"Your location is" <<x<<","<<y;
        cout<<"\nPress directions key(n,s,e,w)";
        dir = getche();//get character
        if(dir =='n')
        {
            y--;
        }
        else
        {
            if(dir=='s')
            {
                y++;
            }
            else
            {
                if(dir =='w')
                {
                    x--;
                }
                else
                {
                    if(dir =='e')
                    {
                        x++;
                    }
                }
            }
        }

    }
    return 0;
}