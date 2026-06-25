#include<iostream>
using namespace std;
int main() 
{
    unsigned int numb;
    unsigned long int fact = 1;
    cout<<"Enter a number";
    cin>>numb;
for(int j=numb;j>0;j--) //multiply by 1
{
    fact *=j;
}
cout<<"Factorial is "<<fact<<endl;
return 0;
}
