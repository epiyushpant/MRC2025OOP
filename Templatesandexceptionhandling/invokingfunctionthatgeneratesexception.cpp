#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
    cout<<"\nWe are inside the function\n";
    if((x-y)!=0)
    {
        int R=z/(x-y);
        cout<<"Result="<<R<<"\n";
    }
    else
        {
            throw(x-y); //throw point
    }
}
int main()
{
    try {
        cout<<"We are inside try block:";
        divide(10,20,30);//invokes divide()
        divide(10,10,20);//invokes divide()
    }
    catch(int i) //catches the exception
    {
        cout<<"Caught the exception\n";
    }
    return 0;
}