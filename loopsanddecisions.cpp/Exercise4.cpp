/*Create 4 function calculator use switch to select operation
and ask user if user want to do another calaulation*/
#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
    float a,b;
    char dummychar;
    char response;
   
    do{
        cout<<"\nEnter first number operator and second number";
        cin>>a>>dummychar>>b;
        switch (dummychar)
        {
            case '/':cout<<a/b;break;
            case '*':cout<<a*b;break;
            case '-':cout<<a-b;break;
            case '+':cout<<a+b;break;
            default: cout<<"Please enter correct operator (/,*,-,+)";

        }
        cout<<"\nDo you wan't to make further calculations(y/n)";
    }while ((response=getche())!='n');
return 0;
}