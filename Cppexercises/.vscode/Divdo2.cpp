//divdo2.cpp
//demonstrates continue statement
#include<iostream>
using namespace std;

int main() 
{
    long dividend,divisor;
    char ch;
    do {
        cout<<"Enter dividend:";cin>>dividend;
        cout<<"Enter divisor:";cin>>divisor;
        if(divisor ==0)
        {
            cout<<"Illegal divisor";
            continue;
        }
        cout<<"Quotient is :"<<dividend/divisor;
        cout<<"Remainder is:" <<dividend%divisor;

        cout<<"Do you want to continue(y/n)";
        cin>>ch;
        } while(ch!='n');
    return 0;
}