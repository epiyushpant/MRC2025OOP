/*Assume that you want to generate a table of multiples of a number make is in format
10 columns and 20 lines .Wap to generate multiples of a given number.*/
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int num;
    cout<<"Enter a number:";cin>>num;
    for(int j=1;j<=200;j++)
    {
        cout<<setw(5)<<num*j<<" ";
        if(j%10==0)
        {
            cout<<endl;
        }
    }
    return 0;
}