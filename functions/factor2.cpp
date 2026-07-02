//factor2.cpp
//calculates factorial using recursion
#include<iostream>
using namespace std;

unsigned long factfunc(unsigned long); //declaration
int main()
{
    int n; //number entered by the user
    unsigned long fact;
    cout<<"Enter a number";
    cin>>n;
    fact=factfunc(n);
    cout<<"Factorial of"<<n<<"is"<<fact<<endl;
    return 0;
}
unsigned long factfunc(unsigned long n)
{
    if (n>1)
    return n*factfunc(n-1);
    else
    return 1;
}