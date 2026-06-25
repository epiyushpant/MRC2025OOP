/*find Time of the compound amount don't worry about decimal time let it be integer*/
#include<iostream>
using namespace std;
int main()
{
    int p;
    float r;
    int t=0;
    float a;
cout<<"Enter initial amount:";cin>>p;
cout<<"Enter Rate";cin>>r;
cout<<"Enter amount";cin>>a;
while(p<a)
{
    p = p*(1+r/100);
    t++;
}
cout<<"Total time taken="<<t<<endl;
return 0;
}