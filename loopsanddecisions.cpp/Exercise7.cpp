/*Exercise about finding compound interest*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double p;
    int T;
    float R;
    long double A;
    cout<<"Enter initial amount:";cin>>p;
    cout<<"Enter No of years:";cin>>T;
    cout<<"Enter interest rate(%per year):";cin>>R;
    A = p * pow(1.0 + R/100.0, T);//A=P*(1+r)^T //formula for compound amount
    cout<<"At the end of"<<T<<"years"<<"you'll have"<<A<<"dollars"<<endl;
    return 0;
}
