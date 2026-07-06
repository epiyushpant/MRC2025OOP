#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    if(x>y)
    {
        cout<<x<<" is greater than "<< y<<endl;
    }
    else
    {
        cout<<y<<" is greater than "<< x <<endl;
    }
    return 0;
}