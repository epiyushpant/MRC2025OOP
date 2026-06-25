//adven.cpp
//demonstrates OR logical operator
#include<iostream>
#include<process.h>
#include<conio.h>
using namespace std;

int main() 
{
    char dir ='a';
    int x=10 ,y=10;
    
    while(dir!='\r') //quit on enter key
    {
        cout<<"\nYour location is"<<x<<","<<y;
        if (x<5 || x>15)
        {
            cout<<"\nBeware dragons lurk here";
        }
cout<<"\nEnter direction (n,s,e,w)";
dir = getche();
switch (dir)
{
    case 'n' : y++ ;break; //update coordinates
    case 's' : y-- ; break; 
    case 'e' : x++ ; break;
    case 'w' :x-- ; break;
} //end switch
}//end while
return 0;
} //end of main
