//finds power of double n raised to int p use default argument so that the number squares

#include<iostream>
using namespace std;
double power(double, int p=2);//default argument
int main()
{
    int p;
    double n;
    char yesorno;
    cout<<"Enter number:";
    cin>>n;
    cout<<"you want a power";
    cin>>yesorno;
    if(yesorno=='y'){
    cout<<"Enter power:";
    cin>>p;
    cout<<power(n,p);
    }
    else
    {
    cout<<power(n);
    }
    return 0;
}
double power(double number,int power)
{
    double result=1.0;
    for(int j=1;j<=power;j++)
    {
        result *=number;
    }
    return result;
}