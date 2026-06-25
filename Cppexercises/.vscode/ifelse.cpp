//ifelse.cpp
//demonstrates  if...else statement
#include<iostream>
using namespace std;

int main() 
{
    int x;
    cout<<"Enter a number:";
    cin>> x;
    if (x>100)
    {
        cout<<"That the number is greater than 100";
    }
    else
    {
        cout<<"That the number is less than 100";
    }
    return 0;
}