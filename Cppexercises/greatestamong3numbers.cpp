#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Type Three numbers:";
    cin >>A>>B>>C;
    if (A>B && A>C)
    {
        cout<<"A is greater";
    }
    else if (B>A && B>C)
    {
        cout<<"B is greater";
    }
    else
    {
        cout<<"C is greater";
    }
    return 0;
}