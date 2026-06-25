//divdo.cpp
//demonstrates do loop
#include<iostream>
using namespace std;
int main() 
{
    long dividend,divisor;
    char ch;
    do{
        cout<<"Enter dividend:";cin>>dividend;
        cout<<"Enter divisor:"; cin >> divisor;
        cout<<"Quotient:"<<dividend/divisor;
        cout<<"Remainder:"<<dividend%divisor;
        cout<<"\nDo another? (y/n):"; //do it again?
        cin>>ch;
    } while(ch!='n');
    return 0;
}