//condi.cpp
//print 'x' every 8 column
//demonstrates conditional operator
#include<iostream>
using namespace std;
int main()
{
    int j;
    for(j=0;j<80;j++)
    {
        char ch=(j%8)? ' ':'x';
        cout<<ch;
    }
    return 0;

}//used to see where does tab space ends in your screen
