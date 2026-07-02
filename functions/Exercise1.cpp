//finds area of circle using function
#include<iostream>
using namespace std;
float circarea(float);//declaration
int main()
{
    float r;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"\nArea="<<circarea(r);
    return 0;
}
float circarea(float radius)
{
const float pi=3.1415;
return radius*radius*pi;
}