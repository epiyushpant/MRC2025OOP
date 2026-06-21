/*Wap to
Enter first fraction = 1/2
Enter second fraction=2/5
sum=9/10
just like a/b+c/d = a*d+b*c/b*d */
#include<iostream>
using namespace std;
int main() 
{
    char dummychar;
    int a ,b,c,d;
    cout<<"Enter first fractional part\n";
    cin >>a>>dummychar>>b;
    cout<<"Enter second fractional part\n";
    cin >>c>>dummychar>>d;
    int numerator = a*d+b*c;
    int denominator = b*d;
    cout<<numerator <<dummychar<<denominator<<endl;
}