//fibo.cpp
//demonstrates while loop using fibonacci series
#include<iostream>
using namespace std;
int main() 
{
    unsigned long limit=4294967295;
    unsigned int next = 0;
    unsigned int last = 1;
    while(next < limit/2) //don't let result get too big
    {
        cout<<last<<" "; //display last term
        long sum = next+last; //0+1=1 
        next = last ;//next becomes 1
        last = sum; //last becomes last+next
    }
    cout<<endl;
    return 0;
}