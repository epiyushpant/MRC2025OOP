/*Here endon0.cpp asks the user to series of numbers when number is 0 loop terminates. Here program doesnot know how many mumbers before 0 appears its up to the user*/
#include<iostream>
using namespace std;
int main()
{
    int n=99;//make sure n isn't initialized at 0
    while(n !=0 )//loop until n is 0
    {
        cin>>n;
    }
    cout<<endl;
    return 0;
}